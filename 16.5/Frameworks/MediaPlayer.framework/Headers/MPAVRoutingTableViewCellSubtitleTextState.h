// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPAVROUTINGTABLEVIEWCELLSUBTITLETEXTSTATE_H
#define MPAVROUTINGTABLEVIEWCELLSUBTITLETEXTSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject

@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (copy, nonatomic) NSString *batteryText; // ivar: _batteryText
@property (nonatomic) NSUInteger currentVisibleTextType; // ivar: _currentVisibleTextType
@property (readonly, nonatomic) BOOL hasVisibleTextTypeToShow;
@property (readonly, nonatomic) BOOL hasVisibleTextTypeToTransitionTo;
@property (copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (copy, nonatomic) NSString *pairedDeviceText; // ivar: _pairedDeviceText
@property (copy, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (readonly, copy, nonatomic) NSString *stringForCurrentVisibleTextType;


-(NSUInteger)_nextAvailableVisibleTextType;
-(id)_stringForVisibleTextType:(NSUInteger)arg0 ;
-(void)resetForNewRoute;
-(void)transitionToNextAvailableVisibleTextType;


@end


#endif
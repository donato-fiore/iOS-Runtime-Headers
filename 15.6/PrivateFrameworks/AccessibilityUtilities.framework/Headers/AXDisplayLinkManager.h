// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDISPLAYLINKMANAGER_H
#define AXDISPLAYLINKMANAGER_H

@class NSMutableSet, CADisplayLink;

#import <Foundation/Foundation.h>


@interface AXDisplayLinkManager : NSObject

@property (retain, nonatomic) NSMutableSet *activeTargetActions; // ivar: _activeTargetActions
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic, getter=isHandlingDisplayRefresh) BOOL handlingDisplayRefresh; // ivar: _handlingDisplayRefresh
@property (nonatomic) BOOL hasUpdatedTargetActions; // ivar: _hasUpdatedTargetActions
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) CADisplayLink *storedDisplayLink; // ivar: _storedDisplayLink
@property (readonly, nonatomic) CGFloat timestamp;
@property (retain, nonatomic) NSMutableSet *updatedTargetActions; // ivar: _updatedTargetActions
@property (readonly, nonatomic, getter=isWarmUpModeEnabled) BOOL warmUpModeEnabled;
@property (nonatomic) NSUInteger warmUpModeRequirementsCount; // ivar: _warmUpModeRequirementsCount


+(id)currentDisplayLinkManager;
+(void)_releaseCurrentDisplayLinkManager;
-(id)_prepareUpdatedTargetActionsForModification;
-(id)init;
-(void)_didAddFirstTargetAction;
-(void)_didRemoveLastTargetAction;
-(void)_displayDidRefresh:(id)arg0 ;
-(void)addTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(void)removeTarget:(id)arg0 selector:(SEL)arg1 ;


@end


#endif
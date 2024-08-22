// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEADDSTOPACTIONROWITEMVIEWMODEL_H
#define MUPLACEADDSTOPACTIONROWITEMVIEWMODEL_H

@class NSString, GEOMapItemDetourInfo, MKETAProvider;
@protocol MKETAProviderObserver;


#import "MUActionRowItemViewModel.h"

@interface MUPlaceAddStopActionRowItemViewModel : MUActionRowItemViewModel <MKETAProviderObserver>

 {
    BOOL _hiddenWhileWaitingForETA;
    CGFloat _etaTravelTime;
}


@property (readonly, nonatomic) BOOL canShowDetourTime; // ivar: _canShowDetourTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOMapItemDetourInfo *detourInfo; // ivar: _detourInfo
@property (readonly, nonatomic) MKETAProvider *etaProvider; // ivar: _etaProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSearchAlongRoute; // ivar: _isSearchAlongRoute
@property (readonly) Class superclass;


-(BOOL)isEnabled;
-(BOOL)isHidden;
-(id)accessibilityIdentifier;
-(id)analyticsButtonValue;
-(id)initWithSearchAlongRoute:(BOOL)arg0 ETAProvider:(id)arg1 detourInfo:(id)arg2 canShowDetourTime:(BOOL)arg3 ;
-(id)preferredBackgroundColor;
-(id)preferredTintColor;
-(id)symbolName;
-(id)titleText;
-(void)ETAProviderUpdated:(id)arg0 ;


@end


#endif
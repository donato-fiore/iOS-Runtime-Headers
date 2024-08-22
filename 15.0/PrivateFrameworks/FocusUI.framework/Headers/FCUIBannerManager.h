// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUIBANNERMANAGER_H
#define FCUIBANNERMANAGER_H

@class FCActivityManager, NSMutableArray, NSMapTable, NSString;
@protocol FCActivityManagerObserving, BNPresentableObserving, BNPosting, FCActivityDescribing;

#import <Foundation/Foundation.h>


@interface FCUIBannerManager : NSObject <FCActivityManagerObserving, BNPresentableObserving>

 {
    FCActivityManager *_activityManager;
    NSMutableArray *_activeFlankingPresentables;
    NSMapTable *_flankingBannersToDismissTimers;
}


@property (readonly, nonatomic, getter=_bannerPoster) NSObject<BNPosting> *bannerPoster; // ivar: _bannerPoster
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, getter=_lastActiveActivity, setter=_setLastActiveActivity:) NSObject<FCActivityDescribing> *lastActiveActivity; // ivar: _lastActiveActivity
@property (readonly) Class superclass;


+(id)_flankingBannerRequesterIdentifier;
-(id)initWithBannerPoster:(id)arg0 ;
-(void)_addActiveFlankingPresentable:(id)arg0 ;
-(void)_invalidateDismissTimerForPresentable:(id)arg0 ;
-(void)_removeFlankingPresentable:(id)arg0 ;
-(void)_scheduleDismissTimerForPresentable:(id)arg0 ;
-(void)activeActivityDidChangeForManager:(id)arg0 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;


@end


#endif
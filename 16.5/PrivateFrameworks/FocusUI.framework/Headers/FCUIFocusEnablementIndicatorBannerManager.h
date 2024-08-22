// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUIFOCUSENABLEMENTINDICATORBANNERMANAGER_H
#define FCUIFOCUSENABLEMENTINDICATORBANNERMANAGER_H

@class NSMutableArray, NSMapTable, NSString;
@protocol FCActivityManagerObserving, BNPresentableObserving, BNPosting;


#import "FCUIFocusEnablementIndicatorManager.h"

@interface FCUIFocusEnablementIndicatorBannerManager : FCUIFocusEnablementIndicatorManager <FCActivityManagerObserving, BNPresentableObserving>

 {
    NSMutableArray *_activeFlankingPresentables;
    NSMapTable *_flankingBannersToDismissTimers;
}


@property (readonly, nonatomic, getter=_bannerPoster) NSObject<BNPosting> *bannerPoster; // ivar: _bannerPoster
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_flankingBannerRequesterIdentifier;
+(id)managerWithBannerPoster:(id)arg0 ;
-(BOOL)shouldKeepPresentingAfterActiveActivityDidChange:(id)arg0 lastActivity:(id)arg1 ;
-(id)_initWithBannerPoster:(id)arg0 ;
-(void)_addActivePresentable:(id)arg0 ;
-(void)_invalidateDismissTimerForPresentable:(id)arg0 ;
-(void)_removeFlankingPresentable:(id)arg0 ;
-(void)_scheduleDismissTimerForPresentable:(id)arg0 ;
-(void)postActivity:(id)arg0 enabled:(BOOL)arg1 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)revokeWithReason:(id)arg0 ;


@end


#endif
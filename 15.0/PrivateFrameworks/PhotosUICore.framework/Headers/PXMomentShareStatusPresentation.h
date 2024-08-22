// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOMENTSHARESTATUSPRESENTATION_H
#define PXMOMENTSHARESTATUSPRESENTATION_H

@class NSString;
@protocol PXChangeObserver, PXDisplayMomentShare;


#import "PXObservable.h"
#import "PXCPLUIStatusProvider.h"
#import "PXMomentShareStatus.h"

@interface PXMomentShareStatusPresentation : PXObservable <PXChangeObserver>

 {
    PXCPLUIStatusProvider *_statusProvider;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (copy, nonatomic) NSString *actionConfirmationAlertButtonTitle; // ivar: _actionConfirmationAlertButtonTitle
@property (copy, nonatomic) NSString *actionConfirmationAlertSubtitle; // ivar: _actionConfirmationAlertSubtitle
@property (copy, nonatomic) NSString *actionConfirmationAlertTitle; // ivar: _actionConfirmationAlertTitle
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (nonatomic) float activityProgress; // ivar: _activityProgress
@property (copy, nonatomic) NSString *activityTitle; // ivar: _activityTitle
@property (copy, nonatomic) NSString *assetsSaveStatusTitle; // ivar: _assetsSaveStatusTitle
@property (copy, nonatomic) NSString *assetsTitle; // ivar: _assetsTitle
@property (copy, nonatomic) NSString *byline; // ivar: _byline
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *expirationTitle; // ivar: _expirationTitle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idleTitle; // ivar: _idleTitle
@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (nonatomic) BOOL isReadyForUpdates; // ivar: _isReadyForUpdates
@property (readonly, nonatomic) NSObject<PXDisplayMomentShare> *momentShare;
@property (readonly, nonatomic) PXMomentShareStatus *momentShareStatus; // ivar: _momentShareStatus
@property (nonatomic) NSInteger numberOfAssetsNotCopied; // ivar: _numberOfAssetsNotCopied
@property (copy, nonatomic) id *pauseResolutionAction; // ivar: _pauseResolutionAction
@property (copy, nonatomic) NSString *pauseResolutionActionConfirmationAlertButtonTitle; // ivar: _pauseResolutionActionConfirmationAlertButtonTitle
@property (copy, nonatomic) NSString *pauseResolutionActionConfirmationAlertSubtitle; // ivar: _pauseResolutionActionConfirmationAlertSubtitle
@property (copy, nonatomic) NSString *pauseResolutionActionConfirmationAlertTitle; // ivar: _pauseResolutionActionConfirmationAlertTitle
@property (copy, nonatomic) NSString *pauseResolutionActionTitle; // ivar: _pauseResolutionActionTitle
@property (copy, nonatomic) NSString *pauseStatusDescription; // ivar: _pauseStatusDescription
@property (copy, nonatomic) NSString *pauseTitle; // ivar: _pauseTitle
@property (readonly, nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)new;
-(id)init;
-(id)initWithMomentShare:(id)arg0 presentationStyle:(NSInteger)arg1 ;
-(id)initWithMomentShareStatus:(id)arg0 presentationStyle:(NSInteger)arg1 ;
-(void)_updateCPLStatus;
-(void)_updateCountsAndStatus;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif
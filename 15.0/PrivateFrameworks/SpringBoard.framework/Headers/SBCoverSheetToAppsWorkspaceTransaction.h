// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETTOAPPSWORKSPACETRANSACTION_H
#define SBCOVERSHEETTOAPPSWORKSPACETRANSACTION_H



#import "SBToAppsWorkspaceTransaction.h"
#import "SBDismissOverlaysAnimationController.h"
#import "SBTransientOverlayDismissAllWorkspaceTransaction.h"
#import "SBAutoPIPWorkspaceTransaction.h"

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBDismissOverlaysAnimationController *_dismissOverlaysAnimationController;
    SBTransientOverlayDismissAllWorkspaceTransaction *_transientOverlayTransaction;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
}


@property (nonatomic) BOOL preservesBanners; // ivar: _preservesBanners


-(NSUInteger)_dismissOverlaysOptions;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_autoPIPIfNeeded;
-(void)_begin;
-(void)_didComplete;
-(void)_dismissOverlaysIfNeeded;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBACTIVATEAPPCLIPFROMPLACEHOLDERWORKSPACETRANSACTION_H
#define SBACTIVATEAPPCLIPFROMPLACEHOLDERWORKSPACETRANSACTION_H

@class NSString;
@protocol BSTransactionObserver;


#import "SBAppToAppWorkspaceTransaction.h"
#import "SBRotateScenesWorkspaceTransaction.h"

@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction : SBAppToAppWorkspaceTransaction <BSTransactionObserver>

 {
    SBRotateScenesWorkspaceTransaction *_rotateScenesTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_concurrentOverlayDismissalOptions;
-(NSUInteger)_serialOverlayPreDismissalOptions;
-(void)_begin;
-(void)transactionDidComplete:(id)arg0 ;


@end


#endif
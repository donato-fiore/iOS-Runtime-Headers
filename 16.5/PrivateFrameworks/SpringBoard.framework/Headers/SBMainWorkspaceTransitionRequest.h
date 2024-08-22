// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINWORKSPACETRANSITIONREQUEST_H
#define SBMAINWORKSPACETRANSITIONREQUEST_H

@class NSMutableArray;
@protocol SBBannerUnfurlSourceContextProviding;


#import "SBWorkspaceTransitionRequest.h"
#import "SBMainWorkspace.h"

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {
    NSMutableArray *_completionTasks;
}


@property (retain, nonatomic) NSObject<SBBannerUnfurlSourceContextProviding> *bannerUnfurlSourceContextProvider; // ivar: _bannerUnfurlSourceContextProvider
@property (readonly, copy, nonatomic) id *completionBlock;
@property (nonatomic) BOOL shouldPreventDismissalOfUnrelatedTransientOverlays; // ivar: _shouldPreventDismissalOfUnrelatedTransientOverlays
@property (nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal; // ivar: _shouldPreventEmergencyNotificationBannerDismissal
@property (nonatomic) NSInteger source; // ivar: _source
@property (copy, nonatomic) id *transactionConfigurator; // ivar: _transactionConfigurator
@property (copy, nonatomic) id *transactionProvider; // ivar: _transactionProvider
@property (readonly, nonatomic) SBMainWorkspace *workspace;


+(id)ancillaryTransitionRequestsForTransitionRequest:(id)arg0 ;
-(BOOL)isMainWorkspaceTransitionRequest;
-(id)_initWithWorkspace:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)addCompletionHandler:(id)arg0 ;
-(id)compactDescriptionBuilder;
-(id)copyMainWorkspaceTransitionRequest;
-(id)initWithDisplayConfiguration:(id)arg0 ;
-(id)succinctDescriptionBuilder;
-(void)_invalidateCompletionTasks;
-(void)dealloc;
-(void)declineWithReason:(id)arg0 ;
-(void)finalize;
-(void)modifyTransientOverlayContext:(id)arg0 ;
-(void)setTransientOverlayContext:(id)arg0 ;


@end


#endif
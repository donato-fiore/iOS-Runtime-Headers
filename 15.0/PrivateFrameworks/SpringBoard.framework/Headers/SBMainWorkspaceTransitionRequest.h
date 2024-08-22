// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINWORKSPACETRANSITIONREQUEST_H
#define SBMAINWORKSPACETRANSITIONREQUEST_H

@protocol SBBannerUnfurlSourceContextProviding;


#import "SBWorkspaceTransitionRequest.h"
#import "SBMainWorkspace.h"

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest

@property (retain, nonatomic) NSObject<SBBannerUnfurlSourceContextProviding> *bannerUnfurlSourceContextProvider; // ivar: _bannerUnfurlSourceContextProvider
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal; // ivar: _shouldPreventEmergencyNotificationBannerDismissal
@property (nonatomic) NSInteger source; // ivar: _source
@property (copy, nonatomic) id *transactionConfigurator; // ivar: _transactionConfigurator
@property (copy, nonatomic) id *transactionProvider; // ivar: _transactionProvider
@property (readonly, nonatomic) SBMainWorkspace *workspace;


-(BOOL)isMainWorkspaceTransitionRequest;
-(id)_initWithWorkspace:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)compactDescriptionBuilder;
-(id)copyMainWorkspaceTransitionRequest;
-(id)initWithDisplayConfiguration:(id)arg0 ;
-(id)succinctDescriptionBuilder;
-(void)declineWithReason:(id)arg0 ;
-(void)finalize;
-(void)setTransientOverlayContext:(id)arg0 ;


@end


#endif
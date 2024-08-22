// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCHALLENGEISSUEHOSTVIEWCONTROLLER_H
#define GKCHALLENGEISSUEHOSTVIEWCONTROLLER_H

@class NSString;
@protocol GKChallengeIssueHostProtocol;


#import "GKExtensionRemoteViewController.h"
#import "GKHostedChallengeIssueController.h"

@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController <GKChallengeIssueHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GKHostedChallengeIssueController *delegate; // ivar: _delegateWeak
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)challengeExtension;
-(id)extensionObjectProxy;
-(void)extensionIsCanceling;
-(void)messageFromExtension:(id)arg0 ;


@end


#endif
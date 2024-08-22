// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKAUTHENTICATEHOSTVIEWCONTROLLER_H
#define GKAUTHENTICATEHOSTVIEWCONTROLLER_H

@class NSString;
@protocol GKAuthenticateHostProtocol;


#import "GKExtensionRemoteViewController.h"
#import "GKHostedAuthenticateViewController.h"

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GKHostedAuthenticateViewController *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(id)authenticateExtension;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)extensionIsCanceling;
-(void)extensionIsFinishing;
-(void)messageFromExtension:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
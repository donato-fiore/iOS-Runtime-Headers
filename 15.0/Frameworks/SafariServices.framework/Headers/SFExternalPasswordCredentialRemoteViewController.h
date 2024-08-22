// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFEXTERNALPASSWORDCREDENTIALREMOTEVIEWCONTROLLER_H
#define SFEXTERNALPASSWORDCREDENTIALREMOTEVIEWCONTROLLER_H

@class NSString;
@protocol SFExternalPasswordCredentialRemoteViewControllerProtocol, SFExternalPasswordCredentialRemoteViewControllerDelegate;


#import "SFPasswordRemoteViewController.h"

@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController <SFExternalPasswordCredentialRemoteViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFExternalPasswordCredentialRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)passwordServiceViewControllerName;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)presentExternalPasswordCredentialRemoteViewController;


@end


#endif
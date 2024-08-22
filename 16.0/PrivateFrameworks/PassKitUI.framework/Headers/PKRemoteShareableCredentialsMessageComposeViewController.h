// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREMOTESHAREABLECREDENTIALSMESSAGECOMPOSEVIEWCONTROLLER_H
#define PKREMOTESHAREABLECREDENTIALSMESSAGECOMPOSEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemoteShareableCredentialsMessageComposeViewControllerProtocol, PKShareableCredentialsMessageComposeViewControllerDelegate;



@interface PKRemoteShareableCredentialsMessageComposeViewController : UIRemoteViewController <PKRemoteShareableCredentialsMessageComposeViewControllerProtocol>

 {
    BOOL _finished;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKShareableCredentialsMessageComposeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif
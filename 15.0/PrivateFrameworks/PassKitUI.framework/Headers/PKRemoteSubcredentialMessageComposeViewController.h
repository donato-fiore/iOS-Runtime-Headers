// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREMOTESUBCREDENTIALMESSAGECOMPOSEVIEWCONTROLLER_H
#define PKREMOTESUBCREDENTIALMESSAGECOMPOSEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemoteSubcredentialMessageComposeViewControllerProtocol, PKSubcredentialMessageComposeViewControllerDelegate;



@interface PKRemoteSubcredentialMessageComposeViewController : UIRemoteViewController <PKRemoteSubcredentialMessageComposeViewControllerProtocol>

 {
    BOOL _finished;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSubcredentialMessageComposeViewControllerDelegate> *delegate; // ivar: _delegate
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
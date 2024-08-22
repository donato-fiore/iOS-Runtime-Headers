// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEXTENSIONREMOTEVIEWCONTROLLER_H
#define PKEXTENSIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKPaymentAuthorizationExtensionViewHostProtocol, PKExtensionRemoteViewControllerDelegate;



@interface PKExtensionRemoteViewController : UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKExtensionRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)exportedInterface;
-(id)serviceViewControllerInterface;


@end


#endif
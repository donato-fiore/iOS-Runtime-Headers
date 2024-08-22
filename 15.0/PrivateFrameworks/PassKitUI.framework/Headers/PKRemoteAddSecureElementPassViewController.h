// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREMOTEADDSECUREELEMENTPASSVIEWCONTROLLER_H
#define PKREMOTEADDSECUREELEMENTPASSVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemoteAddSecureElementPassViewControllerProtocol;



@interface PKRemoteAddSecureElementPassViewController : UIRemoteViewController <PKRemoteAddSecureElementPassViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishWithPasses:(id)arg0 error:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif
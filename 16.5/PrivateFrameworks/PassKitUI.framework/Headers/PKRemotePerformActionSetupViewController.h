// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEPERFORMACTIONSETUPVIEWCONTROLLER_H
#define PKREMOTEPERFORMACTIONSETUPVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemotePerformActionSetupViewControllerProtocol;



@interface PKRemotePerformActionSetupViewController : UIRemoteViewController <PKRemotePerformActionSetupViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didCancelAction;
-(void)didPerformAction;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif
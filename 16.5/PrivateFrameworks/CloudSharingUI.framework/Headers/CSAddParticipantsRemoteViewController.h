// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSADDPARTICIPANTSREMOTEVIEWCONTROLLER_H
#define CSADDPARTICIPANTSREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, UIViewController<CSAddParticipantsPublicController>;
@protocol CSAddParticipantsViewControllerHost;



@interface CSAddParticipantsRemoteViewController : UIRemoteViewController <CSAddParticipantsViewControllerHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController<CSAddParticipantsPublicController> *publicController; // ivar: _publicController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dismissViewControllerWithError:(id)arg0 shareURL:(id)arg1 ckShare:(id)arg2 ;
-(void)showContactPickerFromSourceRect:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif
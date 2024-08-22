// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFFINISHSETUPPINVERIFICATIONVIEWCONTROLLER_H
#define BFFFINISHSETUPPINVERIFICATIONVIEWCONTROLLER_H

@class DevicePINSetupController, NSString;
@protocol DevicePINControllerDelegate;



@interface BFFFinishSetupPINVerificationViewController : DevicePINSetupController <DevicePINControllerDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)stringsBundle;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)loadView;


@end


#endif
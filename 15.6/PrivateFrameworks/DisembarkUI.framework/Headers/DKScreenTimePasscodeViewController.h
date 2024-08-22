// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKSCREENTIMEPASSCODEVIEWCONTROLLER_H
#define DKSCREENTIMEPASSCODEVIEWCONTROLLER_H

@class OBPasscodeViewController, NSString;
@protocol OBPasscodeViewControllerDelegate;



@interface DKScreenTimePasscodeViewController : OBPasscodeViewController <OBPasscodeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *passcodeVerified; // ivar: _passcodeVerified
@property (readonly) Class superclass;
@property (copy, nonatomic) id *verifyPasscode; // ivar: _verifyPasscode


-(BOOL)passcodeViewController:(id)arg0 shouldEnableCompletionButtonForPasscode:(id)arg1 ;
-(id)completionButtonTitleForPasscodeViewController:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 ;
-(void)passcodeViewController:(id)arg0 didEnterPasscode:(id)arg1 ;


@end


#endif
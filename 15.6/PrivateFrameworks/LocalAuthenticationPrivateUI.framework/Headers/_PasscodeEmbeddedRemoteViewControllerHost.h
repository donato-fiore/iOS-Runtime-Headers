// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSCODEEMBEDDEDREMOTEVIEWCONTROLLERHOST_H
#define _PASSCODEEMBEDDEDREMOTEVIEWCONTROLLERHOST_H

@class UIRemoteViewController, NSString;
@protocol LAUIPasscodeHost, LAUIPasscodeService;



@interface _PasscodeEmbeddedRemoteViewControllerHost : UIRemoteViewController <LAUIPasscodeHost, LAUIPasscodeService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)endEditing;
-(void)passcodeVerificationFinished:(id)arg0 ;
-(void)setContext:(id)arg0 ;
-(void)startEditing;


@end


#endif
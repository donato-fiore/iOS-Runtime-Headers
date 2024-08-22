// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDDEMOSETUPVIEWCONTROLLER_H
#define MSDDEMOSETUPVIEWCONTROLLER_H

@class OBWelcomeController, NSString;
@protocol OBSetupAssistantSupport;



@interface MSDDemoSetupViewController : OBWelcomeController <OBSetupAssistantSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_continueTapped:(id)arg0 ;
-(void)_showEraseConfirmation;
-(void)_skipTapped:(id)arg0 ;


@end


#endif
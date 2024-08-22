// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STRESTRICTIONSPINCONTROLLER_H
#define STRESTRICTIONSPINCONTROLLER_H

@class PSRestrictionsPINController;
@protocol STRestrictionsPINControllerDelegate;



@interface STRestrictionsPINController : PSRestrictionsPINController

@property (weak, nonatomic) NSObject<STRestrictionsPINControllerDelegate> *pinDelegate;


-(BOOL)validatePIN:(id)arg0 ;
-(id)pinInstructionsPrompt;
-(void)_setOptionsTitle:(id)arg0 optionsHandler:(id)arg1 ;
-(void)recoveryAuthenticationFailed:(id)arg0 ;
-(void)recoveryAuthenticationSucceededForPasscode:(id)arg0 ;
-(void)setPIN:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
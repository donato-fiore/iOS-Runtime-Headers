// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIPASSCODETEXTFIELD_H
#define SBUIPASSCODETEXTFIELD_H

@class UITextField;



@interface SBUIPasscodeTextField : UITextField {
    BOOL _previousResponderRequiresKeyboard;
}


@property (nonatomic) BOOL showsSystemKeyboard; // ivar: _showsSystemKeyboard


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)_disableAutomaticAppearance;
-(void)_enableAutomaticAppearance;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)dealloc;


@end


#endif
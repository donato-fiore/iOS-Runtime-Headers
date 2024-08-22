// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECONFIGURATIONBUTTON_H
#define WFVARIABLECONFIGURATIONBUTTON_H

@class UIButton, NSString, WFVariable;
@protocol WFVariableConfigurationResponderDelegate, WFVariableDelegate, WFVariableUIDelegate;


#import "WFVariableConfigurationResponder.h"

@interface WFVariableConfigurationButton : UIButton <WFVariableConfigurationResponderDelegate, WFVariableDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger resultType; // ivar: _resultType
@property (nonatomic) BOOL showsVariableAccessoryActions; // ivar: _showsVariableAccessoryActions
@property (readonly) Class superclass;
@property (retain, nonatomic) WFVariable *variable; // ivar: _variable
@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder; // ivar: _variableResponder
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


+(id)titleFont;
+(struct CGSize )sizeForVariable:(id)arg0 ;
-(BOOL)variableResponderHasText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonTapped;
-(void)dealloc;
-(void)hideVariableConfiguration;
-(void)showVariableConfiguration;
-(void)tintColorDidChange;
-(void)updateVariableImage;
-(void)variableDidChange:(id)arg0 ;
-(void)variableResponder:(id)arg0 didUpdateVariable:(id)arg1 ;
// -(void)variableResponder:(id)arg0 presentPromptWithTitle:(id)arg1 message:(id)arg2 fieldConfigurationHandler:(id)arg3 commitHandler:(unk)arg4  ;
-(void)variableResponderDidBeginEditing:(id)arg0 ;
-(void)variableResponderDidDelete:(id)arg0 withReplacementText:(id)arg1 ;
-(void)variableResponderDidEndEditing:(id)arg0 ;
-(void)variableResponderDidRevealAction:(id)arg0 ;


@end


#endif
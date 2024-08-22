// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPARAMETERVALUEPICKERVARIABLETABLEVIEWCELL_H
#define WFPARAMETERVALUEPICKERVARIABLETABLEVIEWCELL_H

@class UITableViewCell, NSAttributedString;



@interface WFParameterValuePickerVariableTableViewCell : UITableViewCell

@property (retain, nonatomic) NSAttributedString *variableAttributedText; // ivar: _variableAttributedText


-(id)configurationState;
-(void)tintColorDidChange;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif
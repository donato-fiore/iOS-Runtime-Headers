// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPARAMETERVALUEPICKERTABLEVIEWCELL_H
#define WFPARAMETERVALUEPICKERTABLEVIEWCELL_H

@class UITableViewCell, WFParameter<WFParameterValuePickable>, UIViewController, WFCodableAttributeBackedSubstitutableState;
@protocol WFParameterValuePickerTableViewCellDelegate;



@interface WFParameterValuePickerTableViewCell : UITableViewCell

@property (nonatomic, getter=isContainedInState) BOOL containedInState; // ivar: _containedInState
@property (weak, nonatomic) NSObject<WFParameterValuePickerTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WFParameter<WFParameterValuePickable> *parameter; // ivar: _parameter
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) WFCodableAttributeBackedSubstitutableState *state; // ivar: _state


-(id)configurationState;
-(id)defaultContentConfiguration;
-(void)tintColorDidChange;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif
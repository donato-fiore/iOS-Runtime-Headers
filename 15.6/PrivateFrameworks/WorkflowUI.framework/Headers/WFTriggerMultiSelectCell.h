// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRIGGERMULTISELECTCELL_H
#define WFTRIGGERMULTISELECTCELL_H

@class UITableViewCell, UIImpactFeedbackGenerator, UIStackView;
@protocol WFTriggerMultiSelectCellDelegate;


#import "WFTriggerOptionSelectionView.h"

@interface WFTriggerMultiSelectCell : UITableViewCell

@property (weak, nonatomic) NSObject<WFTriggerMultiSelectCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly, nonatomic) WFTriggerOptionSelectionView *leftView; // ivar: _leftView
@property (nonatomic, getter=isLeftViewSelected) BOOL leftViewSelected;
@property (readonly, nonatomic) WFTriggerOptionSelectionView *rightView; // ivar: _rightView
@property (nonatomic, getter=isRightViewSelected) BOOL rightViewSelected;
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureWithLeftGlyph:(id)arg0 leftTitle:(id)arg1 leftTintColor:(id)arg2 rightGlyph:(id)arg3 rightTitle:(id)arg4 rightTintColor:(id)arg5 ;
-(void)handleMultiSelectViewPressWithRecognizer:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif
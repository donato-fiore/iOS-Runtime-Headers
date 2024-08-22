// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNLABELEDCELL_H
#define CNLABELEDCELL_H

@class NSDictionary, UIImageView, NSString, UIView<ABText>, UIView, UILabel;


#import "CNContactCell.h"

@interface CNLabeledCell : CNContactCell {
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
}


@property (readonly, nonatomic) UIImageView *chevron; // ivar: _chevron
@property (readonly, nonatomic) CGFloat chevronWidth;
@property (readonly, nonatomic) NSString *labelString;
@property (copy, nonatomic) NSDictionary *labelTextAttributes;
@property (readonly, nonatomic) UIView<ABText> *labelView;
@property (nonatomic) BOOL labelViewNeedsHuggingContent; // ivar: _labelViewNeedsHuggingContent
@property (readonly, nonatomic) UIView *rightMostView;
@property (readonly, nonatomic) UILabel *standardLabelView;
@property (readonly, nonatomic) UILabel *standardValueView;
@property (readonly, nonatomic) NSString *valueString;
@property (copy, nonatomic) NSDictionary *valueTextAttributes;
@property (readonly, nonatomic) UIView<ABText> *valueView;
@property (readonly, nonatomic) CGFloat valueViewBottomMargin;
@property (nonatomic) BOOL valueViewNeedsHuggingContent; // ivar: _valueViewNeedsHuggingContent


+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
+(BOOL)wantsStandardConstraints;
-(BOOL)allowsCellSelection;
-(BOOL)displaysCellSelectionState;
-(CGFloat)minCellHeight;
-(id)constantConstraints;
-(id)constantConstraintsForHorizontalLayout;
-(id)constantConstraintsForStandardLayout;
-(id)constantConstraintsForVerticalLayout;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)variableConstraints;
-(id)variableConstraintsForHorizontalLayout;
-(id)variableConstraintsForStandardLayout;
-(id)variableConstraintsForVerticalLayout;
-(void)addChevron;
-(void)removeChevron;
-(void)tintColorDidChange;


@end


#endif
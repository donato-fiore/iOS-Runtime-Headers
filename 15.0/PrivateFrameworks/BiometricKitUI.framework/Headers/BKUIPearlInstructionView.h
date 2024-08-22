// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLINSTRUCTIONVIEW_H
#define BKUIPEARLINSTRUCTIONVIEW_H

@class UIView, NSString, UILabel, NSLayoutYAxisAnchor, NSLayoutConstraint, UIScrollView;



@interface BKUIPearlInstructionView : UIView

@property (nonatomic) BOOL darkMode; // ivar: _darkMode
@property (retain, nonatomic) NSString *detail; // ivar: _detail
@property (weak, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) NSString *instruction; // ivar: _instruction
@property (weak, nonatomic) UILabel *instructionLabel; // ivar: _instructionLabel
@property (readonly, nonatomic) NSLayoutYAxisAnchor *instructionTextTopAnchor;
@property (nonatomic) UIEdgeInsets labelsHorizontalMargin; // ivar: _labelsHorizontalMargin
@property (retain, nonatomic) NSLayoutConstraint *labelsWidthConstraint; // ivar: _labelsWidthConstraint
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(id)init;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_configureConstraints;


@end


#endif
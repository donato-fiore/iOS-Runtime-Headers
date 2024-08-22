// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONTOTALVIEW_H
#define PKPAYMENTAUTHORIZATIONTOTALVIEW_H

@class UIView, UILabel, UIActivityIndicatorView, NSLayoutConstraint;


#import "PKPaymentAuthorizationLayout.h"

@interface PKPaymentAuthorizationTotalView : UIView {
    UILabel *_labelView;
    UILabel *_valueView;
    UIActivityIndicatorView *_processingIndicator;
    UIView *_separatorView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    NSLayoutConstraint *_labelBaselineConstraint;
    NSLayoutConstraint *_valueBaselineConstraint;
    NSLayoutConstraint *_labelValueRelationConstraint;
    NSLayoutConstraint *_valueBaselineLargeTextConstraint;
    NSLayoutConstraint *_labelValueRelationLargeTextConstraint;
    NSLayoutConstraint *_rightMarginLargeTextConstraint;
}


@property (nonatomic) BOOL isPendingTotal; // ivar: _isPendingTotal
@property (nonatomic) NSInteger labelNumberOfLines; // ivar: _labelNumberOfLines
@property (retain, nonatomic) PKPaymentAuthorizationLayout *layout; // ivar: _layout
@property (nonatomic, getter=isProcessing) BOOL processing; // ivar: _processing
@property (nonatomic) BOOL showsBoldValueText; // ivar: _showsBoldValueText
@property (nonatomic) NSInteger style; // ivar: _style


-(BOOL)_shouldUseLargeTextLayout;
-(CGFloat)_initialLeading;
-(id)_labelAttributedStringWithString:(id)arg0 ;
-(id)_valueAttributedStringWithString:(id)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_createSubviews;
-(void)_prepareConstraints;
-(void)dealloc;
-(void)setLabel:(id)arg0 value:(id)arg1 ;
-(void)updateConstraints;


@end


#endif
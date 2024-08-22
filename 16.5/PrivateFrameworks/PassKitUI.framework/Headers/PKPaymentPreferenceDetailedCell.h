// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPREFERENCEDETAILEDCELL_H
#define PKPAYMENTPREFERENCEDETAILEDCELL_H



#import "PKPaymentPreferenceCell.h"
#import "PKPaymentPreferenceDetailedCellTextField.h"

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell {
    BOOL _isLeftToRight;
}


@property (nonatomic) BOOL inlineEditingEnabled; // ivar: _inlineEditingEnabled
@property (nonatomic) CGFloat leadingOffset; // ivar: _leadingOffset
@property (nonatomic) CGFloat minimumCellHeight; // ivar: _minimumCellHeight
@property (readonly, nonatomic) PKPaymentPreferenceDetailedCellTextField *textField; // ivar: _textField


-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)pk_childrenForAppearance;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)prepareForReuse;
-(void)showTextField:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONITEMCELL_H
#define PKPAYMENTAUTHORIZATIONITEMCELL_H

@class UILabel, NSMutableArray, UIView, UIImageView, NSString, NSAttributedString, UIImage;


#import "PKTableViewCell.h"
#import "PKPaymentAuthorizationLayout.h"

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {
    PKPaymentAuthorizationLayout *_layout;
    UILabel *_labelView;
    NSMutableArray *_valueViews;
    UIView *_separatorView;
    UIImageView *_arrowView;
    UIImageView *_alertView;
    UIImageView *_labelImageView;
    NSMutableArray *_constraints;
    BOOL _constraintsDirty;
}


@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (nonatomic, getter=isCentered) BOOL centered; // ivar: _centered
@property (copy, nonatomic) NSAttributedString *label;
@property (copy, nonatomic) UIImage *labelImage;
@property (nonatomic) BOOL showsDisclosure; // ivar: _showsDisclosure
@property (nonatomic) BOOL showsSeparator; // ivar: _showsSeparator


-(id)_applyStylingToValueString:(id)arg0 defaultColor:(id)arg1 ;
-(id)_createValueView;
-(id)addValue:(id)arg0 ;
-(id)addValue:(id)arg0 type:(NSUInteger)arg1 ;
-(id)colorForValueType:(NSUInteger)arg0 ;
-(id)initWithLayout:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_createSubviews;
-(void)dealloc;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif
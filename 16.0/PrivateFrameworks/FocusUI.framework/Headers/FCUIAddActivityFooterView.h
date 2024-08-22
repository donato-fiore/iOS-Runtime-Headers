// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIADDACTIVITYFOOTERVIEW_H
#define FCUIADDACTIVITYFOOTERVIEW_H

@class UIView, UILabel, NSString;
@protocol FCUIContentSizeCategoryAdjusting;


#import "_FCUIAddActivityControl.h"

@interface FCUIAddActivityFooterView : UIView <FCUIContentSizeCategoryAdjusting>

 {
    _FCUIAddActivityControl *_addActivityControl;
    UILabel *_titleLabel;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 ;
-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithAction:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureActivityTitleLabelIfNecessaryWithTitle:(id)arg0 ;
-(void)_configureAddActivityControlIfNecessaryWithAction:(id)arg0 ;
-(void)_layoutSubviewsInBounds:(struct CGRect )arg0 measuringOnly:(struct CGSize *)arg1 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForTitleLabel;
-(void)_updateTextAttributesIfNecessary;
-(void)layoutSubviews;


@end


#endif
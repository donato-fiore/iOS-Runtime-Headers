// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTCUSTOMVIEWBARBUTTON_H
#define PUIMPORTCUSTOMVIEWBARBUTTON_H

@class UIButton, NSString, UIView;



@interface PUImportCustomViewBarButton : UIButton

@property (copy, nonatomic) NSString *customAccessibilityLabel; // ivar: _customAccessibilityLabel
@property (readonly, nonatomic) UIView *customView; // ivar: _customView


-(id)accessibilityLabel;
-(id)initWithCustomView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)sizeToFit;
-(void)updateConstraints;


@end


#endif
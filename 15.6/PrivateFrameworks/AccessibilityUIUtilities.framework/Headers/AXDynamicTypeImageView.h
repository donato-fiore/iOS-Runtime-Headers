// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDYNAMICTYPEIMAGEVIEW_H
#define AXDYNAMICTYPEIMAGEVIEW_H

@class UIImageView, UIFontMetrics, NSString;



@interface AXDynamicTypeImageView : UIImageView

@property (retain, nonatomic) UIFontMetrics *fontMetrics; // ivar: _fontMetrics
@property (copy, nonatomic) NSString *maximumContentSizeCategory; // ivar: _maximumContentSizeCategory
@property (copy, nonatomic) NSString *minimumContentSizeCategory; // ivar: _minimumContentSizeCategory


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(struct CGSize )_scaledSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
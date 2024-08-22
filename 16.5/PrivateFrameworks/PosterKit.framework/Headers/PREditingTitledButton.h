// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGTITLEDBUTTON_H
#define PREDITINGTITLEDBUTTON_H

@class NSString;
@protocol UIPointerInteractionDelegate;


#import "PREditingButton.h"

@interface PREditingTitledButton : PREditingButton <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PREditingTitledButtonMetrics metrics;
@property (nonatomic) CGSize preferredContentFittingSize; // ivar: _preferredContentFittingSize
@property (readonly) Class superclass;


+(NSInteger)editingTitledButtonType;
+(id)_bestFontForTitle:(id)arg0 inMaximumWidth:(CGFloat)arg1 withMetrics:(struct PREditingTitledButtonMetrics )arg2 titleSize:(struct CGSize *)arg3 fontAttributes:(*id)arg4 ;
+(id)bestFontForTitle:(id)arg0 fittingInWidth:(CGFloat)arg1 ;
+(id)editingTitledButtonSymbolName;
+(id)editingTitledButtonTitle;
+(struct CGSize )defaultPreferredContentFittingSize;
+(struct PREditingTitledButtonMetrics )defaultMetrics;
-(id)contentImageWithTitle:(id)arg0 ;
-(id)defaultContentImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)setFrameFromVisibleFrame:(struct CGRect )arg0 ;


@end


#endif
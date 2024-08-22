// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLABELACCESSORYVIEW_H
#define SBICONLABELACCESSORYVIEW_H

@class UIView, UIImage, NSString;
@protocol SBIconLabelAccessoryView;



@interface SBIconLabelAccessoryView : UIView <SBIconLabelAccessoryView>



@property (readonly, nonatomic) UIEdgeInsets alignmentRectInsets;
@property (retain, nonatomic) UIImage *baseImage; // ivar: _baseImage
@property (readonly, nonatomic) CGFloat baselineOffsetFromBottom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBaseline;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)labelAccessorySystemImageScale;
+(id)labelAccessorySystemImageName;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)prepareForReuse;
-(void)updateWithBaseImage:(id)arg0 legibilitySettings:(id)arg1 ;
-(void)updateWithLegibilitySettings:(id)arg0 labelFont:(id)arg1 ;


@end


#endif
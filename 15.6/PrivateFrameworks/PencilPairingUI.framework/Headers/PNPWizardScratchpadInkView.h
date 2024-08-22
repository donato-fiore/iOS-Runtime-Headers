// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPWIZARDSCRATCHPADINKVIEW_H
#define PNPWIZARDSCRATCHPADINKVIEW_H

@class UIView, UIImageView, PKInk;



@interface PNPWizardScratchpadInkView : UIView {
    UIImageView *_imageView;
}


@property (readonly, nonatomic) PKInk *ink; // ivar: _ink
@property (nonatomic) BOOL pressed; // ivar: _pressed
@property (nonatomic) BOOL selected; // ivar: _selected


+(CGFloat)preferredHeight;
+(void)initialize;
-(id)initWithIndex:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif
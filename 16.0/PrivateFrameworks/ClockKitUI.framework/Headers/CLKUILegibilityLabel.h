// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUILEGIBILITYLABEL_H
#define CLKUILEGIBILITYLABEL_H

@class UILabel, UIColor, NSString;
@protocol CLKUILegibilityView;



@interface CLKUILegibilityLabel : UILabel <CLKUILegibilityView>

 {
    CGFloat _sBlur;
    UIColor *_sColor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL legibilityEnabled; // ivar: _legibilityEnabled
@property (nonatomic) CGFloat shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_contentInsetsFromFonts;
-(void)_updateShadow;


@end


#endif
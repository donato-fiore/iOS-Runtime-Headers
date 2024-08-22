// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKLEGIBILITYLABEL_H
#define NTKLEGIBILITYLABEL_H

@class UILabel, UIColor, NSString;
@protocol NTKLegibilityView;



@interface NTKLegibilityLabel : UILabel <NTKLegibilityView>

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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPEOPLECOMPLICATIONIMAGEVIEW_H
#define NTKPEOPLECOMPLICATIONIMAGEVIEW_H

@class UIView, UILabel, UIImageView, CLKSymbolImageProvider, UIColor, NSString, UIFontDescriptor, CLKImageProvider;
@protocol CDComplicationImageView, CLKFullColorImageView, CLKMonochromeFilterProvider;



@interface NTKPeopleComplicationImageView : UIView <CDComplicationImageView, CLKFullColorImageView>

 {
    UILabel *_nameLabel;
    UIImageView *_profileImageView;
    UIView *_ringView;
    CGFloat _monochromeTintAmount;
    BOOL _usingPersonSymbol;
    CLKSymbolImageProvider *_personSymbolImageProvider;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


-(NSInteger)_profileImageFilterStyle;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
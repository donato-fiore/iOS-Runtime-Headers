// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONIMAGEVIEW_H
#define NTKRICHCOMPLICATIONIMAGEVIEW_H

@class UIView, NSString, CLKDevice, UIFontDescriptor, CLKFullColorImageProvider, CDStackedImagesComplicationImageView, NSNumber;
@protocol CLKMonochromeFilterProvider, CLKMonochromeComplicationView, NTKRichComplicationTintedPlatterColorOverridable;



@interface NTKRichComplicationImageView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView, NTKRichComplicationTintedPlatterColorOverridable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor; // ivar: _fontDescriptor
@property (nonatomic) CGFloat fontSizeFactor; // ivar: _fontSizeFactor
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHostingOverrideView) BOOL hostingOverrideView; // ivar: _hostingOverrideView
@property (retain, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider
@property (nonatomic) CGFloat inMonochromeModeFraction; // ivar: _inMonochromeModeFraction
@property (nonatomic) NSInteger monochromeFilterType; // ivar: _monochromeFilterType
@property (weak, nonatomic) CDStackedImagesComplicationImageView *monochromeImageView; // ivar: _monochromeImageView
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL prefersFilterOverTransition; // ivar: _prefersFilterOverTransition
@property (weak, nonatomic) UIView *richComplicationImageView; // ivar: _richComplicationImageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *tritiumUpdateMode; // ivar: _tritiumUpdateMode
@property (readonly, nonatomic) BOOL useAccentColor; // ivar: _useAccentColor


-(BOOL)_isSymbolImageProvider;
-(BOOL)_isSymbolImageProviderWithoutSpecificSize;
-(BOOL)viewShouldIgnoreTwoPieceImage:(id)arg0 ;
-(NSInteger)_filterStyle;
-(id)_createMonochromeImageView;
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithDevice:(id)arg0 useAccentColor:(BOOL)arg1 ;
-(id)interpolatedColorForView:(id)arg0 ;
-(void)layoutSubviews;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setTintedFraction:(CGFloat)arg0 ;
-(void)setTintedPlatterColor:(id)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
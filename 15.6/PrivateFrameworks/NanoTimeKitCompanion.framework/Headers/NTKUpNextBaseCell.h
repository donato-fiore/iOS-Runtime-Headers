// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTBASECELL_H
#define NTKUPNEXTBASECELL_H

@class UICollectionViewCell, UIImageView, UIView, NSHashTable, REContent, UIImage, NSString, CLKDevice, UIColor, CALayer;
@protocol UIGestureRecognizerDelegate, CLKMonochromeComplicationView, CLKMonochromeFilterProvider;



@interface NTKUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate, CLKMonochromeComplicationView>

 {
    CGSize _shadowSize;
    UIImageView *_shadowView;
    UIView *_overlayView;
    CGFloat _darkeningAmount;
    CGFloat _contentBrightness;
    NSHashTable *_layerProviders;
}


@property (readonly, nonatomic) REContent *content; // ivar: _content
@property (readonly, nonatomic) UIImage *contentImage; // ivar: _contentImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *imageColor; // ivar: _imageColor
@property (readonly, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (retain, nonatomic) UIImage *overrideContentImage; // ivar: _overrideContentImage
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (retain, nonatomic) NSString *representedElementIdentifier; // ivar: _representedElementIdentifier
@property (readonly) Class superclass;


+(CGFloat)cornerRadiusForDevice:(id)arg0 ;
+(Class)suggestedCellClassForContent:(id)arg0 ;
+(struct CGSize )suggestedBodyImageSizeForDevice:(id)arg0 ;
+(struct CGSize )suggestedHeaderImageSizeForDevice:(id)arg0 ;
+(void)clearLabel:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)transitionContextInView:(id)arg0 ;
-(void)_updateColorOverlay;
-(void)addContentsLayerProvider:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)enumerateContentsLayersWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)removeContentsLayerProvider:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
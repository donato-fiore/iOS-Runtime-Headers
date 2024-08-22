// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONIMAGEVIEW_H
#define NTKRICHCOMPLICATIONIMAGEVIEW_H

@class UIView, NSString, CLKDevice, CLKFullColorImageProvider, NSNumber;
@protocol CLKMonochromeFilterProvider, CLKMonochromeComplicationView;


#import "NTKStackedImagesComplicationImageView.h"

@interface NTKRichComplicationImageView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHostingOverrideView) BOOL hostingOverrideView; // ivar: _hostingOverrideView
@property (retain, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider
@property (nonatomic) BOOL inMonochromeMode; // ivar: _inMonochromeMode
@property (nonatomic) NSInteger monochromeFilterType; // ivar: _monochromeFilterType
@property (weak, nonatomic) NTKStackedImagesComplicationImageView *monochromeImageView; // ivar: _monochromeImageView
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
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithDevice:(id)arg0 useAccentColor:(BOOL)arg1 ;
-(id)interpolatedColorForView:(id)arg0 ;
-(void)layoutSubviews;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUWAVEFORMVIEW_H
#define MRUWAVEFORMVIEW_H

@class UIView, UIImage, CALayer, NSArray, NSString, CAGradientLayer, UIImageView;
@protocol MRUVisualStylingProviderObserver;


#import "MRUWaveformSettings.h"
#import "MRUVisualStylingProvider.h"
#import "MRUWaveformData.h"

@interface MRUWaveformView : UIView <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (retain, nonatomic) CALayer *artworkLayer; // ivar: _artworkLayer
@property (retain, nonatomic) CALayer *artworkLightenLayer; // ivar: _artworkLightenLayer
@property (retain, nonatomic) NSArray *bars; // ivar: _bars
@property (retain, nonatomic) UIView *barsView; // ivar: _barsView
@property (nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *remoteRouteSymbol; // ivar: _remoteRouteSymbol
@property (retain, nonatomic) UIImageView *routeImageView; // ivar: _routeImageView
@property (retain, nonatomic) MRUWaveformSettings *settings; // ivar: _settings
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) MRUWaveformData *waveformData; // ivar: _waveformData


-(id)initWithFrame:(struct CGRect )arg0 context:(NSUInteger)arg1 ;
-(void)applyContext:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)updateLayers;
-(void)updateVisualStyle;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif
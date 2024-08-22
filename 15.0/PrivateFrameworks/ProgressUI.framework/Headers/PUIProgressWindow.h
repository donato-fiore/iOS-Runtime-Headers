// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIPROGRESSWINDOW_H
#define PUIPROGRESSWINDOW_H

@class CAContext, CALayer, CATextLayer, NSString;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface PUIProgressWindow : NSObject <CALayerDelegate>

 {
    BOOL _weCreatedTheContext;
    CAContext *_context;
    int _deviceClass;
    int _screenClass;
    int _productType;
    BOOL _isSecurityResearchDevice;
    CGSize _displaySize;
    CGSize _framebufferSize;
    CGSize _layerPositioningSize;
    float _displayScale;
    float _displayOrientation;
    BOOL _sideways;
    BOOL _renderWithIOSurface;
    id *_framebufferListenerToken;
    float _currentProgress;
    *CGImage _appleLogo;
    CGFloat _progressXDelta;
    CGFloat _progressYDelta;
    CGFloat _progressWidth;
    CGFloat _progressHeight;
    BOOL _forceInverted;
    BOOL _white;
    BOOL _showsProgressBar;
    CALayer *_progressLayer;
    CATextLayer *_statusTextLayer;
    *__IOSurface _ioSurface;
    CALayer *_ioSurfaceLayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly) Class superclass;


+(BOOL)_usesPreBoardAppearance;
+(void)setUsesPreBoardAppearance;
-(char *)_appleTVProductSuffix;
-(char *)_productSuffix;
-(id)init;
-(id)initWithForceInverted:(BOOL)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 contextLevel:(float)arg1 appearance:(NSInteger)arg2 ;
-(id)initWithProgressBarVisibility:(BOOL)arg0 ;
-(id)initWithProgressBarVisibility:(BOOL)arg0 context:(id)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg0 createContext:(BOOL)arg1 contextLevel:(float)arg2 appearance:(NSInteger)arg3 ;
-(id)initWithProgressBarVisibility:(BOOL)arg0 level:(float)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg0 level:(float)arg1 forceInverted:(BOOL)arg2 ;
-(struct CGColor *)_copyBlackCGColorRef;
-(struct CGColor *)_copyCGColorRefWithComponents:(*CGFloat)arg0 ;
-(struct CGColor *)_copyWhiteCGColorRef;
-(struct CGImage *)_createImageWithName:(char *)arg0 scale:(int)arg1 displayHeight:(int)arg2 ;
-(void)_collectDisplayInfo;
-(void)_createContext;
-(void)_createLayer;
-(void)_drawProgressLayerInContext:(struct CGContext *)arg0 ;
-(void)_layoutScreen;
-(void)_updateIOSurface;
-(void)_updateLayerForFramebufferSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)setProgressValue:(float)arg0 ;
-(void)setStatusText:(id)arg0 ;
-(void)setVisible:(BOOL)arg0 ;


@end


#endif
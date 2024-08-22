// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGACARENDERER_H
#define CCVEGACARENDERER_H

@class NSDictionary, CALayer, NSMutableDictionary, NSArray, NSString, JSContext, JSManagedValue;
@protocol CCVegaCARendererDelegateInterface;

#import <Foundation/Foundation.h>

#import "CCVegaRenderer.h"
#import "CCVegaAccessibilityHelper.h"

@interface CCVegaCARenderer : NSObject <CCVegaCARendererDelegateInterface>

 {
    CCVegaRenderer *_renderer;
    BOOL _updateFromBackground;
    NSDictionary *_marks;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
    BOOL _initialized;
    CGFloat _width;
    CGFloat _height;
    CGSize _containerSize;
    CGFloat _originX;
    CGFloat _originY;
    BOOL _dirty;
    BOOL _dirtyAll;
    BOOL _pendingUpdate;
    BOOL _pendingUpdateDirtyAll;
    NSMutableDictionary *_imageCache;
    CCVegaAccessibilityHelper *_accessibilityHelper;
    CGPoint _currentTranslate;
}


@property (readonly) CGAffineTransform _currentCombinedCTM;
@property (retain) NSArray *accessibilityElements; // ivar: accessibilityElements
@property (retain) NSString *backgroundColor; // ivar: backgroundColor
@property CGSize containerSize; // ivar: containerSize
@property (weak) JSContext *context; // ivar: context
@property CGFloat pixelRatio; // ivar: pixelRatio
@property (weak) CALayer *rootLayer;
@property (retain) JSManagedValue *scenegraphRoot; // ivar: scenegraphRoot
@property CGFloat zoomFactor; // ivar: zoomFactor


-(id)compositingFilterForItem:(id)arg0 ;
-(id)drawMark:(id)arg0 parentGroup:(id)arg1 item:(id)arg2 into:(id)arg3 dirtyAll:(BOOL)arg4 ;
-(id)fontOptions;
-(id)initWithRenderer:(id)arg0 context:(id)arg1 rootLayer:(id)arg2 updateFromBackground:(BOOL)arg3 ;
-(id)marks;
-(struct CGColor *)newColorFromCSSString:(id)arg0 ;
-(struct CGColor *)newColorFromCSSString:(id)arg0 alpha:(CGFloat)arg1 ;
-(struct CGImage *)newImageFromURL:(id)arg0 ;
-(void)applyClip:(id)arg0 onLayer:(id)arg1 ;
-(void)callFromJSFunction:(id)arg0 ;
-(void)dealloc;
-(void)dirty;
-(void)dirtyAll;
-(void)drawMark:(id)arg0 parentGroup:(id)arg1 into:(id)arg2 dirtyAll:(BOOL)arg3 ;
-(void)invalidateCaches;
-(void)render:(id)arg0 ;
-(void)resizeWidth:(CGFloat)arg0 height:(CGFloat)arg1 originX:(CGFloat)arg2 originY:(CGFloat)arg3 ;
-(void)updateCALayers;
-(void)updateCALayers:(id)arg0 dirtyAll:(BOOL)arg1 ;


@end


#endif
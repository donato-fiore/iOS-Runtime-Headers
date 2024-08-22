// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGEVIEWEXTENDEDSTORAGE_H
#define _UIIMAGEVIEWEXTENDEDSTORAGE_H

@class NSArray, CIContext, NSMapTable, NSString;
@protocol CAAnimationDelegate, _UIImageViewLoadingDelegate;

#import <Foundation/Foundation.h>

#import "UIImageView.h"
#import "UIImage.h"
#import "UIImageSymbolConfiguration.h"
#import "UILayoutGuide.h"
#import "_UIImageLoader.h"
#import "UIView.h"

@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate>

 {
    UIImageView *_imageView;
    UIImage *_image;
    UIImage *_highlightedImage;
    UIImage *_configuredImage;
    UIImage *_configuredHighlightedImage;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIImageSymbolConfiguration *_overridingSymbolConfiguration;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    CGFloat _animationDuration;
    NSInteger _animationRepeatCount;
    NSInteger _defaultRenderingMode;
    NSUInteger _templateImageRenderingEffects;
    UIImage *_displayedImage;
    UIImage *_displayedHighlightedImage;
    CIContext *_CIContext;
    UILayoutGuide *_imageContentGuide;
    NSMapTable *_layouts;
    unsigned int _drawMode;
    _UIImageLoader *_imageLoader;
    id<_UIImageViewLoadingDelegate> *_loadingDelegate;
    UIImage *_imageBeingSetByLoader;
    UIView *_placeholderView;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initForImageView:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif
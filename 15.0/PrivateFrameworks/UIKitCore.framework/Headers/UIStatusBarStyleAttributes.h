// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARSTYLEATTRIBUTES_H
#define UISTATUSBARSTYLEATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIStatusBarStyleRequest.h"
#import "UIStatusBarForegroundStyleAttributes.h"

@interface UIStatusBarStyleAttributes : NSObject <NSCopying>

 {
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}


@property (nonatomic) CGFloat foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) BOOL pulsingAnimationEnabled; // ivar: _pulsingAnimationEnabled


-(BOOL)isDoubleHeight;
-(BOOL)isLockScreen;
-(BOOL)isTranslucent;
-(BOOL)isTransparent;
-(BOOL)shouldProduceReturnEvent;
-(BOOL)shouldShowInternalItemType:(int)arg0 withScreenCapabilities:(id)arg1 ;
-(BOOL)shouldUseVisualAltitude;
-(BOOL)supportsRasterization;
-(BOOL)usesVerticalLayout;
-(CGFloat)glowAnimationDuration;
-(CGFloat)heightForMetrics:(NSInteger)arg0 ;
-(CGFloat)heightForOrientation:(NSInteger)arg0 ;
-(NSInteger)idiom;
-(NSInteger)legibilityStyle;
-(NSInteger)style;
-(NSInteger)tapButtonType;
-(id)backgroundColorWithTintColor:(id)arg0 ;
-(id)backgroundImageName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)foregroundStyle;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)newForegroundStyleWithHeight:(CGFloat)arg0 ;


@end


#endif
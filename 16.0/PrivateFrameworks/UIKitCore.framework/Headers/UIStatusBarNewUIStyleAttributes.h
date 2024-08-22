// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARNEWUISTYLEATTRIBUTES_H
#define UISTATUSBARNEWUISTYLEATTRIBUTES_H



#import "UIStatusBarStyleAttributes.h"
#import "UIColor.h"

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    BOOL _hasBusyBackground;
}




-(BOOL)isTranslucent;
-(BOOL)isTransparent;
-(BOOL)shouldUseVisualAltitude;
-(Class)foregroundStyleClass;
-(NSInteger)legibilityStyle;
-(id)backgroundColorWithTintColor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)foregroundColor;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 backgroundColor:(id)arg1 foregroundColor:(id)arg2 ;
-(id)initWithRequest:(id)arg0 backgroundColor:(id)arg1 foregroundColor:(id)arg2 hasBusyBackground:(BOOL)arg3 ;
-(id)newForegroundStyleWithHeight:(CGFloat)arg0 ;


@end


#endif
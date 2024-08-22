// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTGRADIENT_H
#define SUSCRIPTGRADIENT_H

@class NSString;


#import "SUScriptObject.h"
#import "SUGradient.h"

@interface SUScriptGradient : SUScriptObject {
    SUGradient *_nativeGradient;
}


@property (readonly) NSString *type;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)copyNativeGradient;
-(id)init;
-(id)initLinearGradientWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 x1:(CGFloat)arg2 y1:(CGFloat)arg3 ;
-(id)initRadialGraidentWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 r0:(CGFloat)arg2 x1:(CGFloat)arg3 y1:(CGFloat)arg4 r1:(CGFloat)arg5 ;
-(id)initWithGradient:(id)arg0 ;
-(id)patternColorWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 opaque:(BOOL)arg2 ;
-(id)scriptAttributeKeys;
-(void)addColorStopWithOffset:(CGFloat)arg0 color:(id)arg1 ;
-(void)dealloc;


@end


#endif
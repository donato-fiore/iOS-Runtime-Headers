// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTCOLOR_H
#define SUSCRIPTCOLOR_H

@class UIColor;


#import "SUScriptObject.h"

@interface SUScriptColor : SUScriptObject {
    UIColor *_color;
}


@property (readonly) CGFloat alpha;
@property (readonly) CGFloat blue;
@property (readonly) CGFloat green;
@property (readonly) UIColor *nativeColor;
@property (readonly) CGFloat red;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithStyleString:(id)arg0 ;
-(id)initWithUIColor:(id)arg0 ;
-(id)scriptAttributeKeys;
-(id)stringRepresentation;
-(struct CGColor *)copyCGColor;
-(void)dealloc;
-(void)setHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(void)setWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;


@end


#endif
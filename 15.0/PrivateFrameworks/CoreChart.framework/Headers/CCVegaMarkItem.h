// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGAMARKITEM_H
#define CCVEGAMARKITEM_H

@class JSValue, NSString, CALayer, NSArray;
@protocol CCVegaMarkItemInterface, CCVegaColorOrGradientInterface;

#import <Foundation/Foundation.h>


@interface CCVegaMarkItem : NSObject <CCVegaMarkItemInterface>

 {
    JSValue *_items;
}


@property (readonly) NSString *align;
@property (readonly) CGFloat angle;
@property (readonly) NSString *baseline;
@property (retain, nonatomic) CALayer *caLayer;
@property (readonly) BOOL clip;
@property (readonly) CGFloat cornerRadius;
@property (readonly) CGFloat dx;
@property (readonly) CGFloat dy;
@property (readonly) NSObject<CCVegaColorOrGradientInterface> *fill;
@property (readonly) CGFloat fillOpacity;
@property (readonly) NSString *font;
@property (readonly) CGFloat fontSize;
@property (readonly) NSString *fontStyle;
@property (readonly) NSString *fontWeight;
@property (readonly) CGFloat height;
@property (readonly) NSString *interpolate;
@property (nonatomic) BOOL isDirty;
@property (readonly, nonatomic) NSUInteger itemCount;
@property (retain) JSValue *mark; // ivar: mark
@property (readonly) CGFloat opacity;
@property (readonly) NSString *orient;
@property (readonly) NSString *path;
@property (readonly) CGFloat radius;
@property (readonly) NSString *shape;
@property (readonly) CGFloat size;
@property (readonly) NSObject<CCVegaColorOrGradientInterface> *stroke;
@property (readonly) NSString *strokeCap;
@property (readonly) NSArray *strokeDash;
@property (readonly) NSString *strokeJoin;
@property (readonly) CGFloat strokeMiterLimit;
@property (readonly) CGFloat strokeOpacity;
@property (readonly) CGFloat strokeWidth;
@property (readonly) CGFloat theta;
@property (readonly) CGFloat width;
@property (readonly) CGFloat x;
@property (readonly) CGFloat x2;
@property (readonly) CGFloat y;
@property (readonly) CGFloat y2;
@property (readonly) CGFloat zindex;


-(BOOL)defined;
-(BOOL)getBoolean:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)getDouble:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(id)getObject:(id)arg0 defaultValue:(id)arg1 ;
-(id)getString:(id)arg0 defaultValue:(id)arg1 ;
-(id)initWithJSValue:(id)arg0 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )bounds;


@end


#endif
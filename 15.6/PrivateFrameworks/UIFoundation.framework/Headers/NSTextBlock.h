// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSTEXTBLOCK_H
#define NSTEXTBLOCK_H

@protocol NSSecureCoding, NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSTextBlock : NSObject <NSSecureCoding, NSCoding, NSCopying>

 {
    *void _propVals;
    NSUInteger _propMask;
    NSUInteger _typeMask;
    id *_primParamVal;
    id *_otherParamVals;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(CGFloat)_valueForParameter:(NSUInteger)arg0 ;
-(CGFloat)contentWidth;
-(CGFloat)valueForDimension:(NSUInteger)arg0 ;
-(CGFloat)widthForLayer:(NSInteger)arg0 edge:(NSUInteger)arg1 ;
-(NSUInteger)_valueTypeForParameter:(NSUInteger)arg0 ;
-(NSUInteger)contentWidthValueType;
-(NSUInteger)valueTypeForDimension:(NSUInteger)arg0 ;
-(NSUInteger)verticalAlignment;
-(NSUInteger)widthValueTypeForLayer:(NSInteger)arg0 edge:(NSUInteger)arg1 ;
-(id)_attributeDescription;
-(id)backgroundColor;
-(id)borderColorForEdge:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGRect )boundsRectForContentRect:(struct CGRect )arg0 inRect:(struct CGRect )arg1 textContainer:(id)arg2 characterRange:(struct _NSRange )arg3 ;
-(struct CGRect )rectForLayoutAtPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 textContainer:(id)arg2 characterRange:(struct _NSRange )arg3 ;
-(void)_createFloatStorage;
-(void)_destroyFloatStorage;
-(void)_setValue:(CGFloat)arg0 type:(NSUInteger)arg1 forParameter:(NSUInteger)arg2 ;
-(void)_takeValuesFromTextBlock:(id)arg0 ;
-(void)dealloc;
-(void)drawBackgroundWithFrame:(struct CGRect )arg0 inView:(id)arg1 characterRange:(struct _NSRange )arg2 layoutManager:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBorderColor:(id)arg0 ;
-(void)setBorderColor:(id)arg0 forEdge:(NSUInteger)arg1 ;
-(void)setContentWidth:(CGFloat)arg0 type:(NSUInteger)arg1 ;
-(void)setValue:(CGFloat)arg0 type:(NSUInteger)arg1 forDimension:(NSUInteger)arg2 ;
-(void)setVerticalAlignment:(NSUInteger)arg0 ;
-(void)setWidth:(CGFloat)arg0 type:(NSUInteger)arg1 forLayer:(NSInteger)arg2 ;
-(void)setWidth:(CGFloat)arg0 type:(NSUInteger)arg1 forLayer:(NSInteger)arg2 edge:(NSUInteger)arg3 ;


@end


#endif
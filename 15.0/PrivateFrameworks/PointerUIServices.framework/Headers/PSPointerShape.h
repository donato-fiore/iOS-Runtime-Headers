// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSPOINTERSHAPE_H
#define PSPOINTERSHAPE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSPointerShape : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, copy, nonatomic) NSString *cornerCurve; // ivar: _cornerCurve
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) *CGPath path; // ivar: _path
@property (readonly, nonatomic) CGPoint pinnedPoint; // ivar: _pinnedPoint
@property (readonly, nonatomic) NSInteger shapeType; // ivar: _shapeType
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) BOOL usesEvenOddFillRule; // ivar: _usesEvenOddFillRule


+(BOOL)supportsSecureCoding;
+(id)circleWithBounds:(struct CGRect )arg0 ;
+(id)circleWithSize:(struct CGSize )arg0 ;
+(id)customShapeWithPath:(struct CGPath *)arg0 ;
+(id)customShapeWithPath:(struct CGPath *)arg0 usesEvenOddFillRule:(BOOL)arg1 ;
+(id)elasticRoundedRectPinnedAtPoint:(struct CGPoint )arg0 ;
+(id)roundedRectWithBounds:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)roundedRectWithBounds:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 cornerCurve:(id)arg2 ;
+(id)roundedRectWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)systemShape;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithShapeType:(NSInteger)arg0 bounds:(struct CGRect )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPath *)_createMutablePathByDecodingData:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
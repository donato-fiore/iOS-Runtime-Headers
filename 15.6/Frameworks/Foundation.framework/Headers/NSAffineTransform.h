// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSAFFINETRANSFORM_H
#define NSAFFINETRANSFORM_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding>

 {
    ? _transformStruct;
}


@property ? transformStruct;


+(BOOL)supportsSecureCoding;
+(id)transform;
+(id)transformWithFlipUsingHeight:(CGFloat)arg0 ;
+(id)transformWithRotationInDegrees:(CGFloat)arg0 ;
+(id)transformWithRotationInRadians:(CGFloat)arg0 ;
+(id)transformWithScale:(CGFloat)arg0 ;
+(id)transformWithTransformStruct:(struct ? )arg0 ;
+(id)transformWithXScale:(CGFloat)arg0 yScale:(CGFloat)arg1 ;
+(id)transformWithXTranslation:(CGFloat)arg0 yTranslation:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransform:(id)arg0 ;
-(struct CGPoint )transformPoint:(struct CGPoint )arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)appendTransform:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invert;
-(void)prependTransform:(id)arg0 ;
-(void)rotateByDegrees:(CGFloat)arg0 ;
-(void)rotateByRadians:(CGFloat)arg0 ;
-(void)scaleBy:(CGFloat)arg0 ;
-(void)scaleXBy:(CGFloat)arg0 yBy:(CGFloat)arg1 ;
-(void)translateXBy:(CGFloat)arg0 yBy:(CGFloat)arg1 ;


@end


#endif
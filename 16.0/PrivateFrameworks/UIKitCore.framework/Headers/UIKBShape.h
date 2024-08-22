// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBSHAPE_H
#define UIKBSHAPE_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UIKBGeometry.h"
#import "UIKBShape.h"

@interface UIKBShape : NSObject <NSCoding, NSCopying>



@property (nonatomic) NSUInteger concaveCorner; // ivar: m_concaveCorner
@property (nonatomic) CGSize concaveCornerOffset; // ivar: m_concaveCornerOffset
@property (nonatomic) CGRect frame; // ivar: m_frame
@property (retain, nonatomic) UIKBGeometry *geometry; // ivar: m_geometry
@property (retain, nonatomic) UIKBShape *originalShape; // ivar: m_originalShape
@property (nonatomic) CGRect paddedFrame; // ivar: m_paddedFrame
@property (nonatomic) BOOL scaled; // ivar: m_scaled
@property (readonly, nonatomic) NSUInteger uid; // ivar: m_uid


+(id)shape;
+(id)shapeByCombining:(id)arg0 withShape:(id)arg1 ;
+(id)shapeByResizingShape:(id)arg0 byAmount:(struct CGSize )arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldUseGeometry;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeometry:(id)arg0 frame:(struct CGRect )arg1 paddedFrame:(struct CGRect )arg2 ;
-(id)initWithGeometry:(id)arg0 frame:(struct CGRect )arg1 paddedFrame:(struct CGRect )arg2 concaveCorner:(NSUInteger)arg3 concaveCornerOffset:(struct CGSize )arg4 ;
-(struct CGRect )_scaleRect:(struct CGRect )arg0 inYAxis:(BOOL)arg1 ;
-(void)addRectFrom:(id)arg0 ;
-(void)addRectFrom:(id)arg0 mergeActionFactors:(id)arg1 inRightToLeft:(BOOL)arg2 ;
-(void)addRectFrom:(id)arg0 widthFraction:(CGFloat)arg1 heightFraction:(CGFloat)arg2 adjustOriginXFactor:(CGFloat)arg3 adjustOriginYFactor:(CGFloat)arg4 ;
-(void)addRectFrom:(id)arg0 widthFraction:(CGFloat)arg1 heightFraction:(CGFloat)arg2 adjustOriginXFactor:(CGFloat)arg3 adjustOriginYFactor:(CGFloat)arg4 absoluteOriginFactors:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)makeLikeOther:(id)arg0 ;
-(void)scaleIfNeeded:(CGFloat)arg0 onlyYAxis:(BOOL)arg1 ;
-(void)scaleWidth:(CGFloat)arg0 ;


@end


#endif
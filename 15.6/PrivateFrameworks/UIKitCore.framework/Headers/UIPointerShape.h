// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPOINTERSHAPE_H
#define UIPOINTERSHAPE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"

@interface UIPointerShape : NSObject <NSCopying>



@property (nonatomic, setter=_setType:) NSInteger _type; // ivar: __type
@property (nonatomic) CGFloat beamLength; // ivar: _beamLength
@property (readonly, nonatomic) NSString *cornerCurve;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat defaultCornerRadius; // ivar: _defaultCornerRadius
@property (readonly, nonatomic) CGFloat effectiveCornerRadius;
@property (nonatomic) CGPoint inherentConstrainedSlip; // ivar: _inherentConstrainedSlip
@property (readonly, nonatomic) BOOL isCircle;
@property (readonly, nonatomic) BOOL isElastic;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) NSUInteger materialUsage; // ivar: _materialUsage
@property (copy, nonatomic) UIBezierPath *path; // ivar: _path
@property (nonatomic) CGPoint pinnedPoint; // ivar: _pinnedPoint
@property (nonatomic) CGRect rect; // ivar: _rect
@property (readonly, nonatomic) CGSize size;


+(id)_elasticRectShapePinnedAtPoint:(struct CGPoint )arg0 ;
+(id)_linkPointerShape;
+(id)_shapeWithSymbol:(id)arg0 pointSize:(CGFloat)arg1 ;
+(id)beamWithPreferredLength:(CGFloat)arg0 axis:(NSUInteger)arg1 ;
+(id)shapeWithPath:(id)arg0 ;
+(id)shapeWithRoundedRect:(struct CGRect )arg0 ;
+(id)shapeWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
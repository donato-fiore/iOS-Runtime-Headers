// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISHAPE_H
#define _UISHAPE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"
#import "_UIShape.h"

@interface _UIShape : NSObject <NSCopying>



@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) NSString *cornerCurve; // ivar: _cornerCurve
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) BOOL isRect;
@property (readonly, nonatomic) UIBezierPath *outline;
@property (readonly, nonatomic) UIBezierPath *path; // ivar: _path
@property (readonly, nonatomic) CGRect rect; // ivar: _rect
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) _UIShape *zeroOriginShape;


+(id)shapeWithPath:(id)arg0 ;
+(id)shapeWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 cornerCurve:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)shapeConvertedFromCoordinateSpace:(id)arg0 toCoordinateSpace:(id)arg1 ;


@end


#endif
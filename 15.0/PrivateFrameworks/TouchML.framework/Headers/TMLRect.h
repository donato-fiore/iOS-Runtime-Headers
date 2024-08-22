// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLRECT_H
#define TMLRECT_H

@protocol TMLRectJSExports, NSCopying;

#import <Foundation/Foundation.h>

#import "TMLPoint.h"
#import "TMLSize.h"

@interface TMLRect : NSObject <TMLRectJSExports, NSCopying>



@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) TMLPoint *maxpoint;
@property (readonly, nonatomic) CGFloat maxx;
@property (readonly, nonatomic) CGFloat maxy;
@property (readonly, nonatomic) TMLPoint *midpoint;
@property (readonly, nonatomic) CGFloat midx;
@property (readonly, nonatomic) CGFloat midy;
@property (readonly, nonatomic) TMLPoint *minpoint;
@property (readonly, nonatomic) CGFloat minx;
@property (readonly, nonatomic) CGFloat miny;
@property (readonly, nonatomic) TMLPoint *origin;
@property (readonly, nonatomic) CGRect rect; // ivar: _rect
@property (readonly, nonatomic) TMLSize *size;
@property (readonly, nonatomic) CGFloat width;
@property (readonly, nonatomic) CGFloat x;
@property (readonly, nonatomic) CGFloat y;


+(void)initializeJSContext:(id)arg0 ;
-(id)CGRectValue;
-(id)applyAffineTransform:(id)arg0 ;
-(id)applyScale:(CGFloat)arg0 ;
-(id)atOrigin:(id)arg0 ;
-(id)atOriginX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)inset:(CGFloat)arg0 ;
-(id)integral;
-(id)max:(CGFloat)arg0 ;
-(id)min:(CGFloat)arg0 ;
-(id)offset:(CGFloat)arg0 ;
-(id)originInset:(CGFloat)arg0 ;
-(id)withHeight:(CGFloat)arg0 ;
-(id)withWidth:(CGFloat)arg0 ;


@end


#endif
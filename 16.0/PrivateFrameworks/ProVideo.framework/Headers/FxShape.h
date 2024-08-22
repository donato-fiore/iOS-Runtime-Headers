// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXSHAPE_H
#define FXSHAPE_H


#import <Foundation/Foundation.h>


@interface FxShape : NSObject {
    *FxShapePriv _priv;
}




+(id)infiniteShape;
+(id)shapeWithRect:(struct CGRect )arg0 ;
-(BOOL)isInfinite;
-(id)initWithInfiniteBounds;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)intersectWithShape:(id)arg0 ;
-(struct CGRect )extent;
-(void)dealloc;


@end


#endif
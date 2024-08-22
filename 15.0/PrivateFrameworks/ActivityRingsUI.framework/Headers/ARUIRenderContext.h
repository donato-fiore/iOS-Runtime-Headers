// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUIRENDERCONTEXT_H
#define ARUIRENDERCONTEXT_H


#import <Foundation/Foundation.h>


@interface ARUIRenderContext : NSObject {
    float _drawableDiameter;
    ? _skewAdjustmentMatrix;
    ? _drawableSize;
}


@property (readonly, nonatomic) float drawableDiameter;
@property ? drawableSize;
@property (nonatomic) BOOL opaque; // ivar: _opaque
@property (nonatomic) BOOL presentsWithTransaction; // ivar: _presentsWithTransaction
@property (readonly, nonatomic) float screenScale; // ivar: _screenScale
@property (readonly, nonatomic) ? skewAdjustmentMatrix;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDrawableSize;
-(id)initWithSize:(struct CGSize )arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCOMPOSITELAYOUTYAXISANCHOR_H
#define _NSCOMPOSITELAYOUTYAXISANCHOR_H

@class NSArray;
@protocol NSCompositeLayoutAnchor;


#import "NSLayoutYAxisAnchor.h"
#import "NSLayoutDimension.h"

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor <NSCompositeLayoutAnchor>

 {
    NSLayoutYAxisAnchor *_yAxisAnchor;
    CGFloat _constant;
    CGFloat _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}


@property (readonly) NSArray *_childAnchors;


-(CGFloat)_valueInEngine:(id)arg0 ;
-(id)_expressionInContext:(struct ? )arg0 ;
-(id)equationDescription;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithAnchor:(id)arg0 plusDimension:(id)arg1 times:(CGFloat)arg2 plus:(CGFloat)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
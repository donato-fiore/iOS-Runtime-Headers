// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSCOMPOSITELAYOUTDIMENSION_H
#define _NSCOMPOSITELAYOUTDIMENSION_H

@class NSArray;
@protocol NSCompositeLayoutAnchor;


#import "NSLayoutDimension.h"

@interface _NSCompositeLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor>

 {
    NSLayoutDimension *_firstLayoutDimension;
    CGFloat _secondLayoutDimensionMultiplier;
    NSLayoutDimension *_secondLayoutDimension;
}


@property (readonly) NSArray *_childAnchors;


-(CGFloat)_valueInEngine:(id)arg0 ;
-(id)_expressionInContext:(struct ? )arg0 ;
-(id)equationDescription;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimension:(id)arg0 plusDimension:(id)arg1 ;
-(id)initWithDimension:(id)arg0 plusDimension:(id)arg1 times:(CGFloat)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
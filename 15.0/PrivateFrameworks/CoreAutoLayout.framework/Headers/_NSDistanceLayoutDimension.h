// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSDISTANCELAYOUTDIMENSION_H
#define _NSDISTANCELAYOUTDIMENSION_H

@class NSArray;
@protocol NSCompositeLayoutAnchor;


#import "NSLayoutDimension.h"
#import "NSLayoutAnchor.h"

@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor>

 {
    NSLayoutAnchor *_minuend;
    NSLayoutAnchor *_subtrahend;
}


@property (readonly) NSArray *_childAnchors;


+(id)distanceFromAnchor:(id)arg0 toAnchor:(id)arg1 ;
-(CGFloat)_valueInEngine:(id)arg0 ;
-(id)_expressionInContext:(struct ? )arg0 ;
-(id)equationDescription;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinuend:(id)arg0 subtrahend:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPZONEBORDERINTERSECTION_H
#define CPZONEBORDERINTERSECTION_H

@protocol NSCopying, CPCopying;

#import <Foundation/Foundation.h>

#import "CPZoneBorder.h"

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying>

 {
    CGRect intersectionRect;
    CPZoneBorder *intersectingBorder;
    BOOL forwardVector;
    BOOL backwardVector;
}




-(BOOL)backwardVector;
-(BOOL)forwardVector;
-(NSInteger)comparePositionLengthwise:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initSuper;
-(id)intersectingBorder;
-(struct CGRect )intersectionRect;
-(void)setBackwardVector:(BOOL)arg0 ;
-(void)setForwardVector:(BOOL)arg0 ;
-(void)setIntersectingBorder:(id)arg0 ;
-(void)setIntersectionRect:(struct CGRect )arg0 ;


@end


#endif
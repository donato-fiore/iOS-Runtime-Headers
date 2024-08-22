// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLAYOUTRECTANGLE_H
#define NSLAYOUTRECTANGLE_H



#import "NSLayoutRect.h"
#import "NSLayoutPoint.h"

@interface NSLayoutRectangle : NSLayoutRect

@property (readonly, copy) NSLayoutPoint *centerPoint;


+(id)rectangleWithCenter:(id)arg0 width:(id)arg1 height:(id)arg2 ;
+(id)rectangleWithLeading:(id)arg0 top:(id)arg1 trailing:(id)arg2 bottom:(id)arg3 ;
+(id)rectangleWithLeading:(id)arg0 top:(id)arg1 width:(id)arg2 height:(id)arg3 ;
-(id)constraintsContainingWithinRectangle:(id)arg0 ;
-(id)constraintsEqualToRectangle:(id)arg0 ;
-(id)rectangleByInsettingTop:(CGFloat)arg0 leading:(CGFloat)arg1 bottom:(CGFloat)arg2 trailing:(CGFloat)arg3 ;
-(id)rectangleByInsettingTopByDimension:(id)arg0 leadingByDimension:(id)arg1 bottomByDimension:(id)arg2 trailingByDimension:(id)arg3 ;
-(id)rectangleBySlicingWithDimension:(id)arg0 fromEdge:(NSInteger)arg1 ;
-(id)rectangleBySlicingWithDistance:(CGFloat)arg0 fromEdge:(NSInteger)arg1 ;
-(id)rectangleBySlicingWithProportion:(CGFloat)arg0 fromEdge:(NSInteger)arg1 ;
-(id)rectangleWithName:(id)arg0 ;


@end


#endif
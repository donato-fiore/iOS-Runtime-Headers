// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAMUTABLERECTARRAY_H
#define IPAMUTABLERECTARRAY_H



#import "IPARectArray.h"

@interface IPAMutableRectArray : IPARectArray



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addRect:(struct CGRect )arg0 ;
-(void)insertRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllRects;
-(void)removeRectAtIndex:(NSUInteger)arg0 ;
-(void)setRectArray:(id)arg0 ;


@end


#endif
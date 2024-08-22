// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLRASTERIZATIONRATESAMPLEARRAYINTERNAL_H
#define MTLRASTERIZATIONRATESAMPLEARRAYINTERNAL_H



#import "MTLRasterizationRateSampleArray.h"

@interface MTLRasterizationRateSampleArrayInternal : MTLRasterizationRateSampleArray {
    *float _data;
    NSUInteger _count;
}




-(*float)__getRawArray:(*NSUInteger)arg0 ;
-(id)initWithData:(*float)arg0 numElements:(NSUInteger)arg1 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;


@end


#endif
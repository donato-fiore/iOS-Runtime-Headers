// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHISTOGRAM_H
#define AWDHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface AWDHistogram : NSObject {
    *unsigned int histogram;
    *unsigned int buckets;
    *float floatBuckets;
    unsigned int size;
}




-(id)array;
-(id)initWithBuckets:(*unsigned int)arg0 size:(unsigned int)arg1 ;
-(id)initWithFloatBuckets:(*float)arg0 size:(unsigned int)arg1 ;
-(id)newArray;
-(void)addFloatValue:(float)arg0 ;
-(void)addValue:(unsigned int)arg0 ;
-(void)addValue:(unsigned int)arg0 withIncrements:(unsigned int)arg1 ;
-(void)dealloc;
-(void)print;
-(void)reduceFrequencyByFactor:(unsigned int)arg0 ;
-(void)reset;


@end


#endif
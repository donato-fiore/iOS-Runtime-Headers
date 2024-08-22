// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCHISTOGRAM_H
#define VCHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface VCHistogram : NSObject {
    *unsigned int _buckets;
    unsigned int _bucketCount;
}


@property (readonly) *unsigned int ranges; // ivar: _ranges


+(*unsigned int)bucketWithType:(int)arg0 count:(*unsigned int)arg1 ;
+(id)rangesDescription:(int)arg0 ;
-(BOOL)merge:(id)arg0 ;
-(id)array;
-(id)description;
-(id)initWithType:(int)arg0 bucketValues:(id)arg1 ;
-(unsigned int)bucketValueAtIndex:(unsigned int)arg0 ;
-(void)addValue:(unsigned int)arg0 ;
-(void)addValue:(unsigned int)arg0 withIncrement:(unsigned int)arg1 ;
-(void)dealloc;
-(void)reset;


@end


#endif
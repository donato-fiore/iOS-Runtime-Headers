// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCHISTOGRAM2D_H
#define VCHISTOGRAM2D_H



#import "VCHistogram.h"

@interface VCHistogram2D : VCHistogram {
    **unsigned int _buckets2D;
}




-(id)description;
-(id)initWithType:(int)arg0 bucketValues:(id)arg1 ;
-(void)addValue:(unsigned int)arg0 withArray:(id)arg1 ;
-(void)dealloc;
-(void)reset;


@end


#endif
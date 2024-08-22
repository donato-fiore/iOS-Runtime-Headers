// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FISIMPLEHISTOGRAM_H
#define FISIMPLEHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface FISimpleHistogram : NSObject {
    NSUInteger _bucketCount;
    *? _buckets;
}




-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)valueForBucketAtIndex:(NSUInteger)arg0 ;
-(NSInteger)bucketCount;
-(NSInteger)numberOfValuesInBucketAtIndex:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)descriptionArray;
-(id)initWithNumberOfBuckets:(NSInteger)arg0 ;
-(void)addValue:(CGFloat)arg0 toBucketAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif
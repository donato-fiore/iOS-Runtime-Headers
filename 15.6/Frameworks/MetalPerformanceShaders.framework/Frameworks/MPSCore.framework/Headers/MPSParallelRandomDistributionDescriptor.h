// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSPARALLELRANDOMDISTRIBUTIONDESCRIPTOR_H
#define MPSPARALLELRANDOMDISTRIBUTIONDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSParallelRandomDistributionDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger distributionType; // ivar: _distributionType
@property (nonatomic) float maximum; // ivar: _maximum
@property (nonatomic) float mean; // ivar: _mean
@property (nonatomic) float minimum; // ivar: _minimum
@property (nonatomic) float standardDeviation; // ivar: _standardDeviation


+(id)defaultDistributionDescriptor;
+(id)normalDistributionDescriptorWithMean:(float)arg0 standardDeviation:(float)arg1 ;
+(id)normalDistributionDescriptorWithMean:(float)arg0 standardDeviation:(float)arg1 minimum:(float)arg2 maximum:(float)arg3 ;
+(id)uniformDistributionDescriptorWithMinimum:(float)arg0 maximum:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
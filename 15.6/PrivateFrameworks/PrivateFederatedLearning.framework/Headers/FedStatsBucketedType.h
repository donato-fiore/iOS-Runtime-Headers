// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FEDSTATSBUCKETEDTYPE_H
#define FEDSTATSBUCKETEDTYPE_H

@class NSArray, NSNumber;


#import "FedStatsBoundedULongType.h"

@interface FedStatsBucketedType : FedStatsBoundedULongType

@property (retain, nonatomic) NSArray *bucketBoundaries; // ivar: _bucketBoundaries
@property (retain, nonatomic) NSNumber *bucketCount; // ivar: _bucketCount
@property (retain, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (retain, nonatomic) NSNumber *minValue; // ivar: _minValue
@property (retain, nonatomic) NSNumber *stepSize; // ivar: _stepSize
@property (nonatomic) NSInteger version; // ivar: _version


+(id)createFromDict:(id)arg0 possibleError:(*id)arg1 ;
-(NSInteger)dataType;
-(NSUInteger)classCount;
-(id)decodeFromIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)indexToInterval:(id)arg0 ;
-(id)initWithBucketBoundaries:(id)arg0 ;
-(id)initWithMinValue:(id)arg0 maxValue:(id)arg1 bucketCount:(id)arg2 ;
-(id)sampleForIndex:(NSUInteger)arg0 ;


@end


#endif
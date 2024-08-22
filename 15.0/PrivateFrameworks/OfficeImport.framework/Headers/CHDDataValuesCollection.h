// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDDATAVALUESCOLLECTION_H
#define CHDDATAVALUESCOLLECTION_H


#import <Foundation/Foundation.h>


@interface CHDDataValuesCollection : NSObject {
    *__CFData mPackedValues;
    NSUInteger mDataValueCount;
    *__CFDictionary mIndexToDataValueMap;
    BOOL mContainsStringValue;
}




-(BOOL)addDataPoint:(struct CHDDataPoint *)arg0 ;
-(BOOL)addDataValue:(id)arg0 ;
-(BOOL)containsStringValue;
-(NSUInteger)count;
-(NSUInteger)maxDataPointIndex;
-(id)contentFormatAtIndex:(NSUInteger)arg0 resources:(id)arg1 ;
-(id)dataValueAtIndex:(NSUInteger)arg0 ;
-(id)dataValueWithIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDataPointCount:(NSUInteger)arg0 ;
-(struct CHDDataPoint *)dataPointAtIndex:(NSUInteger)arg0 ;
-(struct CHDDataPoint *)dataPointWithIndex:(NSUInteger)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)finishReading;
-(void)resetWithDataPointCount:(NSUInteger)arg0 ;
-(void)setupBufferForValues:(NSUInteger)arg0 ;


@end


#endif
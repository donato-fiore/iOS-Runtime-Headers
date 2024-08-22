// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXHISTOGRAMBUCKET_H
#define MXHISTOGRAMBUCKET_H

@class NSMeasurementFormatter, NSMeasurement;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXHistogramBucket : NSObject <NSSecureCoding>

 {
    NSMeasurementFormatter *_histogramBucketFormatter;
}


@property (readonly) NSUInteger bucketCount; // ivar: _bucketCount
@property (readonly) NSMeasurement *bucketEnd; // ivar: _bucketEnd
@property (readonly) NSMeasurement *bucketStart; // ivar: _bucketStart


+(BOOL)supportsSecureCoding;
-(id)initWithBucketStart:(id)arg0 bucketEnd:(id)arg1 bucketCount:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
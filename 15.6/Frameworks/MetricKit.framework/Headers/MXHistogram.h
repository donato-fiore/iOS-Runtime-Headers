// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXHISTOGRAM_H
#define MXHISTOGRAM_H

@class NSEnumerator, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXHistogram : NSObject <NSSecureCoding>



@property (readonly) NSEnumerator *bucketEnumerator; // ivar: _bucketEnumerator
@property (readonly) NSArray *histogramData; // ivar: _histogramData
@property (readonly) NSUInteger totalBucketCount; // ivar: _totalBucketCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistogramBucketData:(id)arg0 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
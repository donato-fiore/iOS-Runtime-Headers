// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHEARTRATESUMMARYSTATISTICSBUCKET_H
#define HKHEARTRATESUMMARYSTATISTICSBUCKET_H

@class NSIndexSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger bucketIndex; // ivar: _bucketIndex
@property (readonly, nonatomic) NSIndexSet *heartRatesInBeatsPerMinute; // ivar: _heartRatesInBeatsPerMinute


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBucketIndex:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addHeartRateInBeatsPerMinute:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
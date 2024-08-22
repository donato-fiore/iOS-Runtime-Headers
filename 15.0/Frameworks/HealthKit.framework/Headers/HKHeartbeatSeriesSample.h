// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEARTBEATSERIESSAMPLE_H
#define HKHEARTBEATSERIESSAMPLE_H

@class NSData, NSNumber, NSString;
@protocol _HKBinarySample;


#import "HKSeriesSample.h"

@interface HKHeartbeatSeriesSample : HKSeriesSample <_HKBinarySample>

 {
    NSData *_heartbeatData;
    NSNumber *_cachedMinBeatsPerMinute;
    NSNumber *_cachedMaxBeatsPerMinute;
}


@property (readonly) NSNumber *_maximumBeatsPerMinute;
@property (readonly) NSNumber *_minimumBeatsPerMinute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger numberOfDataPoints; // ivar: _numberOfDataPoints
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)_heartbeatSeriesSampleFromCSV:(id)arg0 startDate:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
+(id)_heartbeatSeriesSampleWithData:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 ;
+(id)heartBeatSequenceSampleFromCSV:(id)arg0 startDate:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
+(id)heartbeatSequenceSampleWithData:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 metadata:(id)arg3 ;
-(BOOL)_shouldNotifyOnInsert;
-(NSUInteger)count;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)payload;
-(void)_computeMinimumAndMaximumBeatsPerMinute;
-(void)_enumerateHeartbeatDataWithBlock:(id)arg0 ;
-(void)_setPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateHeartbeatDataWithBlock:(id)arg0 ;


@end


#endif
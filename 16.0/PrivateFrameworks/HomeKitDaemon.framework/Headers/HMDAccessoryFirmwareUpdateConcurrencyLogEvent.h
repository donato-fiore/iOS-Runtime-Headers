// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATECONCURRENCYLOGEVENT_H
#define HMDACCESSORYFIRMWAREUPDATECONCURRENCYLOGEVENT_H

@class HMMLogEvent;



@interface HMDAccessoryFirmwareUpdateConcurrencyLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSUInteger peakConcurrentBLEAccessoryUpdateApply; // ivar: _peakConcurrentBLEAccessoryUpdateApply
@property (readonly, nonatomic) NSUInteger peakConcurrentBLEAccessoryUpdateStaging; // ivar: _peakConcurrentBLEAccessoryUpdateStaging
@property (readonly, nonatomic) NSUInteger peakConcurrentIPAccessoryUpdateApply; // ivar: _peakConcurrentIPAccessoryUpdateApply
@property (readonly, nonatomic) NSUInteger peakConcurrentIPAccessoryUpdateStaging; // ivar: _peakConcurrentIPAccessoryUpdateStaging
@property (readonly, nonatomic) NSUInteger peakConcurrentThreadAccessoryUpdateApply; // ivar: _peakConcurrentThreadAccessoryUpdateApply
@property (readonly, nonatomic) NSUInteger peakConcurrentThreadAccessoryUpdateStaging; // ivar: _peakConcurrentThreadAccessoryUpdateStaging


-(id)initWithPeakConcurrentIPAccessoryUpdateStaging:(NSUInteger)arg0 peakConcurrentIPAccessoryUpdateApply:(NSUInteger)arg1 peakConcurrentBLEAccessoryUpdateStaging:(NSUInteger)arg2 peakConcurrentBLEAccessoryUpdateApply:(NSUInteger)arg3 peakConcurrentThreadAccessoryUpdateStaging:(NSUInteger)arg4 peakConcurrentThreadAccessoryUpdateApply:(NSUInteger)arg5 ;


@end


#endif
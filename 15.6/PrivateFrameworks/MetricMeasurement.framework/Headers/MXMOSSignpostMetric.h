// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMOSSIGNPOSTMETRIC_H
#define MXMOSSIGNPOSTMETRIC_H

@class NSDate, NSString;
@protocol OS_dispatch_semaphore;


#import "MXMMetric.h"
#import "MXMInstrument.h"

@interface MXMOSSignpostMetric : MXMMetric {
    NSDate *_startDate;
    NSDate *_stopDate;
    NSUInteger _startMachContTime;
    NSUInteger _stopMachContTime;
    NSObject<OS_dispatch_semaphore> *_startDate_semaphore;
    NSObject<OS_dispatch_semaphore> *_stopDate_semaphore;
}


@property (readonly, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) MXMInstrument *instrument;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *subsystem;


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldAlwaysWrapInProxy;
-(BOOL)_shouldConstructProbe;
-(BOOL)_shouldNeverWrapInProxy;
-(NSUInteger)_sampleMode;
-(id)_constructProbe;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubsystem:(id)arg0 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 ;
-(void)didStartAtContinuousTime:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 startDate:(id)arg2 ;
-(void)didStartAtTime:(NSUInteger)arg0 startDate:(id)arg1 ;
-(void)didStopAtContinuousTime:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 stopDate:(id)arg2 ;
-(void)didStopAtTime:(NSUInteger)arg0 stopDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTSUPPORTMACHTIMETRANSLATOR_H
#define SIGNPOSTSUPPORTMACHTIMETRANSLATOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SignpostSupportMachTimeTranslator : NSObject

@property (readonly, nonatomic) BOOL containsContinuousTimeJumps;
@property BOOL isMonitoringSleepWake; // ivar: _isMonitoringSleepWake
@property (nonatomic) NSUInteger maxEntries; // ivar: _maxEntries
@property (readonly, nonatomic) NSMutableArray *startMachAbsoluteTimes; // ivar: _startMachAbsoluteTimes
@property (readonly, nonatomic) NSMutableArray *startMachContinuousTimes; // ivar: _startMachContinuousTimes
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // ivar: _synchronizationQueue
@property (readonly, nonatomic) NSMutableArray *translationRanges; // ivar: _translationRanges


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)machAbsoluteTimeForMachContinuousTime:(NSUInteger)arg0 ;
-(NSUInteger)machContinuousTimeForMachAbsoluteTime:(NSUInteger)arg0 ;
-(id)dataRepresentation;
-(id)init;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)serializableDictionaryRepresentation;
-(void)addTimestampPairWithMachAbsoluteTime:(NSUInteger)arg0 machContinuousTime:(NSUInteger)arg1 ;


@end


#endif
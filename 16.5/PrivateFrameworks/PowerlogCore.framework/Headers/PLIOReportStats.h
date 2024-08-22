// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLIOREPORTSTATS_H
#define PLIOREPORTSTATS_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface PLIOReportStats : NSObject

@property (retain) NSString *driverName; // ivar: _driverName
@property (retain) NSDictionary *ioReportSample; // ivar: _ioReportSample
@property (retain) NSDate *sampleTime; // ivar: _sampleTime
@property (retain) NSDate *sampleTimePrevious; // ivar: _sampleTimePrevious
@property (retain) NSDictionary *subscribedChannels; // ivar: _subscribedChannels
@property *__IOReportSubscriptionCF subscription; // ivar: _subscription


-(BOOL)subscribeToGroup:(id)arg0 andSubGroup:(id)arg1 ;
-(BOOL)subscribeToGroup:(id)arg0 andSubGroup:(id)arg1 withChannelIDs:(id)arg2 ;
-(BOOL)subscribeToGroup:(id)arg0 andSubGroup:(id)arg1 withChannelIDs:(id)arg2 manualChannelOnly:(BOOL)arg3 ;
-(BOOL)updateStats;
-(BOOL)updateStatsWithBlock:(id)arg0 ;
-(CGFloat)getSampleDuration;
-(id)_init;
-(id)currentValueForSimpleChannel:(id)arg0 ;
-(id)currentValueForStateChannel:(id)arg0 atIndex:(int)arg1 ;
-(id)deltaValueForSimpleChannel:(id)arg0 ;
-(id)deltaValueForStateChannel:(id)arg0 atIndex:(int)arg1 ;
-(id)getCurrentStats;
-(id)getDeltaStats;
-(id)init;
-(id)initWithDriverName:(id)arg0 withGroup:(id)arg1 ;
-(id)initWithGroup:(id)arg0 andSubGroup:(id)arg1 ;
-(id)initWithGroup:(id)arg0 andSubGroup:(id)arg1 withChannelIDs:(id)arg2 ;
-(id)initWithGroup:(id)arg0 andSubGroup:(id)arg1 withChannelIDs:(id)arg2 manualChannelOnly:(BOOL)arg3 ;
-(id)parseSimpleDeltaSample;
-(id)parseSimpleIOReportSample;
-(void)clearSubscription;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAWDLOGEVENTOBSERVER_H
#define HMDAWDLOGEVENTOBSERVER_H

@class HMFObject, NSString;
@protocol HMMLogEventObserver;



@interface HMDAWDLogEventObserver : HMFObject <HMMLogEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedAWDServerConnection;
+(id)stringForAWDMetricType:(unsigned int)arg0 ;
+(void)_submitAWDMetric:(id)arg0 type:(unsigned int)arg1 ;
+(void)initialize;
-(id)init;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;


@end


#endif
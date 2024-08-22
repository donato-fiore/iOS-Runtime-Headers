// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FETCHACTIVITYSTREAM_H
#define FETCHACTIVITYSTREAM_H

@class SAFetchActivityStream, SAActivityObject, NSString;
@protocol AFServiceCommand;



@interface FetchActivityStream : SAFetchActivityStream <AFServiceCommand>



@property (retain, nonatomic) SAActivityObject *appLaunchActivity; // ivar: _appLaunchActivity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_timeBasedMergePublisher:(id)arg0 withOtherPublishers:(id)arg1 ;
-(id)_timeBasedPublisher:(id)arg0 withStartDate:(id)arg1 endDate:(id)arg2 limit:(id)arg3 ;
-(id)convertAlarmEventToSAActivity:(id)arg0 eventTimestamp:(CGFloat)arg1 ;
-(id)convertBiomeEventToSAActivity:(id)arg0 ;
-(id)convertIntentEventToSAActivity:(id)arg0 ;
-(id)convertNowPlayingEventToSAActivity:(id)arg0 ;
-(id)convertSiriExecutionEventToSAActivity:(id)arg0 ;
-(void)fetchAllBiomeEventsWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)fetchNonSiriUIEventsWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)fetchSiriUIEventsWithCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif
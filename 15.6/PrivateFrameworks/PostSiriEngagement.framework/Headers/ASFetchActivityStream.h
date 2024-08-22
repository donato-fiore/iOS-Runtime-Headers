// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFETCHACTIVITYSTREAM_H
#define ASFETCHACTIVITYSTREAM_H

@class SAFetchActivityStream, SAActivityObject, NSString;
@protocol AFServiceCommand;



@interface ASFetchActivityStream : SAFetchActivityStream <AFServiceCommand>



@property (retain, nonatomic) SAActivityObject *appLaunchActivity; // ivar: _appLaunchActivity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)convertIntentEventToSAActivity:(id)arg0 ;
-(id)convertNowPlayingEventToSAActivity:(id)arg0 ;
-(id)convertSiriExecutionEventToSAActivity:(id)arg0 ;
-(void)fetchActivityStreamWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllBiomeEventsWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)fetchAppIntentEventsWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)fetchNonSiriUIEventsWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)fetchSiriExecutionEventsWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)fetchSiriUIEventsWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)performWithCompletion:(id)arg0 ;


@end


#endif
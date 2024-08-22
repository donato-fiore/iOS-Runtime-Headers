// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12SHAZAMEVENTS19SHAZAMEVENTSSERVICE_H
#define _TTC12SHAZAMEVENTS19SHAZAMEVENTSSERVICE_H

@class SHService, NSArray;
@protocol SHWorkerDelegate, _TtP12ShazamEvents18ShazamEventsServer_, SHServiceDelegate;



@interface _TtC12ShazamEvents19ShazamEventsService : SHService <SHWorkerDelegate, _TtP12ShazamEvents18ShazamEventsServer_>

 {
    ? liveMusicEventFetcher;
    ? underlyingServiceDelegate;
}


@property (nonatomic, retain) NSObject<SHServiceDelegate> *serviceDelegate;
@property (nonatomic, readonly) NSArray *workers;


+(id)machServiceName;
+(void)initializeGlobalServiceState;
-(BOOL)shouldStartWorker:(id)arg0 ;
-(id)init;
-(void)liveMusicEventWithEventID:(id)arg0 completionHandler:(id)arg1 ;
-(void)liveMusicScheduleWithArtistID:(id)arg0 completionHandler:(id)arg1 ;
-(void)liveMusicScheduleWithVenueID:(id)arg0 completionHandler:(id)arg1 ;
-(void)workerUpdated:(id)arg0 withRunningState:(BOOL)arg1 ;


@end


#endif
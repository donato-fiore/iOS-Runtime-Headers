// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SHAZAMEVENTS19SHAZAMEVENTSSERVICE_H
#define _TTC12SHAZAMEVENTS19SHAZAMEVENTSSERVICE_H

@protocol SHService, _TtP12ShazamEvents18ShazamEventsServer_, SHServiceDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12ShazamEvents19ShazamEventsService : NSObject <SHService, _TtP12ShazamEvents18ShazamEventsServer_>

 {
    ? liveMusicEventFetcher;
    ? underlyingServiceDelegate;
}


@property (nonatomic, retain) NSObject<SHServiceDelegate> *serviceDelegate;


+(id)machServiceName;
+(void)initializeGlobalServiceState;
-(id)init;
-(void)liveMusicEventWithEventID:(id)arg0 completionHandler:(id)arg1 ;
-(void)liveMusicScheduleWithArtistID:(id)arg0 completionHandler:(id)arg1 ;
-(void)liveMusicScheduleWithVenueID:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;


@end


#endif
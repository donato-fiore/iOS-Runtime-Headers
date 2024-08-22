// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOEXTERNALREQUESTCOUNTERTICKETBASE_H
#define GEOEXTERNALREQUESTCOUNTERTICKETBASE_H

@class NSString, NSDate;
@protocol GEOExternalRequestCounterTicket;

#import <Foundation/Foundation.h>


@interface GEOExternalRequestCounterTicketBase : NSObject <GEOExternalRequestCounterTicket>

 {
    NSString *_requestType;
    NSString *_requestSubtype;
    NSString *_source;
    NSDate *_startDate;
    NSString *_appId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)externalRequestCounterForType:(id)arg0 subtype:(id)arg1 source:(id)arg2 appId:(id)arg3 ;
-(void)_incrementExternalForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 xmitBytes:(NSInteger)arg3 recvBytes:(NSInteger)arg4 usedInterfaces:(NSUInteger)arg5 requestType:(id)arg6 requestSubtype:(id)arg7 source:(id)arg8 ;
-(void)requestCompletedWithAMPResult:(id)arg0 ;


@end


#endif
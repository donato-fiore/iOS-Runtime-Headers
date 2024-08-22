// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHACTIVITYSUMMARYITERATORSERVER_H
#define ACHACTIVITYSUMMARYITERATORSERVER_H

@class HDStandardTaskServer, HDActivitySummaryBuilder, NSCalendar, NSString;
@protocol ACHActivitySummaryIteratorServerInterface;



@interface ACHActivitySummaryIteratorServer : HDStandardTaskServer <ACHActivitySummaryIteratorServerInterface>

 {
    HDActivitySummaryBuilder *_builder;
    NSCalendar *_calendar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_activitySummariesForStartDateComponents:(id)arg0 endDateComponents:(id)arg1 includePrivateProperties:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif
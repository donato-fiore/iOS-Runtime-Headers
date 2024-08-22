// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIAWAREPUBLISHER_H
#define WIFIAWAREPUBLISHER_H

@class NSXPCConnection, NSNumber, NSString;
@protocol WiFiAwarePublisherXPCDelegate, OS_dispatch_queue, WiFiAwarePublisherXPC, WiFiAwarePublisherDelegate;

#import <Foundation/Foundation.h>

#import "WiFiAwarePublishConfiguration.h"

@interface WiFiAwarePublisher : NSObject <WiFiAwarePublisherXPCDelegate>

 {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_publishID;
    id<WiFiAwarePublisherXPC> *_publisherProxy;
}


@property (readonly, nonatomic) WiFiAwarePublishConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WiFiAwarePublisherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isConnected;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)generateStatisticsReportForDataSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleError;
-(void)publishDataConfirmedForHandle:(id)arg0 localInterfaceIndex:(unsigned int)arg1 serviceSpecificInfo:(id)arg2 ;
-(void)publishDataTerminatedForHandle:(id)arg0 reason:(NSInteger)arg1 ;
-(void)publishFailedToStartWithError:(NSInteger)arg0 ;
-(void)publishReceivedMessage:(id)arg0 fromSubscriberID:(unsigned char)arg1 subscriberAddress:(id)arg2 ;
-(void)publishStartedWithInstanceID:(unsigned char)arg0 ;
-(void)publishTerminatedWithReason:(NSInteger)arg0 ;
-(void)reportIssue:(id)arg0 forDataSession:(id)arg1 ;
-(void)resetState;
-(void)sendMessage:(id)arg0 toPeerAddress:(id)arg1 withInstanceID:(unsigned char)arg2 completionHandler:(id)arg3 ;
-(void)start;
-(void)startPublishSync;
-(void)stop;
-(void)terminateDataSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateDatapathServiceSpecificInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateLinkStatus:(NSInteger)arg0 forDataSession:(id)arg1 ;
-(void)updateServiceSpecificInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
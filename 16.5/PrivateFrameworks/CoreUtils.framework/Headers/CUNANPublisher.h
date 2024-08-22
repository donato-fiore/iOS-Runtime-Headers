// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUNANPUBLISHER_H
#define CUNANPUBLISHER_H

@class NSMutableDictionary, WiFiAwarePublisher, NSData, NSString, NSDictionary;
@protocol WiFiAwarePublisherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUNANPublisher : NSObject <WiFiAwarePublisherDelegate>

 {
    id *_activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_sessions;
    *LogCategory _ucat;
    WiFiAwarePublisher *_wfaPublisher;
}


@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (copy, nonatomic) NSData *customData; // ivar: _customData
@property (nonatomic) BOOL dataPathEnabled; // ivar: _dataPathEnabled
@property (copy, nonatomic) id *dataSessionEndedHandler; // ivar: _dataSessionEndedHandler
@property (copy, nonatomic) id *dataSessionStartedHandler; // ivar: _dataSessionStartedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int port; // ivar: _port
@property (copy, nonatomic) id *receiveHandler; // ivar: _receiveHandler
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *textInfo; // ivar: _textInfo
@property (nonatomic) unsigned int trafficFlags; // ivar: _trafficFlags


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_publisher:(id)arg0 dataConfirmedForHandle:(id)arg1 localInterfaceIndex:(unsigned int)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)generateStatisticsReportWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)publisher:(id)arg0 dataConfirmedForHandle:(id)arg1 localInterfaceIndex:(unsigned int)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)publisher:(id)arg0 dataIndicatedForHandle:(id)arg1 serviceSpecificInfo:(id)arg2 ;
-(void)publisher:(id)arg0 dataTerminatedForHandle:(id)arg1 reason:(NSInteger)arg2 ;
-(void)publisher:(id)arg0 failedToStartWithError:(NSInteger)arg1 ;
-(void)publisher:(id)arg0 receivedMessage:(id)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(id)arg3 ;
-(void)publisher:(id)arg0 terminatedWithReason:(NSInteger)arg1 ;
-(void)publisherStarted:(id)arg0 ;
-(void)reportIssue:(id)arg0 ;
-(void)sendMessageData:(id)arg0 endpoint:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateLinkStatus:(int)arg0 ;


@end


#endif
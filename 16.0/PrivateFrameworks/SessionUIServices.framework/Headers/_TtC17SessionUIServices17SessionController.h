// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES17SESSIONCONTROLLER_H
#define _TTC17SESSIONUISERVICES17SESSIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "_TtC17SessionUIServices22ActivityMetricsRequest.h"

@interface _TtC17SessionUIServices17SessionController : NSObject {
    ? sessionSubscriptionCenter;
    ? cancellableSet;
    ? listeningSessionStream;
    ? sessions;
    ? sessionProviders;
    ? alertClient;
    ? sessionPlatterPublisher;
    ? sessionPlatterStream;
    ? sessionAlertPublisher;
    ? sessionAlertStream;
    ? queue;
}


@property (nonatomic, readonly) BOOL isSessionEnabled;
@property (nonatomic, retain) _TtC17SessionUIServices22ActivityMetricsRequest *systemMetricsRequest; // ivar: systemMetricsRequest


+(id)shared;
-(id)init;
-(id)subscribeToSessionAlertStreamWithProviderHandler:(id)arg0 ;
-(id)subscribeToSessionHostViewControllerProviderStreamWithProviderHandler:(id)arg0 ;
-(void)endSessionWithIdentifier:(id)arg0 ;
-(void)startListeningSessionStream;


@end


#endif
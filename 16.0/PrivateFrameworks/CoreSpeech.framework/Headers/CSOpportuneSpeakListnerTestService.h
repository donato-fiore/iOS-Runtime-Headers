// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSOPPORTUNESPEAKLISTNERTESTSERVICE_H
#define CSOPPORTUNESPEAKLISTNERTESTSERVICE_H

@class NSString;
@protocol CSOpportuneSpeakListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSOpportuneSpeakListener.h"

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    CSOpportuneSpeakListener *listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)opportuneSpeakListener:(id)arg0 didStopUnexpectly:(BOOL)arg1 ;
-(void)opportuneSpeakListener:(id)arg0 hasRemoteVADAvailable:(BOOL)arg1 ;
-(void)opportuneSpeakListener:(id)arg0 hasVADAvailable:(BOOL)arg1 ;
-(void)receiveOpportuneSpeakListenerStart;
-(void)receiveOpportuneSpeakListenerStop;
-(void)start;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLCAPTURESERVICEREPLYSTREAM_H
#define GTMTLCAPTURESERVICEREPLYSTREAM_H

@protocol GTMTLCaptureServiceObserverXPCDispatcher, GTMTLCaptureServiceObserver;


#import "GTXPCDispatcher.h"

@interface GTMTLCaptureServiceReplyStream : GTXPCDispatcher <GTMTLCaptureServiceObserverXPCDispatcher>

 {
    id<GTMTLCaptureServiceObserver> *_observer;
}




-(id)initWithObserver:(id)arg0 ;
-(void)notifyCaptureObjectsChanged_:(id)arg0 replyConnection:(id)arg1 ;
-(void)notifyCaptureProgress_:(id)arg0 replyConnection:(id)arg1 ;
-(void)notifyCaptureRequest_:(id)arg0 replyConnection:(id)arg1 ;
-(void)notifyUnsupportedFenum_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif
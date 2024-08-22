// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIRPLAYRECEIVERCONTEXT_H
#define AIRPLAYRECEIVERCONTEXT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AirPlayReceiverMediaRemoteHelper.h"

@interface AirPlayReceiverContext : NSObject {
    ? _session;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _receiverUIStarted;
    unsigned int _receiverUISessionID;
    float _outputVolume;
    unsigned int _powerAssertion;
    AirPlayReceiverMediaRemoteHelper *_mediaRemoteHelper;
}




-(void)handleMRCommand:(unsigned int)arg0 translatedAPCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2 ;


@end


#endif
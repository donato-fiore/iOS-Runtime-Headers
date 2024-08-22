// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINPUTPASSDESCRIPTIONRESPONDER_H
#define AVASSETWRITERINPUTPASSDESCRIPTIONRESPONDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVAssetWriterInputPassDescription.h"

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    BOOL _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    id *_callbackBlock;
}




-(BOOL)_hasStoppedResponding;
-(id)init;
-(id)initWithCallbackQueue:(id)arg0 block:(id)arg1 ;
-(void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
-(void)dealloc;
-(void)respondToNewPassDescription:(id)arg0 ;
-(void)stopRespondingToPassDescriptions;


@end


#endif
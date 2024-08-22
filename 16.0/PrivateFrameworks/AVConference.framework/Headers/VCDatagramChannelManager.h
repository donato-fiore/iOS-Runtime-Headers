// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCDATAGRAMCHANNELMANAGER_H
#define VCDATAGRAMCHANNELMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCDatagramChannelManager : NSObject {
    _opaque_pthread_mutex_t _stateLock;
    unsigned int _nextToken;
    NSMutableDictionary *_datagramChannels;
    NSMutableDictionary *_destinations;
}


@property (copy) id *readHandler; // ivar: _readHandler


+(id)sharedInstance;
// -(BOOL)setupDatagramChannel:(id)arg0 eventHandler:(id)arg1 writeCompletionHandler:(unk)arg2 error:(id)arg3  ;
// -(id)addDatagramChannelWithDescriptor:(int)arg0 eventHandler:(id)arg1 error:(unk)arg2  ;
// -(id)addDatagramChannelWithDescriptor:(int)arg0 eventHandler:(id)arg1 writeCompletionHandler:(unk)arg2 error:(id)arg3  ;
// -(id)addDatagramChannelWithDestination:(id)arg0 eventHandler:(id)arg1 dataPath:(unk)arg2 error:(int)arg3  ;
// -(id)addDatagramChannelWithDestination:(id)arg0 eventHandler:(id)arg1 error:(unk)arg2  ;
// -(id)addDatagramChannelWithDestination:(id)arg0 eventHandler:(id)arg1 writeCompletionHandler:(unk)arg2 dataPath:(id)arg3 error:(unk)arg4  ;
-(id)datagramChannelWithChannelToken:(unsigned int)arg0 ;
-(id)init;
-(id)setupEmulatedDatagramChannelWithDestination:(id)arg0 datagramChannel:(id)arg1 ;
-(void)dealloc;
-(void)executeBlockForIDSDestination:(id)arg0 blockToExecute:(id)arg1 ;
-(void)removeDatagramChannel:(id)arg0 ;


@end


#endif
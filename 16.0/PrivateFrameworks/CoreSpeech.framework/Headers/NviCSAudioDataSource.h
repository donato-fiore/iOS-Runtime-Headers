// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVICSAUDIODATASOURCE_H
#define NVICSAUDIODATASOURCE_H

@class NSString, NSHashTable;
@protocol CSAudioStreamProvidingDelegate, NviAudioDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"
#import "NviContext.h"

@interface NviCSAudioDataSource : NSObject <CSAudioStreamProvidingDelegate, NviAudioDataSource>



@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numBytesPerSample;
@property (retain, nonatomic) NviContext *nviCtx; // ivar: _nviCtx
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSHashTable *receivers; // ivar: _receivers
@property (readonly, nonatomic) NSUInteger sampleRate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)init;
-(void)_createAudioStreamWithCurrentNviContext;
-(void)addReceiver:(id)arg0 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 avBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)removeReceiver:(id)arg0 ;
-(void)startWithNviContext:(id)arg0 didStartHandler:(id)arg1 ;
-(void)stopWithDidStopHandler:(id)arg0 ;


@end


#endif
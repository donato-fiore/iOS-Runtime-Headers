// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIASTREAMSYNCHRONIZER_H
#define VCMEDIASTREAMSYNCHRONIZER_H

@class NSString;
@protocol VCMediaStreamSyncSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate>

 {
    CGFloat _sourcePlayoutSampleSystemTime;
    int _sourceRTPTimestampWraps;
    NSObject<OS_dispatch_queue> *_mediaStreamSynchronizerQueue;
    *tagHANDLE _videoPlayerHandle;
    id *_destinationHandler;
    tagVCMediaStreamSyncTime _source;
    tagVCMediaStreamSyncTime _destination;
    unsigned int _sourcePlayoutSampleRTPTimestamp;
    int _sourceState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int sourceSampleRate;
@property (readonly) Class superclass;


-(id)initWithSourceSampleRate:(unsigned int)arg0 destinationSampleRate:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif
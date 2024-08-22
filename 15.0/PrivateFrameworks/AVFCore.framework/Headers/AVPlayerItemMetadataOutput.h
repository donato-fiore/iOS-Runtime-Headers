// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERITEMMETADATAOUTPUT_H
#define AVPLAYERITEMMETADATAOUTPUT_H

@class NSDictionary;
@protocol AVPlayerItemMetadataOutputPushDelegate, OS_dispatch_queue;


#import "AVPlayerItemOutput.h"
#import "AVPlayerItemMetadataOutputInternal.h"

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;
}


@property (nonatomic) CGFloat advanceIntervalForDelegateInvocation;
@property (readonly, weak, nonatomic) NSObject<AVPlayerItemMetadataOutputPushDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic, getter=_figMetadataOutputsDictionaryOptions) NSDictionary *figMetadataOutputsDictionaryOptions;


+(void)initialize;
-(BOOL)_attachToPlayerItem:(id)arg0 ;
-(id)init;
-(id)initWithIdentifiers:(id)arg0 ;
-(void)_collectUncollectables;
-(void)_detachFromPlayerItem;
-(void)_pushTimedMetadataGroups:(id)arg0 fromPlayerItemTrack:(id)arg1 ;
-(void)_signalFlush;
-(void)dealloc;


@end


#endif
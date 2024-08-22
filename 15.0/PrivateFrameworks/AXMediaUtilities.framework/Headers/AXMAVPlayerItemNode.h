// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMAVPLAYERITEMNODE_H
#define AXMAVPLAYERITEMNODE_H

@class NSString, AVPlayerItem;
@protocol AVPlayerItemLegibleOutputPushDelegate, OS_dispatch_queue;


#import "AXMSourceNode.h"
#import "AXMVisionAnalysisOptions.h"

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate>

 {
    NSObject<OS_dispatch_queue> *_avkit_queue;
}


@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // ivar: _analysisOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) AVPlayerItem *targetPlayerItem; // ivar: _targetPlayerItem
@property (readonly, nonatomic, getter=isTriggeringLegibilityEvents) BOOL triggeringLegibilityEvents; // ivar: _triggeringLegibilityEvents


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(id)axmDescription;
-(void)_mainQueue_endAutoTriggerOfLegibilityEvents;
-(void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg0 ;
-(void)endAutoTriggerOfLegibilityEvents;
-(void)legibleOutput:(id)arg0 didOutputAttributedStrings:(id)arg1 nativeSampleBuffers:(id)arg2 forItemTime:(struct ? )arg3 ;
-(void)nodeInitialize;
-(void)outputSequenceWasFlushed:(id)arg0 ;
-(void)setShouldProcessRemotely:(BOOL)arg0 ;


@end


#endif
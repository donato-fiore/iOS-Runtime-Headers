// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVQUEUEPLAYER_H
#define AVQUEUEPLAYER_H



#import "AVPlayer.h"
#import "AVQueuePlayerInternal.h"

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}




+(id)queuePlayerWithItems:(id)arg0 ;
+(void)initialize;
-(BOOL)canInsertItem:(id)arg0 afterItem:(id)arg1 ;
-(BOOL)canOverlapPlaybackFromPlayerItem:(id)arg0 toPlayerItem:(id)arg1 ;
-(NSInteger)_defaultActionAtItemEnd;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(id)items;
-(void)advanceToNextItem;
-(void)dealloc;
-(void)insertItem:(id)arg0 afterItem:(id)arg1 ;
-(void)removeAllItems;
-(void)removeItem:(id)arg0 ;
-(void)setActionAtItemEnd:(NSInteger)arg0 ;


@end


#endif
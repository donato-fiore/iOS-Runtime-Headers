// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYFEEDINLINEPLAYBACKRECORD_H
#define _PXSTORYFEEDINLINEPLAYBACKRECORD_H



#import "PXGridInlinePlaybackRecord.h"
#import "_PXStoryFeedInlinePlaybackController.h"

@interface _PXStoryFeedInlinePlaybackRecord : PXGridInlinePlaybackRecord {
    NSInteger _desiredPlayState;
}


@property (weak, nonatomic) _PXStoryFeedInlinePlaybackController *inlinePlaybackController; // ivar: _inlinePlaybackController


-(NSInteger)desiredPlayState;
-(void)setDesiredPlayState:(NSInteger)arg0 ;


@end


#endif
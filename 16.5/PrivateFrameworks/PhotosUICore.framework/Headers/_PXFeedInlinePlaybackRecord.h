// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXFEEDINLINEPLAYBACKRECORD_H
#define _PXFEEDINLINEPLAYBACKRECORD_H



#import "PXGridInlinePlaybackRecord.h"
#import "_PXFeedInlinePlaybackController.h"

@interface _PXFeedInlinePlaybackRecord : PXGridInlinePlaybackRecord {
    NSInteger _desiredPlayState;
}


@property (weak, nonatomic) _PXFeedInlinePlaybackController *inlinePlaybackController; // ivar: _inlinePlaybackController


-(NSInteger)desiredPlayState;
-(void)setDesiredPlayState:(NSInteger)arg0 ;


@end


#endif
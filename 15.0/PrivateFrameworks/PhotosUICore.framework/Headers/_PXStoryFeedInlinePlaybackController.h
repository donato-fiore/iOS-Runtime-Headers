// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYFEEDINLINEPLAYBACKCONTROLLER_H
#define _PXSTORYFEEDINLINEPLAYBACKCONTROLLER_H



#import "PXGridInlinePlaybackController.h"
#import "PXGLayout.h"

@interface _PXStoryFeedInlinePlaybackController : PXGridInlinePlaybackController {
    UIEdgeInsets _criticallyVisibleEdgeInsets;
}


@property (readonly, nonatomic) PXGLayout *containerLayout; // ivar: _containerLayout
@property (readonly, nonatomic) id *itemLayoutDesiredPlayStateSetter; // ivar: _itemLayoutDesiredPlayStateSetter


-(BOOL)canPlayAsset:(id)arg0 ;
-(id)_itemLayoutForPlaybackRecord:(id)arg0 ;
-(id)createPlaybackRecordForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 ;
-(id)initWithContainerLayout:(id)arg0 itemLayoutDesiredPlayStateSetter:(id)arg1 ;
-(struct CGRect )currentVisibleRect;
-(struct CGRect )frameForPlaybackRecord:(id)arg0 minPlayableSize:(struct CGSize *)arg1 ;
-(struct UIEdgeInsets )criticallyVisibleEdgeInsets;
-(void)_playbackRecord:(id)arg0 setDesiredPlayState:(NSInteger)arg1 ;


@end


#endif
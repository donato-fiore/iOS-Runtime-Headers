// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXFEEDINLINEPLAYBACKCONTROLLER_H
#define _PXFEEDINLINEPLAYBACKCONTROLLER_H



#import "PXGridInlinePlaybackController.h"
#import "PXGLayout.h"
#import "PXFeedViewModel.h"

@interface _PXFeedInlinePlaybackController : PXGridInlinePlaybackController {
    UIEdgeInsets _criticallyVisibleEdgeInsets;
}


@property (readonly, nonatomic) PXGLayout *containerLayout; // ivar: _containerLayout
@property (readonly, nonatomic) id *itemLayoutDesiredPlayStateSetter; // ivar: _itemLayoutDesiredPlayStateSetter
@property (readonly, nonatomic) PXFeedViewModel *viewModel; // ivar: _viewModel


-(BOOL)canPlayAsset:(id)arg0 ;
-(id)_itemLayoutForPlaybackRecord:(id)arg0 ;
-(id)createPlaybackRecordForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 ;
-(id)currentHoveredDisplayAsset;
-(id)initWithContainerLayout:(id)arg0 viewModel:(id)arg1 itemLayoutDesiredPlayStateSetter:(id)arg2 ;
-(struct CGRect )currentVisibleRect;
-(struct CGRect )frameForPlaybackRecord:(id)arg0 minPlayableSize:(struct CGSize *)arg1 ;
-(struct UIEdgeInsets )criticallyVisibleEdgeInsets;
-(void)_playbackRecord:(id)arg0 setDesiredPlayState:(NSInteger)arg1 ;


@end


#endif
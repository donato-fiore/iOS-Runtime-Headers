// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSINLINEPLAYBACKCONTROLLER_H
#define PXPHOTOSDETAILSINLINEPLAYBACKCONTROLLER_H

@protocol OS_dispatch_queue, PXPhotosDetailsInlinePlaybackControllerDelegate;


#import "PXGridInlinePlaybackController.h"
#import "PXTilingController.h"

@interface PXPhotosDetailsInlinePlaybackController : PXGridInlinePlaybackController {
    NSObject<OS_dispatch_queue> *_recordCreationQueue;
}


@property (weak, nonatomic) NSObject<PXPhotosDetailsInlinePlaybackControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PXTilingController *tilingController; // ivar: _tilingController


-(BOOL)_isRecognizedTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(BOOL)canPlayAsset:(id)arg0 ;
-(BOOL)shouldEnablePlayback;
-(id)createPlaybackRecordForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 ;
-(id)currentHoveredDisplayAsset;
-(id)init;
-(id)initWithTilingController:(id)arg0 ;
-(struct CGRect )currentVisibleRect;
-(struct CGRect )frameForPlaybackRecord:(id)arg0 minPlayableSize:(struct CGSize *)arg1 ;
-(struct PXTileIdentifier )_currentTileIdentifierForRecord:(id)arg0 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)checkOutTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)updatePlaybackEnabled;


@end


#endif
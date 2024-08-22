// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYVIDEOPLAYBACKCONTROLLER_H
#define PXCURATEDLIBRARYVIDEOPLAYBACKCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider;


#import "PXGridInlinePlaybackController.h"
#import "PXCuratedLibraryViewModel.h"
#import "PXCuratedLibraryLayout.h"

@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider>

 {
    PXCuratedLibraryViewModel *_viewModel;
    NSInteger _presentedZoomLevel;
    NSInteger _newZoomLevel;
}


@property (retain, nonatomic) PXCuratedLibraryLayout *curatedLibraryLayout; // ivar: _curatedLibraryLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canPlayVideosInZoomLevel:(NSInteger)arg0 ;
-(BOOL)canPlayAsset:(id)arg0 ;
-(BOOL)canProvideGeometriesForRecords;
-(BOOL)canUpdatePlayingRecords;
-(BOOL)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)arg0 ;
-(BOOL)shouldEnablePlayback;
-(id)createPlaybackRecordForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 ;
-(id)filterSortedRecordsToPlay:(id)arg0 ;
-(id)init;
-(id)initViewViewModel:(id)arg0 ;
-(id)pixelBufferSourceForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 spriteReference:(id)arg2 ;
-(struct CGRect )currentVisibleRect;
-(struct CGRect )frameForPlaybackRecord:(id)arg0 minPlayableSize:(struct CGSize *)arg1 ;
-(void)didUpdatePlayingRecords;
-(void)enumerateRectDiagnosticsForLayout:(id)arg0 usingBlock:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)recyclePixelBufferSourceForDisplayAssets:(id)arg0 ;


@end


#endif
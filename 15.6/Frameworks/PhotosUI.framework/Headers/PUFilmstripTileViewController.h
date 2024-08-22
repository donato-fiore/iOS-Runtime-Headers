// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFILMSTRIPTILEVIEWCONTROLLER_H
#define PUFILMSTRIPTILEVIEWCONTROLLER_H

@class NSString;
@protocol PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver;


#import "PUImageTileViewController.h"
#import "PUFilmstripWrapperView.h"

@interface PUFilmstripTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize expandedSize; // ivar: _expandedSize
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (readonly) Class superclass;
@property (nonatomic) CGSize unexpandedSize; // ivar: _unexpandedSize
@property (readonly, nonatomic) PUFilmstripWrapperView *wrapperView; // ivar: _wrapperView


-(BOOL)wantsVisibleRectChanges;
-(id)_currentIndicatorInfos;
-(id)loadView;
-(struct CGSize )targetSizeForProposedTargetSize:(struct CGSize )arg0 ;
-(void)_updateFilmStripContents;
-(void)_updateFilmstripView;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)didChangeAnimating;
-(void)didChangeVisibleRect;
-(void)setAssetViewModel:(id)arg0 ;
-(void)setExpanded:(BOOL)arg0 ;
-(void)videoPlayer:(id)arg0 currentTimeDidChange:(struct ? )arg1 ;
-(void)videoPlayer:(id)arg0 desiredSeekTimeDidChange:(struct ? )arg1 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif
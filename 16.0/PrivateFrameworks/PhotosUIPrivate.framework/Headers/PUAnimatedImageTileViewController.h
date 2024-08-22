// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUANIMATEDIMAGETILEVIEWCONTROLLER_H
#define PUANIMATEDIMAGETILEVIEWCONTROLLER_H

@class ISAnimatedImageView, NSString;
@protocol PUAssetViewModelChangeObserver;


#import "PUImageTileViewController.h"

@interface PUAnimatedImageTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver>

 {
    ISAnimatedImageView *_animatedImageView;
    NSInteger _interactionState;
    ? _isValid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)loadView;
-(void)_invalidateAnimatedImage;
-(void)_invalidatePlaybackState;
-(void)_updateAnimatedImageIfNeeded;
-(void)_updatePlaybackStateIfNeeded;
-(void)assetViewModelDidChange;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif
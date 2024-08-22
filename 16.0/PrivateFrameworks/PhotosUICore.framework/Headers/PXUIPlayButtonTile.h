// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUIPLAYBUTTONTILE_H
#define PXUIPLAYBUTTONTILE_H

@class UIView, UIView<PXVideoOverlayButton>, UIImageView, UIImage, NSString;
@protocol PXChangeObserver, PXMutableUIPlayButtonTile, PXUIViewBasicTile, PXDisplayAsset, PXUIPlayButtonTileDelegate;

#import <Foundation/Foundation.h>

#import "PXImageExtraction.h"
#import "PXImageRequester.h"

@interface PXUIPlayButtonTile : NSObject <PXChangeObserver, PXMutableUIPlayButtonTile, PXUIViewBasicTile>

 {
    UIView *_view;
    UIView<PXVideoOverlayButton> *_hifiPlayButtonView;
    UIView<PXVideoOverlayButton> *_playButtonView;
    UIView<PXVideoOverlayButton> *_labeledPlayButtonView;
    UIImageView *_playButtonBackgroundImageView;
    PXImageExtraction *_imageExtraction;
    id<PXDisplayAsset> *_assetForImageExtraction;
    ? _needsUpdate;
    BOOL _isPerformingChanges;
}


@property (nonatomic, getter=_isAnimatingGeometry, setter=_setAnimatingGeometry:) BOOL _animatingGeometry; // ivar: __animatingGeometry
@property (nonatomic, setter=_setAnimationCount:) NSUInteger _animationCount; // ivar: __animationCount
@property (retain, nonatomic, setter=_setBackgroundImage:) UIImage *_backgroundImage; // ivar: __backgroundImage
@property (nonatomic, setter=_setStyle:) NSInteger _style; // ivar: __style
@property (readonly, nonatomic) BOOL allowsBackdropStatisticsSuppression; // ivar: _allowsBackdropStatisticsSuppression
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXUIPlayButtonTileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (readonly, nonatomic) CGPoint imageViewportLocation; // ivar: _imageViewportLocation
@property (readonly, nonatomic) CGSize playButtonSize; // ivar: _playButtonSize
@property (readonly, nonatomic) NSInteger playButtonStyle; // ivar: _playButtonStyle
@property (readonly, copy, nonatomic) NSString *playButtonTitle; // ivar: _playButtonTitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(struct CGSize )preferredSize;
-(BOOL)_needsUpdate;
-(id)init;
-(void)_handleExtractionResult:(id)arg0 isPlaceholder:(BOOL)arg1 extraction:(id)arg2 ;
-(void)_invalidateBackgroundImage;
-(void)_invalidatePlayButton;
-(void)_resetHifiPlayButton;
-(void)_updateBackgroundImageIfNeeded;
-(void)_updateIfNeeded;
-(void)_updatePlayButtonViewIfNeeded;
-(void)becomeReusable;
-(void)didAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)didTapButton:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)willAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUBROWSINGANIMATEDIMAGEPLAYER_H
#define PUBROWSINGANIMATEDIMAGEPLAYER_H

@class NSMutableSet, PHAnimatedImage;
@protocol PUDisplayAsset;


#import "PUViewModel.h"
#import "PUMediaProvider.h"

@interface PUBrowsingAnimatedImagePlayer : PUViewModel {
    ? _isValid;
}


@property (retain, nonatomic) NSMutableSet *_animatedImageLoadingDisablingReasons; // ivar: __animatedImageLoadingDisablingReasons
@property (nonatomic, setter=_setAnimatedImageRequestID:) int _animatedImageRequestID; // ivar: __animatedImageRequestID
@property (retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *animatedImage; // ivar: _animatedImage
@property (retain, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (nonatomic, setter=_setAnimatedImageLoadingAllowed:) BOOL isAnimatedImageLoadingAllowed; // ivar: _isAnimatedImageLoadingAllowed
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider


-(BOOL)_needsUpdate;
-(id)debugDetailedDescription;
-(id)init;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(id)newViewModelChange;
-(void)_cancelLoading;
-(void)_handleAnimatedImageRequestComplete:(id)arg0 ;
-(void)_invalidateAnimatedImage;
-(void)_updateAnimatedImage;
-(void)_updateIfNeeded;
-(void)dealloc;
-(void)didPerformChanges;
-(void)setAnimatedImageLoadingDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)unloadAnimatedImage;


@end


#endif
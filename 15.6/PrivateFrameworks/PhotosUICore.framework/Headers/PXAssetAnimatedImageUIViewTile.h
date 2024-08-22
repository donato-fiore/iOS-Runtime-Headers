// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETANIMATEDIMAGEUIVIEWTILE_H
#define PXASSETANIMATEDIMAGEUIVIEWTILE_H

@class ISAnimatedImageView, PHAnimatedImage, NSString, UIView;
@protocol PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile;

#import <Foundation/Foundation.h>

#import "PXImageRequester.h"

@interface PXAssetAnimatedImageUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile>

 {
    ISAnimatedImageView *_animatedImageView;
    NSInteger _animatedImageRequestID;
    NSUInteger _requestCount;
}


@property (retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *_animatedImage; // ivar: __animatedImage
@property (nonatomic) ? bestPlaybackTimeRange; // ivar: _bestPlaybackTimeRange
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)init;
-(void)_handleAnimatedImageResult:(id)arg0 info:(id)arg1 expectedRequestCount:(NSUInteger)arg2 ;
-(void)_requestAnimatedImageIfNeeded;
-(void)_updateAnimatedImageView;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif
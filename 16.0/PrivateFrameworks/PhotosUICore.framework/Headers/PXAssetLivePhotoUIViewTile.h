// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETLIVEPHOTOUIVIEWTILE_H
#define PXASSETLIVEPHOTOUIVIEWTILE_H

@class ISLivePhotoUIView, ISLivePhotoPlayer, ISPlayerItem, NSString, UIView;
@protocol PXReusableObject, PXAssetTile, PXUIViewBasicTile;

#import <Foundation/Foundation.h>

#import "PXImageRequester.h"

@interface PXAssetLivePhotoUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile>

 {
    NSUInteger _requestCount;
    NSInteger _livePhotoRequestID;
    ISLivePhotoUIView *_livePhotoView;
    ISLivePhotoPlayer *_livePhotoPlayer;
}


@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // ivar: __playerItem
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(struct CGSize )_targetSize;
-(void)_handleLivePhotoResult:(id)arg0 info:(id)arg1 expectedRequestCount:(NSUInteger)arg2 expectedRequestID:(NSInteger)arg3 ;
-(void)_requestLivePhotoIfNeeded;
-(void)_updateLivePhotoView;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif
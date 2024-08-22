// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETLOOPUIVIEWTILE_H
#define PXASSETLOOPUIVIEWTILE_H

@class NSString, UIView;
@protocol PXChangeObserver, PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile;

#import <Foundation/Foundation.h>

#import "_PXAssetLoopUIView.h"
#import "PXVideoSessionUIView.h"
#import "PXImageRequester.h"
#import "PXVideoSession.h"

@interface PXAssetLoopUIViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile>

 {
    NSUInteger _requestCount;
    _PXAssetLoopUIView *_view;
    PXVideoSessionUIView *_videoView;
}


@property (nonatomic) ? bestPlaybackTimeRange; // ivar: _bestPlaybackTimeRange
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect desiredContentsRect; // ivar: _desiredContentsRect
@property (nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (readonly) Class superclass;
@property (retain, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession
@property (readonly, nonatomic) UIView *view;


-(id)init;
-(void)_reloadVideoSessionIfNecessary;
-(void)_updateDesiredDynamicRange;
-(void)_updateImageRequester;
-(void)_updateLayer;
-(void)_updateVideoSession;
-(void)becomeReusable;
-(void)dealloc;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif
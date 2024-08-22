// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXCURATEDLIBRARYVIDEOASSETRECORD_H
#define _PXCURATEDLIBRARYVIDEOASSETRECORD_H

@class NSString;
@protocol PXChangeObserver, PXGDisplayAssetPixelBufferSource;


#import "PXGridInlinePlaybackRecord.h"
#import "PXVideoSession.h"
#import "PXGSpriteReference.h"

@interface _PXCuratedLibraryVideoAssetRecord : PXGridInlinePlaybackRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource>

 {
    CGFloat _videoTranformScale;
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
    NSInteger _desiredPlayState;
}


@property (readonly, nonatomic) *__CVBuffer currentPixelBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXGSpriteReference *geometryReference;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *pixelBufferDidChangeHandler; // ivar: _pixelBufferDidChangeHandler
@property (readonly, nonatomic) CGAffineTransform preferredTransform;
@property (copy, nonatomic) id *providePlaceholderHandler; // ivar: _providePlaceholderHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *videoStatusDescription;


+(id)videoSessionQueue;
-(BOOL)isPlaying;
-(NSInteger)desiredPlayState;
-(id)initWithDisplayAsset:(id)arg0 mediaProvider:(id)arg1 spriteReference:(id)arg2 ;
-(void)_configureVideoSession:(id)arg0 ;
-(void)_videoQueue_ensureVideoSession;
-(void)_videoQueue_relinquishVideoSession;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForInvisible;
-(void)prepareForVisible;
-(void)setDesiredPlayState:(NSInteger)arg0 ;


@end


#endif
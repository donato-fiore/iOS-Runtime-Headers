// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERMOVIEPROPNODE_H
#define AVTSTICKERMOVIEPROPNODE_H

@class SCNNode, AVAssetReader, AVAssetReaderTrackOutput, AVAsset, NSURL, AVPlayer, AVPlayerItem;



@interface AVTStickerMoviePropNode : SCNNode {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_assetReaderOutput;
    *opaqueCMSampleBuffer _currentSampleBuffer;
}


@property (nonatomic) BOOL applyToEmission; // ivar: _applyToEmission
@property (nonatomic) BOOL enableLoop; // ivar: _enableLoop
@property (nonatomic) BOOL isObservingPlayerItemStatus; // ivar: _isObservingPlayerItemStatus
@property (copy, nonatomic) id *loadCompletionHandler; // ivar: _loadCompletionHandler
@property (retain, nonatomic) AVAsset *movieAsset; // ivar: _movieAsset
@property (retain, nonatomic) NSURL *movieURL; // ivar: _movieURL
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem


-(id)clone;
-(id)initWithMovieURL:(id)arg0 geometry:(id)arg1 applyToEmission:(BOOL)arg2 ;
-(struct opaqueCMSampleBuffer *)copySampleBufferAtTime:(struct ? )arg0 ;
-(void)dealloc;
-(void)itemDidFinishPlaying:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preparePlayerWithCompletionHandler:(id)arg0 ;
-(void)setup;
-(void)startObservingPlayerItemStatus;
-(void)stickerGenerationDidEnd;
-(void)stickerGenerationWillBegin;
-(void)stopObservingPlayerItemStatusIfNeeded;


@end


#endif
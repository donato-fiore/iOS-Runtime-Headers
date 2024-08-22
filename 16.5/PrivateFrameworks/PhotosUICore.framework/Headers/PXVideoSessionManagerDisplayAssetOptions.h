// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVIDEOSESSIONMANAGERDISPLAYASSETOPTIONS_H
#define PXVIDEOSESSIONMANAGERDISPLAYASSETOPTIONS_H

@class ISWrappedAVAudioSession, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXVideoSessionManagerDisplayAssetOptions : NSObject

@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) BOOL isAudioAllowed; // ivar: _isAudioAllowed
@property (nonatomic) ? livePhotoLoopTimeRange; // ivar: _livePhotoLoopTimeRange
@property (nonatomic) BOOL shouldCreateUniqueVideoSession; // ivar: _shouldCreateUniqueVideoSession
@property (nonatomic) BOOL shouldCrossfadeLivePhotosWhenLooping; // ivar: _shouldCrossfadeLivePhotosWhenLooping
@property (nonatomic) BOOL shouldStabilizeLivePhotosIfPossible; // ivar: _shouldStabilizeLivePhotosIfPossible
@property (readonly, nonatomic) NSArray *strategies;
@property (readonly, nonatomic) NSMutableArray *strategiesStore; // ivar: _strategiesStore


-(id)init;
-(void)addContentDeliveryStrategyWithDeliveryQuality:(NSInteger)arg0 segmentTimeRange:(struct ? )arg1 streamingAllowed:(BOOL)arg2 ;
-(void)addContentDeliveryStrategyWithDeliveryQuality:(NSInteger)arg0 segmentTimeRange:(struct ? )arg1 streamingAllowed:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 ;


@end


#endif
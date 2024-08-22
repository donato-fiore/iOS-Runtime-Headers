// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ISPLAYERITEMCHEFOPERATION_H
#define _ISPLAYERITEMCHEFOPERATION_H

@class NSOperation, AVAsset;
@protocol OS_dispatch_queue;



@interface _ISPlayerItemChefOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, nonatomic) BOOL includeAudio; // ivar: _includeAudio
@property (readonly, nonatomic) BOOL includeVideo; // ivar: _includeVideo
@property (readonly, nonatomic) ? photoTime; // ivar: _photoTime
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) ? trimmedTimeRange; // ivar: _trimmedTimeRange


-(id)initWithAsset:(id)arg0 trimmedTimeRange:(struct ? )arg1 photoTime:(struct ? )arg2 includeAudio:(BOOL)arg3 includeVideo:(BOOL)arg4 resultHandler:(id)arg5 ;
-(void)_handleValuesDidLoad;
-(void)_preparePlayerItem;
-(void)main;


@end


#endif
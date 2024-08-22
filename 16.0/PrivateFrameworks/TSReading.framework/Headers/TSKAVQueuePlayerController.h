// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKAVQUEUEPLAYERCONTROLLER_H
#define TSKAVQUEUEPLAYERCONTROLLER_H

@class NSArray;


#import "TSKAVPlayerController.h"

@interface TSKAVQueuePlayerController : TSKAVPlayerController {
    NSArray *mAssets;
}




-(id)initWithQueuePlayer:(id)arg0 delegate:(id)arg1 assets:(id)arg2 ;
-(id)initWithQueuePlayer:(id)arg0 delegate:(id)arg1 assets:(id)arg2 initialAssetIndex:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)p_enqueueAssetsFromIndex:(NSUInteger)arg0 ;
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg0 ;
-(void)skipToAssetAtIndex:(NSUInteger)arg0 ;


@end


#endif
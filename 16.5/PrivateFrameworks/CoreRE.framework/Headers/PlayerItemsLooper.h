// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAYERITEMSLOOPER_H
#define PLAYERITEMSLOOPER_H

@class NSArray, AVQueuePlayer;

#import <Foundation/Foundation.h>


@interface PlayerItemsLooper : NSObject

@property (copy, nonatomic) NSArray *loopedAssets; // ivar: _loopedAssets
@property (retain, nonatomic) AVQueuePlayer *player; // ivar: _player


-(id)initWithPlayer:(id)arg0 assets:(id)arg1 ;
-(void)dealloc;
-(void)enqueueAssetItems;
-(void)observeLastAndEnqueueAssetItems;
-(void)playerItemAtEnd:(id)arg0 ;


@end


#endif
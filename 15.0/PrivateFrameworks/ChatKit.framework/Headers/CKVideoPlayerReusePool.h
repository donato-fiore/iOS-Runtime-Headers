// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVIDEOPLAYERREUSEPOOL_H
#define CKVIDEOPLAYERREUSEPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKVideoPlayerReusePool : NSObject

@property (retain, nonatomic) NSMutableArray *pool; // ivar: _pool


+(id)sharedPool;
-(NSInteger)indexOfAvailablePlayer;
-(NSInteger)indexOfPlayerWithGUID:(id)arg0 ;
-(id)_dequeuePlayerAtIndex:(NSInteger)arg0 ;
-(id)dequeueAvailableVideoPlayer;
-(id)existingVideoPlayerForTransferGUID:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)lowMemoryWarningReceived:(id)arg0 ;
-(void)removeUneededVideoPlayers;
-(void)returnPlayerToPool:(id)arg0 ;


@end


#endif
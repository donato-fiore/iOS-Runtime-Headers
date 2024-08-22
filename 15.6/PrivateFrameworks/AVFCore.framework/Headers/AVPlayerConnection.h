// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERCONNECTION_H
#define AVPLAYERCONNECTION_H

@class NSError;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    NSInteger _status;
    NSError *_error;
}


@property (readonly, nonatomic) NSInteger status;


-(BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg0 ;
-(id)description;
-(id)error;
-(id)initWithWeakReferenceToPlayer:(id)arg0 weakReferenceToPlayerItem:(id)arg1 ;
-(id)player;
-(id)playerItem;
-(void)dealloc;
-(void)removeItemFromPlayQueue;


@end


#endif
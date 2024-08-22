// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVIDEOPLAYERREUSEPOOL_H
#define CKVIDEOPLAYERREUSEPOOL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKVideoPlayerReusePool : NSObject {
    ? pool;
}


@property (nonatomic, copy) NSArray *pool;


+(id)sharedPool;
-(id)dequeueAvailableVideoPlayer;
-(id)existingVideoPlayerForTransferGUID:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)returnPlayerToPool:(id)arg0 ;


@end


#endif
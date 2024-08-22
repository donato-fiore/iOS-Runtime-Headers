// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMUSICPLAYERCONTROLLERMUTABLEQUEUE_H
#define MUSICKIT_SOFTLINKING_MPMUSICPLAYERCONTROLLERMUTABLEQUEUE_H

@class MPMusicPlayerControllerMutableQueue;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPMusicPlayerControllerMutableQueue : NSObject {
    MPMusicPlayerControllerMutableQueue *_underlyingMutableQueue;
}


@property (readonly, nonatomic) MPMusicPlayerControllerMutableQueue *_underlyingMutableQueue;


-(id)_initWithUnderlyingMutableQueue:(id)arg0 ;
-(void)insertQueueDescriptor:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)removeItemWithIdentifier:(id)arg0 ;


@end


#endif
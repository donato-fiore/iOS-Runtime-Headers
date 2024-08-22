// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSETPLAYBACKQUEUECOMMAND_H
#define MPSETPLAYBACKQUEUECOMMAND_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;


#import "MPRemoteCommand.h"

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {
    NSMutableDictionary *_registeredSpecializedQueues;
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    BOOL _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (nonatomic) NSInteger upNextItemCount; // ivar: _upNextItemCount


-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned int)arg0 ;
-(void)registerSpecializedQueueIdentifier:(id)arg0 localizedName:(id)arg1 queueType:(NSInteger)arg2 queueParameters:(id)arg3 ;
-(void)registerSupportedCustomQueueIdentifier:(id)arg0 ;
-(void)registerSupportedQueueType:(NSInteger)arg0 ;
-(void)setSupportedSharedQueue:(BOOL)arg0 ;
-(void)unregisterSpecializedQueueIdentifier:(id)arg0 ;
-(void)unregisterSupportedCustomQueueIdentifier:(id)arg0 ;
-(void)unregisterSupportedQueueType:(NSInteger)arg0 ;


@end


#endif
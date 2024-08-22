// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPINSERTINTOPLAYBACKQUEUECOMMAND_H
#define MPINSERTINTOPLAYBACKQUEUECOMMAND_H

@class NSMutableSet, NSArray;
@protocol OS_dispatch_queue;


#import "MPRemoteCommand.h"

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand {
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    BOOL _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (copy, nonatomic) NSArray *supportedInsertionPositions; // ivar: _supportedInsertionPositions


-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned int)arg0 ;
-(void)registerSupportedCustomQueueIdentifier:(id)arg0 ;
-(void)registerSupportedQueueType:(NSInteger)arg0 ;
-(void)setSupportedSharedQueue:(BOOL)arg0 ;
-(void)unregisterSupportedCustomQueueIdentifier:(id)arg0 ;
-(void)unregisterSupportedQueueType:(NSInteger)arg0 ;


@end


#endif
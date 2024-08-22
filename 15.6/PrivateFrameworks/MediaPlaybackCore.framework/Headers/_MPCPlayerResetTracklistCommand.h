// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCPLAYERRESETTRACKLISTCOMMAND_H
#define _MPCPLAYERRESETTRACKLISTCOMMAND_H

@class MPCPlayerCommand, NSString, NSArray, NSSet, NSDictionary;
@protocol MPCPlayerResetTracklistCommand;



@interface _MPCPlayerResetTracklistCommand : MPCPlayerCommand <MPCPlayerResetTracklistCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *specializedIntents;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // ivar: _supportedCustomDataQueueIdentifiers
@property (retain, nonatomic) NSSet *supportedQueueTypes; // ivar: _supportedQueueTypes
@property (retain, nonatomic) NSDictionary *supportedSpecializedQueues; // ivar: _supportedSpecializedQueues
@property (nonatomic) BOOL supportsSetQueueCommand; // ivar: _supportsSetQueueCommand


-(id)clear;
-(id)clearUpNextItems;
-(id)replaceWithPlaybackIntent:(id)arg0 ;
-(id)replaceWithPlaybackIntent:(id)arg0 replaceIntent:(NSInteger)arg1 ;


@end


#endif
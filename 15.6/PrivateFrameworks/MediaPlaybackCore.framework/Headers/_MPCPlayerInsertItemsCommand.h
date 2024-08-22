// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCPLAYERINSERTITEMSCOMMAND_H
#define _MPCPLAYERINSERTITEMSCOMMAND_H

@class MPCPlayerCommand, NSString, NSArray, NSSet;
@protocol MPCPlayerInsertItemsCommand;



@interface _MPCPlayerInsertItemsCommand : MPCPlayerCommand <MPCPlayerInsertItemsCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // ivar: _supportedCustomDataQueueIdentifiers
@property (retain, nonatomic) NSSet *supportedInsertionPositions; // ivar: _supportedInsertionPositions
@property (retain, nonatomic) NSSet *supportedQueueTypes; // ivar: _supportedQueueTypes
@property (nonatomic) BOOL supportsCreateStation; // ivar: _supportsCreateStation


-(BOOL)_isSupportedPlaybackIntent:(id)arg0 forRemotePlayer:(BOOL)arg1 atInsertionPosition:(int)arg2 ;
-(id)_createRadioStationCommandRequest;
-(id)_insertWithOptions:(id)arg0 ;
-(id)insertAfterPlayingItemWithPlaybackIntent:(id)arg0 ;
-(id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg0 ;
-(id)insertPlaybackIntent:(id)arg0 afterItem:(id)arg1 ;


@end


#endif
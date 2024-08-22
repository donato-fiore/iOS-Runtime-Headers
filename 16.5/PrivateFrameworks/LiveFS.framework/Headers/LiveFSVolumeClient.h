// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSVOLUMECLIENT_H
#define LIVEFSVOLUMECLIENT_H

@class NSMutableDictionary, NSMapTable;
@protocol LiveFSCoreClient;

#import <Foundation/Foundation.h>


@interface LiveFSVolumeClient : NSObject <LiveFSCoreClient>



@property (retain) NSMutableDictionary *searchCompletionBlocks; // ivar: _searchCompletionBlocks
@property (retain) NSMutableDictionary *searchResultsBlocks; // ivar: _searchResultsBlocks
@property (retain) NSMapTable *updateHandlers; // ivar: _updateHandlers


+(id)exportedClientInterface;
-(id)init;
// -(int)LISCAddSearchHandlers:(id)arg0 resultHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(int)LISCAddUpdateHandler:(id)arg0 forInterestedItem:(id)arg1 ;
-(void)LISCDropSearchHandlers:(id)arg0 ;
-(void)LISCDropUpdateHandlerForInterestedItem:(id)arg0 ;
-(void)connectionWasInterupted;
-(void)connectionWasInvalidated;
-(void)deletedItem:(id)arg0 name:(id)arg1 how:(int)arg2 interestedItem:(id)arg3 ;
-(void)deletedName:(id)arg0 item:(id)arg1 how:(int)arg2 interestedItem:(id)arg3 ;
-(void)historyResetItem:(id)arg0 interestedItem:(id)arg1 ;
-(void)historyResetName:(id)arg0 interestedItem:(id)arg1 ;
-(void)renamedItem:(id)arg0 named:(id)arg1 fromDirectory:(id)arg2 intoDirectory:(id)arg3 newName:(id)arg4 atopItem:(id)arg5 ;
-(void)searchResults:(id)arg0 paths:(id)arg1 attributes:(id)arg2 attributeSize:(unsigned int)arg3 xAttrs:(id)arg4 resumePath:(id)arg5 ;
-(void)tokenDone:(id)arg0 result:(int)arg1 ;
-(void)updatedItem:(id)arg0 name:(id)arg1 interestedItem:(id)arg2 ;
-(void)updatedName:(id)arg0 interestedItem:(id)arg1 ;
-(void)updatesDoneFor:(id)arg0 ;
-(void)volumeWideDeletedName:(id)arg0 interestedItem:(id)arg1 ;
-(void)volumeWideUpdatedName:(id)arg0 interestedItem:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSSERVICECLIENT_H
#define LIVEFSSERVICECLIENT_H

@class NSMutableDictionary, NSMapTable;
@protocol NSFileProviderLiveItemClientCore;

#import <Foundation/Foundation.h>


@interface LiveFSServiceClient : NSObject <NSFileProviderLiveItemClientCore>



@property (retain) NSMutableDictionary *searchCompletionBlocks; // ivar: _searchCompletionBlocks
@property (retain) NSMutableDictionary *searchResultsBlocks; // ivar: _searchResultsBlocks
@property (retain) NSMapTable *updateHandlers; // ivar: _updateHandlers


+(id)exportedClientInterface;
-(id)init;
// -(int)LISCAddSearchHandlers:(id)arg0 resultHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(int)LISCAddUpdateHandler:(id)arg0 forInterestedItem:(id)arg1 ;
-(void)LISCDropSearchHandlers:(id)arg0 ;
-(void)LISCDropUpdateHandlerForInterestedItem:(id)arg0 ;
-(void)LISearchResult:(id)arg0 paths:(id)arg1 attributes:(id)arg2 attributeSize:(unsigned int)arg3 xAttrs:(id)arg4 resumePath:(id)arg5 ;
-(void)LISearchTokenDone:(id)arg0 result:(int)arg1 ;
-(void)LIUpdateDeletedItem:(id)arg0 name:(id)arg1 how:(int)arg2 interestedItem:(id)arg3 ;
-(void)LIUpdateDeletedName:(id)arg0 item:(id)arg1 how:(int)arg2 interestedItem:(id)arg3 ;
-(void)LIUpdateDone:(id)arg0 ;
-(void)LIUpdateHistoryResetItem:(id)arg0 interestedItem:(id)arg1 ;
-(void)LIUpdateHistoryResetName:(id)arg0 interestedItem:(id)arg1 ;
-(void)LIUpdateRenameFrom:(id)arg0 fromName:(id)arg1 fromID:(id)arg2 intoItem:(id)arg3 toName:(id)arg4 overID:(id)arg5 ;
-(void)LIUpdateUpdatedItem:(id)arg0 name:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateUpdatedName:(id)arg0 interestedItem:(id)arg1 ;
-(void)LIUpdateVolumeWideDeletedName:(id)arg0 interestedItem:(id)arg1 ;
-(void)LIUpdateVolumeWideUpdatedName:(id)arg0 interestedItem:(id)arg1 ;
-(void)connectionWasInterupted;
-(void)connectionWasInvalidated;


@end


#endif
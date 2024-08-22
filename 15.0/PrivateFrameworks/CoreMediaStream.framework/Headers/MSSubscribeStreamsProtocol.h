// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSUBSCRIBESTREAMSPROTOCOL_H
#define MSSUBSCRIBESTREAMSPROTOCOL_H



#import "MSStreamsProtocol.h"

@interface MSSubscribeStreamsProtocol : MSStreamsProtocol {
    __MSSSPCContext _context;
    int _chunkIndex;
    *__MSSSPCChunkParsingContext _parseContext;
}




-(id)_assetCollectionsFromCoreArray:(id)arg0 personID:(id)arg1 outError:(*id)arg2 ;
-(id)_assetFromCoreDictionary:(id)arg0 personID:(id)arg1 outError:(*id)arg2 ;
-(id)_invalidFieldErrorWithFieldName:(id)arg0 ;
-(id)_invalidFieldErrorWithFieldName:(id)arg0 suggestion:(id)arg1 ;
-(id)_pathToChunkIndex:(int)arg0 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_chunkDidBeginStreamForPersonID:(id)arg0 wasReset:(BOOL)arg1 metadata:(id)arg2 ;
-(void)_chunkDidEndStreamForPersonID:(id)arg0 ctag:(id)arg1 ;
-(void)_chunkDidFindSubscriptionGoneForPersonID:(id)arg0 ;
-(void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(id)arg0 ;
-(void)_chunkDidParseAssetCollections:(id)arg0 forPersonID:(id)arg1 ;
-(void)_coreProtocolDidFailAuthentication:(id)arg0 ;
-(void)_coreProtocolDidFinishError:(id)arg0 ;
-(void)_coreProtocolDidGetDataChunk:(id)arg0 ;
-(void)_parseChunks;
-(void)_parseNextChunk;
-(void)abort;
-(void)dealloc;
-(void)pollForSubscriptionUpdatesWithAccountAnchors:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif
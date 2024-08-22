// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPUBLISHSTREAMSPROTOCOL_H
#define MSPUBLISHSTREAMSPROTOCOL_H

@class NSArray;


#import "MSStreamsProtocol.h"

@interface MSPublishStreamsProtocol : MSStreamsProtocol {
    __MSPSPCContext _context;
    NSArray *_assetCollectionsInFlight;
    __MSPSPCUCContext _UCContext;
}




-(BOOL)_insertInfoAboutAsset:(id)arg0 intoDictionary:(id)arg1 outError:(*id)arg2 ;
-(id)_metadataDictForAsset:(id)arg0 outError:(*id)arg1 ;
-(id)_metadataDictForAssetCollection:(id)arg0 outError:(*id)arg1 ;
-(id)_missingAssetFieldErrorWithFieldName:(id)arg0 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg0 ;
-(void)_coreProtocolDidFinishResponse:(id)arg0 error:(id)arg1 ;
-(void)_coreProtocolDidFinishUCResults:(id)arg0 error:(id)arg1 ;
-(void)_resetConnectionVariables;
-(void)abort;
-(void)dealloc;
-(void)sendMetadataForAssetCollections:(id)arg0 ;
-(void)sendUploadCompleteForAssetCollections:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDELETESTREAMSPROTOCOL_H
#define MSDELETESTREAMSPROTOCOL_H

@class NSMutableArray;
@protocol MSDeleteStreamsProtocolDelegate;


#import "MSStreamsProtocol.h"

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {
    _MSDSPCContext _context;
    NSMutableArray *_collectionsInFlight;
}


@property (nonatomic) NSObject<MSDeleteStreamsProtocolDelegate> *delegate;


-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg0 ;
-(void)_coreProtocolDidFinishResponse:(id)arg0 error:(id)arg1 ;
-(void)_resetConnectionVariables;
-(void)abort;
-(void)sendDeletionRequestForAssetCollections:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATORIMPORTRESPONSE_H
#define MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATORIMPORTRESPONSE_H

@class MPServerObjectDatabaseImportResult;

#import <Foundation/Foundation.h>


@interface MPCModelStorePlaybackItemsRequestAccumulatorImportResponse : NSObject

@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulatorResult accumulatorImportResult; // ivar: _accumulatorImportResult
@property (readonly, copy, nonatomic) MPServerObjectDatabaseImportResult *serverObjectDatabaseImportResult; // ivar: _serverObjectDatabaseImportResult


-(id)initWitDatabaseImportResult:(id)arg0 accumulatorImportResult:(struct MPCModelStorePlaybackItemsRequestAccumulatorResult )arg1 ;


@end


#endif
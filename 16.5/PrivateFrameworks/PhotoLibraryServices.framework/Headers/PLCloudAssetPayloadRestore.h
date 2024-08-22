// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDASSETPAYLOADRESTORE_H
#define PLCLOUDASSETPAYLOADRESTORE_H

@class NSMutableArray, NSMutableDictionary;
@protocol PLCloudAssetPayloadRestoreDelegate;

#import <Foundation/Foundation.h>


@interface PLCloudAssetPayloadRestore : NSObject {
    id<PLCloudAssetPayloadRestoreDelegate> *_delegate;
    NSMutableArray *_batchToRestore;
    NSMutableDictionary *_payloadsForUnresolvedCloudIdentifiers;
}


@property (readonly, nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (readonly, nonatomic) NSUInteger totalRestored; // ivar: _totalRestored
@property (readonly, nonatomic) NSUInteger totalSkipped; // ivar: _totalSkipped


+(id)assetForPayload:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)_resolveCloudIdentifiersToLocalIdentifiers;
-(id)initWithDelegate:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)_insertBatchOfUnresolvedCloudIdentifiers;
-(void)_insertBatchToRestore;
-(void)_insertPayload:(id)arg0 forAsset:(id)arg1 skipMessage:(id)arg2 ;
-(void)addPayload:(id)arg0 ;
-(void)insertRemainingPayloads;


@end


#endif
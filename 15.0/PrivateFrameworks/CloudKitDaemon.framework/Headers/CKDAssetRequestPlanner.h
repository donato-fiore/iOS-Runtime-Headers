// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDASSETREQUESTPLANNER_H
#define CKDASSETREQUESTPLANNER_H

@class NSMutableDictionary, NSArray, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface CKDAssetRequestPlanner : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID; // ivar: _assetBatchesByZoneID
@property (retain, nonatomic) NSArray *assetGetChunkKeysBatches; // ivar: _assetGetChunkKeysBatches
@property (retain, nonatomic) NSArray *assetRegisterAndPutBatches; // ivar: _assetRegisterAndPutBatches
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit; // ivar: _assetTokenRequestSizeLimit
@property (retain, nonatomic) NSArray *assetTokenRequests; // ivar: _assetTokenRequests
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey; // ivar: _assetZoneByKey
@property (retain, nonatomic) NSMutableOrderedSet *items; // ivar: _items
@property (nonatomic) NSUInteger mmcsEncryptionSupport; // ivar: _mmcsEncryptionSupport
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID; // ivar: _rerefAssetBatchesByZoneID


-(BOOL)hasSuccessfulAssetTokenRequests;
-(BOOL)hasSuccessfulBatches;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithMMCSEncryptionSupport:(NSUInteger)arg0 ;
-(void)addMMCSItem:(id)arg0 ;
-(void)addMMCSSectionItem:(id)arg0 ;
-(void)addRereferencedMMCSItem:(id)arg0 ;
-(void)failBatch:(id)arg0 ;
-(void)planAssetRequests;
-(void)planGetChunkKeysBatches;
-(void)planRegisterBatches;


@end


#endif
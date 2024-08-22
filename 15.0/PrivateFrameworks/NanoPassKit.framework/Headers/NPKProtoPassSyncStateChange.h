// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOPASSSYNCSTATECHANGE_H
#define NPKPROTOPASSSYNCSTATECHANGE_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "NPKProtoCatalog.h"
#import "NPKProtoPassSyncStateItem.h"

@interface NPKProtoPassSyncStateChange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *baseManifestHashForPartialUpdate; // ivar: _baseManifestHashForPartialUpdate
@property (nonatomic) int changeType; // ivar: _changeType
@property (retain, nonatomic) NSData *changeUUID; // ivar: _changeUUID
@property (retain, nonatomic) NPKProtoCatalog *companionCatalog; // ivar: _companionCatalog
@property (readonly, nonatomic) BOOL hasBaseManifestHashForPartialUpdate;
@property (readonly, nonatomic) BOOL hasCompanionCatalog;
@property (readonly, nonatomic) BOOL hasLastKnownReconciledPassSyncStateHash;
@property (readonly, nonatomic) BOOL hasPassData;
@property (nonatomic) BOOL hasPassSegmentIndex;
@property (nonatomic) BOOL hasPassSegmentTotal;
@property (readonly, nonatomic) BOOL hasSyncStateItem;
@property (readonly, nonatomic) BOOL hasWatchCatalog;
@property (retain, nonatomic) NSData *lastKnownReconciledPassSyncStateHash; // ivar: _lastKnownReconciledPassSyncStateHash
@property (retain, nonatomic) NSData *passData; // ivar: _passData
@property (nonatomic) unsigned int passSegmentIndex; // ivar: _passSegmentIndex
@property (nonatomic) unsigned int passSegmentTotal; // ivar: _passSegmentTotal
@property (retain, nonatomic) NSMutableArray *remoteAssetsForPartialUpdates; // ivar: _remoteAssetsForPartialUpdates
@property (retain, nonatomic) NPKProtoPassSyncStateItem *syncStateItem; // ivar: _syncStateItem
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (retain, nonatomic) NPKProtoCatalog *watchCatalog; // ivar: _watchCatalog


+(Class)remoteAssetsForPartialUpdateType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)npkDescription;
-(id)remoteAssetsForPartialUpdateAtIndex:(NSUInteger)arg0 ;
-(int)StringAsChangeType:(id)arg0 ;
-(void)addRemoteAssetsForPartialUpdate:(id)arg0 ;
-(void)clearRemoteAssetsForPartialUpdates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
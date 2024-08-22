// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBKEYVALUEPAIR_H
#define NTPBKEYVALUEPAIR_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "NTPBAppConfigurationResource.h"
#import "NTPBAsset.h"
#import "NTPBAudioPlaylistItem.h"
#import "NTPBAVAsset.h"
#import "NTPBAVAssetKey.h"
#import "NTPBCacheCoordinatorHints.h"
#import "NTPBDate.h"
#import "NTPBIssueReadingHistoryItem.h"
#import "NTPBNetworkSessionList.h"
#import "NTPBPersonalizationLocalData.h"
#import "NTPBPrivateDataControllerSyncState.h"
#import "NTPBReadingHistoryItem.h"

@interface NTPBKeyValuePair : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NTPBAppConfigurationResource *appConfigurationResource; // ivar: _appConfigurationResource
@property (retain, nonatomic) NTPBAsset *asset; // ivar: _asset
@property (retain, nonatomic) NTPBAudioPlaylistItem *audioPlaylistItem; // ivar: _audioPlaylistItem
@property (retain, nonatomic) NTPBAVAsset *avAsset; // ivar: _avAsset
@property (retain, nonatomic) NTPBAVAssetKey *avAssetKey; // ivar: _avAssetKey
@property (retain, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue; // ivar: _cacheCoordinatorHintsValue
@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (retain, nonatomic) NTPBDate *dateValue; // ivar: _dateValue
@property (readonly, nonatomic) BOOL hasAppConfigurationResource;
@property (readonly, nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) BOOL hasAudioPlaylistItem;
@property (readonly, nonatomic) BOOL hasAvAsset;
@property (readonly, nonatomic) BOOL hasAvAssetKey;
@property (readonly, nonatomic) BOOL hasCacheCoordinatorHintsValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (readonly, nonatomic) BOOL hasIssueReadingHistoryItem;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasNetworkSessionList;
@property (readonly, nonatomic) BOOL hasPersonalizationLocalData;
@property (readonly, nonatomic) BOOL hasPrivateDataControllerSyncState;
@property (readonly, nonatomic) BOOL hasReadingHistoryItem;
@property (readonly, nonatomic) BOOL hasRecordData;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasValueType;
@property (retain, nonatomic) NTPBIssueReadingHistoryItem *issueReadingHistoryItem; // ivar: _issueReadingHistoryItem
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NTPBNetworkSessionList *networkSessionList; // ivar: _networkSessionList
@property (retain, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData; // ivar: _personalizationLocalData
@property (retain, nonatomic) NTPBPrivateDataControllerSyncState *privateDataControllerSyncState; // ivar: _privateDataControllerSyncState
@property (retain, nonatomic) NTPBReadingHistoryItem *readingHistoryItem; // ivar: _readingHistoryItem
@property (retain, nonatomic) NSData *recordData; // ivar: _recordData
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) int valueType; // ivar: _valueType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
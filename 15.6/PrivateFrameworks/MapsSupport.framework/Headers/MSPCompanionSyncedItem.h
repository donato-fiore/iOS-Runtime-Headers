// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPCOMPANIONSYNCEDITEM_H
#define MSPCOMPANIONSYNCEDITEM_H

@class PBCodable, PBUnknownFields, NSString;
@protocol SYObject, SYChange, NSCopying;


#import "MSPBookmarkStorage.h"
#import "MSPPinStorage.h"
#import "MSPHistoryEntryStorage.h"

@interface MSPCompanionSyncedItem : PBCodable <SYObject, SYChange, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (retain, nonatomic) MSPBookmarkStorage *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) NSInteger changeType;
@property (nonatomic) int changeType; // ivar: _changeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBookmark;
@property (nonatomic) BOOL hasChangeType;
@property (readonly, nonatomic) BOOL hasPin;
@property (readonly, nonatomic) BOOL hasSearchRequest;
@property (readonly, nonatomic) BOOL hasSyncId;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (retain, nonatomic) MSPPinStorage *pin; // ivar: _pin
@property (retain, nonatomic) MSPHistoryEntryStorage *searchRequest; // ivar: _searchRequest
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syChangeType;
@property (retain, nonatomic) NSString *syncId; // ivar: _syncId
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(id)syncIdWithPrefix:(id)arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(int)StringAsChangeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
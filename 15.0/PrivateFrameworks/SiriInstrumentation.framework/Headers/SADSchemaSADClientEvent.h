// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADSCHEMASADCLIENTEVENT_H
#define SADSCHEMASADCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "SADSchemaSADAvailableAssetDailyStatus.h"
#import "SADSchemaSADImmediateDownloadTriggered.h"
#import "SADSchemaSADUODAssetsPrepared.h"

@interface SADSchemaSADClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus; // ivar: _availableAssetDailyStatus
@property (nonatomic) BOOL hasAvailableAssetDailyStatus; // ivar: _hasAvailableAssetDailyStatus
@property (nonatomic) BOOL hasImmediateDownloadTriggered; // ivar: _hasImmediateDownloadTriggered
@property (nonatomic) BOOL hasUodAssetsPrepared; // ivar: _hasUodAssetsPrepared
@property (retain, nonatomic) SADSchemaSADImmediateDownloadTriggered *immediateDownloadTriggered; // ivar: _immediateDownloadTriggered
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SADSchemaSADUODAssetsPrepared *uodAssetsPrepared; // ivar: _uodAssetsPrepared
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif
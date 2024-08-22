// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCCODABLESHAREDSUMMARYTRANSACTIONRECORD_H
#define HDCLOUDSYNCCODABLESHAREDSUMMARYTRANSACTIONRECORD_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface HDCloudSyncCodableSharedSummaryTransactionRecord : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasSourceDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *sourceDeviceIdentifier; // ivar: _sourceDeviceIdentifier
@property (retain, nonatomic) NSMutableArray *summaryIdentifiers; // ivar: _summaryIdentifiers
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)summaryIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addSummaryIdentifiers:(id)arg0 ;
-(void)clearSummaryIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
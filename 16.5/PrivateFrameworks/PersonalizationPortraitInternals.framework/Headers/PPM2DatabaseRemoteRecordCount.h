// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPM2DATABASEREMOTERECORDCOUNT_H
#define PPM2DATABASEREMOTERECORDCOUNT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2DatabaseRemoteRecordCount : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasSchemaVersion;
@property (readonly, nonatomic) BOOL hasTableName;
@property (nonatomic) unsigned int schemaVersion; // ivar: _schemaVersion
@property (retain, nonatomic) NSString *tableName; // ivar: _tableName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
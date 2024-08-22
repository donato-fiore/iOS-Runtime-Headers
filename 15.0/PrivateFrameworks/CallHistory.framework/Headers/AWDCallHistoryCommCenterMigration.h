// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDCALLHISTORYCOMMCENTERMIGRATION_H
#define AWDCALLHISTORYCOMMCENTERMIGRATION_H

@class PBCodable;
@protocol NSCopying;



@interface AWDCallHistoryCommCenterMigration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRecordCount;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int recordCount; // ivar: _recordCount
@property (nonatomic) BOOL success; // ivar: _success
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int version; // ivar: _version


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
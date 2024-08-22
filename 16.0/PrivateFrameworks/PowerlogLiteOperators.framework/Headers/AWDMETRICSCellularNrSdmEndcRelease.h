// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMETRICSCELLULARNRSDMENDCRELEASE_H
#define AWDMETRICSCELLULARNRSDMENDCRELEASE_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularNrSdmEndcRelease : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int fr; // ivar: _fr
@property (nonatomic) BOOL hasFr;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTriggerCause;
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int triggerCause; // ivar: _triggerCause


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)frAsString:(int)arg0 ;
-(id)triggerCauseAsString:(int)arg0 ;
-(int)StringAsFr:(id)arg0 ;
-(int)StringAsTriggerCause:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
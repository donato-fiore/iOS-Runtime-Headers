// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDMETRICSCELLULARPOWERLOGNRFRCOVERAGE_H
#define AWDMETRICSCELLULARPOWERLOGNRFRCOVERAGE_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularPowerLogNRFRCoverage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int fR1; // ivar: _fR1
@property (nonatomic) int fR2; // ivar: _fR2
@property (nonatomic) BOOL hasFR1;
@property (nonatomic) BOOL hasFR2;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fR1AsString:(int)arg0 ;
-(id)fR2AsString:(int)arg0 ;
-(int)StringAsFR1:(id)arg0 ;
-(int)StringAsFR2:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
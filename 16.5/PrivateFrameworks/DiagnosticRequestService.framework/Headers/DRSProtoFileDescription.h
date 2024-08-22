// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSPROTOFILEDESCRIPTION_H
#define DRSPROTOFILEDESCRIPTION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface DRSProtoFileDescription : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) BOOL hasFileName;
@property (nonatomic) BOOL hasLogSize;
@property (readonly, nonatomic) BOOL hasLogType;
@property (nonatomic) NSUInteger logSize; // ivar: _logSize
@property (retain, nonatomic) NSString *logType; // ivar: _logType


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALSNLP_INTERMEDIATESNLPASSETVERSION_H
#define SIRINLUINTERNALSNLP_INTERMEDIATESNLPASSETVERSION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *boltTaskId; // ivar: _boltTaskId
@property (readonly, nonatomic) BOOL hasBoltTaskId;
@property (nonatomic) BOOL hasNcvNumber;
@property (nonatomic) BOOL hasOsRelease;
@property (nonatomic) BOOL hasPatchNumber;
@property (nonatomic) unsigned int ncvNumber; // ivar: _ncvNumber
@property (nonatomic) unsigned int osRelease; // ivar: _osRelease
@property (nonatomic) unsigned int patchNumber; // ivar: _patchNumber


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
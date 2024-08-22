// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSIGNDATAREQUEST_H
#define NPKPROTOSIGNDATAREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoSignDataRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *aid; // ivar: _aid
@property (retain, nonatomic) NSData *dataToSign; // ivar: _dataToSign
@property (retain, nonatomic) NSData *digestToSign; // ivar: _digestToSign
@property (nonatomic) int entanglementMode; // ivar: _entanglementMode
@property (readonly, nonatomic) BOOL hasAid;
@property (readonly, nonatomic) BOOL hasDataToSign;
@property (readonly, nonatomic) BOOL hasDigestToSign;
@property (nonatomic) BOOL hasEntanglementMode;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entanglementModeAsString:(int)arg0 ;
-(int)StringAsEntanglementMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
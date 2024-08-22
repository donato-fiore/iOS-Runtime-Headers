// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOACCEPTCARKEYSHAREFORMESSAGEWITHACTIVATIONCODERESPONSE_H
#define NPKPROTOACCEPTCARKEYSHAREFORMESSAGEWITHACTIVATIONCODERESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoAcceptCarKeyShareForMessageWithActivationCodeResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *carShareAcceptanceResponseData; // ivar: _carShareAcceptanceResponseData
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasCarShareAcceptanceResponseData;
@property (readonly, nonatomic) BOOL hasErrorData;


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
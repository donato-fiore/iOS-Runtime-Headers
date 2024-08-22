// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOCREATESHAREFORPARTIALSHAREINVITATIONRESPONSE_H
#define NPKPROTOCREATESHAREFORPARTIALSHAREINVITATIONRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoCreateShareForPartialShareInvitationResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasShareURLData;
@property (retain, nonatomic) NSData *shareURLData; // ivar: _shareURLData


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
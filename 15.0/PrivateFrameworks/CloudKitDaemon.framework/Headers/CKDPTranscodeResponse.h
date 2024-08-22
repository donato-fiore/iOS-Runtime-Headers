// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPTRANSCODERESPONSE_H
#define CKDPTRANSCODERESPONSE_H

@class PBCodable, CKCodeRecordTransport;
@protocol NSCopying;



@interface CKDPTranscodeResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) CKCodeRecordTransport *record; // ivar: _record


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
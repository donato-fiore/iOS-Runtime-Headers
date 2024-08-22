// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADTRANSPARENCYDETAILS_H
#define ADTRANSPARENCYDETAILS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ADTransparencyDetails : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasTransparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) BOOL hasTransparencyRendererPayload;
@property (readonly, nonatomic) BOOL hasTransparencyRendererURL;
@property (retain, nonatomic) NSString *transparencyDetailsUnavailableMessage; // ivar: _transparencyDetailsUnavailableMessage
@property (retain, nonatomic) NSString *transparencyRendererPayload; // ivar: _transparencyRendererPayload
@property (retain, nonatomic) NSString *transparencyRendererURL; // ivar: _transparencyRendererURL


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
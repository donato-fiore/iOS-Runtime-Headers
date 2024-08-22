// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NGMPBPUBLICDEVICEIDENTITY_H
#define NGMPBPUBLICDEVICEIDENTITY_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NGMPBPublicDeviceIdentity : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *signingKey; // ivar: _signingKey


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
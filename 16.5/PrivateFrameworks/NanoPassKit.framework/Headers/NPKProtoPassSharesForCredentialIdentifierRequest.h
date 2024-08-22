// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOPASSSHARESFORCREDENTIALIDENTIFIERREQUEST_H
#define NPKPROTOPASSSHARESFORCREDENTIALIDENTIFIERREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoPassSharesForCredentialIdentifierRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier


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
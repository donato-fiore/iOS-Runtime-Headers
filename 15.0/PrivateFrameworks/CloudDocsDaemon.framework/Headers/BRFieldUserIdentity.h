// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRFIELDUSERIDENTITY_H
#define BRFIELDUSERIDENTITY_H

@class PBCodable, NSPersonNameComponents, NSData;
@protocol NSCopying;



@interface BRFieldUserIdentity : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasSerializedNameComponents;
@property (retain, nonatomic) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) NSData *serializedNameComponents; // ivar: _serializedNameComponents


+(id)unknownPersonNameComponents;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCKUserIdentity:(id)arg0 ;
-(id)nameComponentsAcceptUnknownUser:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPPROTOSOCKPUPPETOBJECT_H
#define SPPROTOSOCKPUPPETOBJECT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "SPProtoCacheMessage.h"

@interface SPProtoSockPuppetObject : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SPProtoCacheMessage *cacheMessage; // ivar: _cacheMessage
@property (readonly, nonatomic) BOOL hasCacheMessage;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNbool;
@property (nonatomic) BOOL hasNdouble;
@property (nonatomic) BOOL hasNfloat;
@property (nonatomic) BOOL hasNint32;
@property (nonatomic) BOOL hasNint64;
@property (nonatomic) BOOL hasNuint32;
@property (nonatomic) BOOL hasNuint64;
@property (readonly, nonatomic) BOOL hasObject;
@property (nonatomic) BOOL hasSubtype;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL nbool; // ivar: _nbool
@property (nonatomic) CGFloat ndouble; // ivar: _ndouble
@property (nonatomic) float nfloat; // ivar: _nfloat
@property (nonatomic) int nint32; // ivar: _nint32
@property (nonatomic) NSInteger nint64; // ivar: _nint64
@property (nonatomic) unsigned int nuint32; // ivar: _nuint32
@property (nonatomic) NSUInteger nuint64; // ivar: _nuint64
@property (retain, nonatomic) NSData *object; // ivar: _object
@property (nonatomic) int subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) int type; // ivar: _type


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MODELKEYSERVERAPIFETCHKEYRESULT_H
#define MODELKEYSERVERAPIFETCHKEYRESULT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ModelKeyServerAPIRawKey.h"
#import "ModelKeyServerAPISignedKey.h"

@interface ModelKeyServerAPIFetchKeyResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasKeyId;
@property (readonly, nonatomic) BOOL hasModelName;
@property (readonly, nonatomic) BOOL hasRawKey;
@property (readonly, nonatomic) BOOL hasSignedKey;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (nonatomic) int key; // ivar: _key
@property (retain, nonatomic) NSString *keyId; // ivar: _keyId
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (retain, nonatomic) ModelKeyServerAPIRawKey *rawKey; // ivar: _rawKey
@property (retain, nonatomic) ModelKeyServerAPISignedKey *signedKey; // ivar: _signedKey
@property (retain, nonatomic) NSString *teamId; // ivar: _teamId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyAsString:(int)arg0 ;
-(int)StringAsKey:(id)arg0 ;
-(void)clearOneofValuesForKey;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
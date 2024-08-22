// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCODEPROTO2PROTECTEDENVELOPE_H
#define CKCODEPROTO2PROTECTEDENVELOPE_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "CKCodeProto2Any.h"

@interface CKCodeProto2ProtectedEnvelope : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int contents; // ivar: _contents
@property (retain, nonatomic) NSData *encrypted; // ivar: _encrypted
@property (nonatomic) BOOL hasContents;
@property (readonly, nonatomic) BOOL hasEncrypted;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) CKCodeProto2Any *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsContents:(id)arg0 ;
-(void)clearOneofValuesForContents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
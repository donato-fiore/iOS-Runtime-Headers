// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NGMPBINNERMESSAGE_H
#define NGMPBINNERMESSAGE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NGMPBInnerMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int counter; // ivar: _counter
@property (retain, nonatomic) NSData *debugInfo; // ivar: _debugInfo
@property (nonatomic) BOOL hasCounter;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (readonly, nonatomic) BOOL hasKtGossipData;
@property (retain, nonatomic) NSData *ktGossipData; // ivar: _ktGossipData
@property (retain, nonatomic) NSData *message; // ivar: _message


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
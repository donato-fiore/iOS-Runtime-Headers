// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NACMUTEDMESSAGE_H
#define NACMUTEDMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NACMutedMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasMuted;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) BOOL muted; // ivar: _muted
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRILOGNAMESPACE_H
#define TRILOGNAMESPACE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface TRILogNamespace : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasHashData;
@property (nonatomic) BOOL hasHashIncludesDefaults;
@property (readonly, nonatomic) BOOL hasLatestRolloutId;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasRolloutCount;
@property (retain, nonatomic) NSData *hashData; // ivar: _hashData
@property (nonatomic) BOOL hashIncludesDefaults; // ivar: _hashIncludesDefaults
@property (retain, nonatomic) NSString *latestRolloutId; // ivar: _latestRolloutId
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int rolloutCount; // ivar: _rolloutCount


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBVANITYURLMAPPING_H
#define NTPBVANITYURLMAPPING_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBVanityURLMapping : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *paths; // ivar: _paths


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pathsAtIndex:(NSUInteger)arg0 ;
-(void)addPaths:(id)arg0 ;
-(void)clearPaths;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
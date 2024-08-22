// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBWRAPPINGKEYRESPONSE_H
#define NTPBWRAPPINGKEYRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBWrappingKeyResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *wrappingKeyMapEntries; // ivar: _wrappingKeyMapEntries


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)wrappingKeyMapEntriesAtIndex:(NSUInteger)arg0 ;
-(void)addWrappingKeyMapEntries:(id)arg0 ;
-(void)clearWrappingKeyMapEntries;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEMETADATADICTIONARY_H
#define HDCODABLEMETADATADICTIONARY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableMetadataDictionary : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *keyValuePairs; // ivar: _keyValuePairs


+(id)decodeMetadataFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyValuePairsAtIndex:(NSUInteger)arg0 ;
-(void)addKeyValuePairs:(id)arg0 ;
-(void)clearKeyValuePairs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
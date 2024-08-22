// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBTOPICENTITY_H
#define BMPBTOPICENTITY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface BMPBTopicEntity : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasTopicId;
@property (retain, nonatomic) NSString *topicId; // ivar: _topicId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAttributes:(id)arg0 ;
-(void)clearAttributes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAXPBCONTEXTUALACTIONCONTENT_H
#define CAXPBCONTEXTUALACTIONCONTENT_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CAXPBContextualActionContent : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *contentMetadata; // ivar: _contentMetadata
@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, nonatomic) BOOL hasContentMetadata;


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
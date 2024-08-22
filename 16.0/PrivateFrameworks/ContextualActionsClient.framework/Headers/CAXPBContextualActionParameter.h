// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAXPBCONTEXTUALACTIONPARAMETER_H
#define CAXPBCONTEXTUALACTIONPARAMETER_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CAXPBContextualActionParameter : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasParameterMetadata;
@property (retain, nonatomic) NSData *parameterMetadata; // ivar: _parameterMetadata
@property (retain, nonatomic) NSString *parameterType; // ivar: _parameterType


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCANNOTATIONRANGE_H
#define BCANNOTATIONRANGE_H

@class PBCodable;
@protocol NSCopying;



@interface BCAnnotationRange : PBCodable <NSCopying>



@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger location; // ivar: _location


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
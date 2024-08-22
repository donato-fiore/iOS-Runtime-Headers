// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHCODABLETEMPLATEARRAY_H
#define ACHCODABLETEMPLATEARRAY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ACHCodableTemplateArray : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *templates; // ivar: _templates


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCodableTemplates:(id)arg0 ;
-(id)initWithSerializedData:(id)arg0 error:(*id)arg1 ;
-(id)templatesAtIndex:(NSUInteger)arg0 ;
-(void)addTemplates:(id)arg0 ;
-(void)clearTemplates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
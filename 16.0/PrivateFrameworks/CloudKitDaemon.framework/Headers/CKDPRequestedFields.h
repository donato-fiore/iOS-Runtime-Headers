// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPREQUESTEDFIELDS_H
#define CKDPREQUESTEDFIELDS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPRequestedFields : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *fields; // ivar: _fields
@property (retain, nonatomic) NSMutableArray *listFields; // ivar: _listFields


+(Class)listFieldType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fieldsAtIndex:(NSUInteger)arg0 ;
-(id)listFieldAtIndex:(NSUInteger)arg0 ;
-(void)_CKLogToFileHandle:(id)arg0 atDepth:(int)arg1 ;
-(void)addFields:(id)arg0 ;
-(void)addListField:(id)arg0 ;
-(void)clearFields;
-(void)clearListFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
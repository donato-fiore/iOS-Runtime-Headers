// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRECORDFIELDIDENTIFIER_H
#define FCCKPRECORDFIELDIDENTIFIER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface FCCKPRecordFieldIdentifier : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
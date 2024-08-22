// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPBPOLICYMODELTOCATEGORY_H
#define TPPBPOLICYMODELTOCATEGORY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TPPBPolicyModelToCategory : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasPrefix;
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix


+(id)TPPBPolicyModelToCategoryWithPrefix:(id)arg0 category:(id)arg1 ;
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
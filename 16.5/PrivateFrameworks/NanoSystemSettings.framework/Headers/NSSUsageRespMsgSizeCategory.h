// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUSAGERESPMSGSIZECATEGORY_H
#define NSSUSAGERESPMSGSIZECATEGORY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NSSUsageSize.h"

@interface NSSUsageRespMsgSizeCategory : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, nonatomic) BOOL hasCategoryIdentifier;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasSize;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSUsageSize *size; // ivar: _size


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPBINTENTDEFINITIONCHANGE_H
#define VCPBINTENTDEFINITIONCHANGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "VCPBIntentDefinition.h"

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *associatedBundleID; // ivar: _associatedBundleID
@property (nonatomic) int changeType; // ivar: _changeType
@property (readonly, nonatomic) BOOL hasIntentDefinition;
@property (retain, nonatomic) VCPBIntentDefinition *intentDefinition; // ivar: _intentDefinition


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChangeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPBPOLICYKEYVIEWMAPPING_H
#define TPPBPOLICYKEYVIEWMAPPING_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "TPPBDictionaryMatchingRule.h"

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMatchingRule;
@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) TPPBDictionaryMatchingRule *matchingRule; // ivar: _matchingRule
@property (retain, nonatomic) NSString *view; // ivar: _view


+(id)TPPBPolicyKeyViewMappingWithView:(id)arg0 matchingRule:(id)arg1 ;
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
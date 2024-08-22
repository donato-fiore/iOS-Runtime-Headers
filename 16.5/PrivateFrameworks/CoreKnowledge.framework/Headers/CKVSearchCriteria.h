// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSEARCHCRITERIA_H
#define CKVSEARCHCRITERIA_H

@class NSSet, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKVSearchCriteria : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSSet *fieldTypeFilters; // ivar: _fieldTypeFilters
@property (readonly, nonatomic) NSSet *itemTypeFilters; // ivar: _itemTypeFilters
@property (readonly, nonatomic) NSSet *originAppFilters; // ivar: _originAppFilters
@property (readonly, nonatomic) unsigned char searchMode; // ivar: _searchMode
@property (readonly, nonatomic) NSArray *searchTerms; // ivar: _searchTerms


+(BOOL)supportsSecureCoding;
+(id)builderWithLikeTerms:(id)arg0 ;
+(id)builderWithMatchTerm:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSearchCriteria:(id)arg0 ;
-(id)_commandCriterionFromFieldTypeFilters;
-(id)_commandCriterionFromOriginAppFilters;
-(id)_commandCriterionFromVocabularyItemTypeFilters;
-(id)commandCriteriaFromFilters;
-(id)commandCriteriaFromSearchTerms;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchTerms:(id)arg0 searchMode:(unsigned char)arg1 originAppFilters:(id)arg2 fieldTypeFilters:(id)arg3 itemTypeFilters:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
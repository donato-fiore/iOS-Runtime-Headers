// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSEARCHCRITERIABUILDER_H
#define CKVSEARCHCRITERIABUILDER_H

@class NSArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface CKVSearchCriteriaBuilder : NSObject {
    NSArray *_searchTerms;
    unsigned char _searchMode;
    NSMutableSet *_originAppFilters;
    NSMutableSet *_fieldTypeFilters;
    NSMutableSet *_itemTypeFilters;
}




-(BOOL)_setError:(*id)arg0 withCode:(NSInteger)arg1 ;
-(id)addFieldTypeFilterWithCustomTypeNumber:(id)arg0 error:(*id)arg1 ;
-(id)addFieldTypeFilterWithNumber:(id)arg0 error:(*id)arg1 ;
-(id)addItemTypeFilterWithNumber:(id)arg0 error:(*id)arg1 ;
-(id)addOriginAppFilterWithAppId:(id)arg0 error:(*id)arg1 ;
-(id)build;
-(id)initWithSearchTerms:(id)arg0 searchMode:(unsigned char)arg1 ;


@end


#endif
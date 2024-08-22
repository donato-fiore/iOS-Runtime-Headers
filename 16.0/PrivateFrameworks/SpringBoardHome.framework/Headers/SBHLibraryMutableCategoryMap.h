// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHLIBRARYMUTABLECATEGORYMAP_H
#define SBHLIBRARYMUTABLECATEGORYMAP_H

@class NSArray, NSDictionary;


#import "SBHLibraryCategoryMap.h"

@interface SBHLibraryMutableCategoryMap : SBHLibraryCategoryMap

@property (copy, nonatomic) NSArray *categoryIdentifiers;
@property (copy, nonatomic) NSDictionary *metadata;


-(void)addApplicationIdentifier:(id)arg0 forCategoryIdentifier:(id)arg1 ;
-(void)addCategoryIdentifier:(id)arg0 ;
-(void)removeCategoryIdentifier:(id)arg0 ;
-(void)setLocalizedCategoryName:(id)arg0 forCategoryIdentifier:(id)arg1 ;
-(void)setSortedApplicationIdentifiers:(id)arg0 forCategoryIdentifier:(id)arg1 ;
-(void)sortApplicationIdentifiersForCategoryIdentifier:(id)arg0 descriptors:(id)arg1 ;
-(void)updateRecentlyAddedCategoryFromMap:(id)arg0 ;


@end


#endif
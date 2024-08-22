// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSECTIONBUILDERHANDLER_H
#define SSSECTIONBUILDERHANDLER_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>

#import "SPSearchContactEntity.h"
#import "SPSearchQueryContext.h"
#import "SPSearchEntity.h"

@interface SSSectionBuilderHandler : NSObject

@property (retain, nonatomic) NSSet *bundleIdentifiersForHiddenSections; // ivar: _bundleIdentifiersForHiddenSections
@property (retain, nonatomic) SPSearchContactEntity *contactEntity; // ivar: _contactEntity
@property (retain, nonatomic) SPSearchQueryContext *queryContext; // ivar: _queryContext
@property (nonatomic) NSUInteger renderState; // ivar: _renderState
@property (retain, nonatomic) SPSearchEntity *searchEntity; // ivar: _searchEntity
@property (retain, nonatomic) NSArray *searchInAppInfo; // ivar: _searchInAppInfo
@property (retain, nonatomic) NSArray *sections; // ivar: _sections


+(Class)sectionBuilderClassForSection:(id)arg0 withQueryContext:(id)arg1 ;
+(id)buildSectionsWithSections:(id)arg0 queryContext:(id)arg1 searchInAppInfo:(id)arg2 renderState:(NSUInteger)arg3 ;
+(id)findDistinctPathIdentifiersForSections:(id)arg0 ;
-(id)buildSections;
-(void)insertDummySectionsIntoSections:(id)arg0 ;


@end


#endif
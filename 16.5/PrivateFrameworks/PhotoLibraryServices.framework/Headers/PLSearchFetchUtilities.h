// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSEARCHFETCHUTILITIES_H
#define PLSEARCHFETCHUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSearchFetchUtilities : NSObject



+(id)_fetchObjectsForEntityName:(id)arg0 predicate:(id)arg1 fetchLimit:(NSUInteger)arg2 photoLibrary:(id)arg3 error:(*id)arg4 ;
+(id)_searchRebuildEligibilityPredicateForEntityName:(id)arg0 ;
+(id)fetchObjectsEligibleForSearchRebuildFromPhotoLibrary:(id)arg0 entityName:(id)arg1 fetchLimit:(NSUInteger)arg2 ;
+(id)fetchObjectsWithinObjectIDs:(id)arg0 entityName:(id)arg1 fetchLimit:(NSUInteger)arg2 photoLibrary:(id)arg3 error:(*id)arg4 ;
+(id)searchIndexingEligibilityPredicateForEntityName:(id)arg0 ;


@end


#endif
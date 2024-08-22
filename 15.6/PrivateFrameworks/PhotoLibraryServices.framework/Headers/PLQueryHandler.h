// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLQUERYHANDLER_H
#define PLQUERYHANDLER_H


#import <Foundation/Foundation.h>


@interface PLQueryHandler : NSObject



+(BOOL)_containsKey:(int)arg0 inQuery:(id)arg1 ;
+(BOOL)_findAndReplaceLatitudeLongitudeKeyInQuery:(id)arg0 ;
+(BOOL)_isTextComparator:(int)arg0 ;
+(BOOL)_isTextFieldQuery:(int)arg0 ;
+(BOOL)_needEqualityForDoubleQuery:(int)arg0 ;
+(BOOL)_needToNegateQueryForComparator:(int)arg0 ;
+(BOOL)fixUserQueryDataInQuery:(id)arg0 ;
+(BOOL)hasMatchingFetchingAlbumForSingleQuery:(id)arg0 outKind:(*int)arg1 ;
+(BOOL)includeHiddenAssets:(id)arg0 ;
+(NSUInteger)_comparatorToOperatorType:(int)arg0 ;
+(id)_assetsPredicateForPersonPredicate:(id)arg0 invert:(BOOL)arg1 inLibrary:(id)arg2 ;
+(id)_convertQueryKeyTypeToString:(int)arg0 ;
+(id)_convertQueryValueForAssetType:(int)arg0 ;
+(id)_equalityPredicateForDoubleQuery:(id)arg0 withValue:(CGFloat)arg1 comparator:(int)arg2 inLibrary:(id)arg3 ;
+(id)_expressionForStringValue:(id)arg0 inLibrary:(id)arg1 ;
+(id)_getConvertedKeys:(id)arg0 ;
+(id)_getConvertedQueryKey:(id)arg0 ;
+(id)_getTargetDateForTheLastDays:(NSInteger)arg0 weeks:(NSInteger)arg1 months:(NSInteger)arg2 years:(NSInteger)arg3 seconds:(NSInteger)arg4 targetDate:(id)arg5 ;
+(id)_getTargetDateWithUnit:(int)arg0 dateValue:(id)arg1 ;
+(id)_infoFromSingleQuery:(id)arg0 ;
+(id)_personMatchesPredicateForCriteria:(id)arg0 ;
+(id)_personNameQueryKeyPaths;
+(id)_predicateForAbleToUploadQuery;
+(id)_predicateForDoubleQuery:(id)arg0 inLibrary:(id)arg1 ;
+(id)_predicateForEmptyQuery:(id)arg0 inLibrary:(id)arg1 ;
+(id)_predicateForIsReferencedQuery:(id)arg0 inLibrary:(id)arg1 ;
+(id)_predicateForLoopingQuery:(id)arg0 inLibrary:(id)arg1 ;
+(id)_predicateForNotAbleToUploadQuery;
+(id)_predicateForPersonQuery:(id)arg0 inLibrary:(id)arg1 changeDetectionCriteria:(id)arg2 ;
+(id)_predicateForPersonUUIDQuery:(id)arg0 inLibrary:(id)arg1 changeDetectionCriteria:(id)arg2 ;
+(id)_predicateForProResQuery:(id)arg0 inLibrary:(id)arg1 ;
+(id)_predicateForQuery:(id)arg0 inLibrary:(id)arg1 changeDetectionCriteria:(id)arg2 ;
+(id)_predicateForRangeQuery:(id)arg0 inLibrary:(id)arg1 changeDetectionCriteria:(id)arg2 ;
+(id)_predicateForSingleQuery:(id)arg0 inLibrary:(id)arg1 changeDetectionCriteria:(id)arg2 ;
+(id)_predicateForTaggedWithGPSQuery:(id)arg0 inLibrary:(id)arg1 ;
+(id)_predicateForTextQuery:(id)arg0 inLibrary:(id)arg1 ;
+(id)_predicateFromAlbumKind:(int)arg0 negate:(BOOL)arg1 ;
+(id)_predicateFromSearchIndexForText:(id)arg0 comparator:(int)arg1 inLibrary:(id)arg2 ;
+(id)constructQueryFromData:(id)arg0 ;
+(id)dataFromQuery:(id)arg0 ;
+(id)infoFromQuery:(id)arg0 ;
+(id)predicateForQuery:(id)arg0 inLibrary:(id)arg1 changeDetectionCriteria:(id)arg2 ;
+(id)queryFromInfo:(id)arg0 ;
+(int)_convertComparatorToNumericComparator:(int)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKDIFF_H
#define EKDIFF_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "EKObject.h"

@interface EKDiff : NSObject

@property (retain, nonatomic) NSSet *differentIdentityKeys; // ivar: _differentIdentityKeys
@property (retain, nonatomic) NSSet *differentImmutableKeys; // ivar: _differentImmutableKeys
@property (retain, nonatomic) NSSet *differentRelationshipMultiValueKeys; // ivar: _differentRelationshipMultiValueKeys
@property (retain, nonatomic) NSSet *differentRelationshipSingleValueKeys; // ivar: _differentRelationshipSingleValueKeys
@property (retain, nonatomic) NSSet *differentSingleValueKeys; // ivar: _differentSingleValueKeys
@property (retain, nonatomic) EKObject *firstObject; // ivar: _firstObject
@property (retain, nonatomic) NSDictionary *relationshipMultiValueAdds; // ivar: _relationshipMultiValueAdds
@property (retain, nonatomic) NSDictionary *relationshipMultiValueModifies; // ivar: _relationshipMultiValueModifies
@property (retain, nonatomic) NSDictionary *relationshipMultiValueRemoves; // ivar: _relationshipMultiValueRemoves
@property (retain, nonatomic) NSDictionary *relationshipSingleValueModifies; // ivar: _relationshipSingleValueModifies
@property (nonatomic) int result; // ivar: _result
@property (retain, nonatomic) EKObject *secondObject; // ivar: _secondObject


+(id)_addChangeStarIfChangedKey:(id)arg0 onObject:(id)arg1 ;
+(id)_indentStringAtDepth:(NSInteger)arg0 ;
+(id)_keysToIgnoreForComputingDiff;
+(id)_summaryKeyForMultiValueChange:(id)arg0 ofPropertyKey:(id)arg1 ;
+(id)diffBetweenObject:(id)arg0 andObject:(id)arg1 ;
+(id)summaryKeyForChangedProperty:(id)arg0 subProperty:(id)arg1 ;
+(id)summaryKeyForMultiValueAddOfPropertyKey:(id)arg0 ;
+(id)summaryKeyForMultiValueModifyOfPropertyKey:(id)arg0 ;
+(id)summaryKeyForMultiValueRemoveOfPropertyKey:(id)arg0 ;
+(void)_addObject:(id)arg0 forKey:(id)arg1 toDiff:(id)arg2 ;
+(void)_addPaddedHeaderToMutableString:(id)arg0 forKey:(id)arg1 withDepth:(NSInteger)arg2 ;
+(void)_addSummaryWithDepth:(NSInteger)arg0 toMutableString:(id)arg1 forRelationshipMultiValueKeys:(id)arg2 firstObject:(id)arg3 secondObject:(id)arg4 ;
+(void)_addSummaryWithDepth:(NSInteger)arg0 toMutableString:(id)arg1 forRelationshipSingleValueKeys:(id)arg2 firstObject:(id)arg3 secondObject:(id)arg4 ;
+(void)_addSummaryWithDepth:(NSInteger)arg0 toMutableString:(id)arg1 forSingleValueKeys:(id)arg2 firstObject:(id)arg3 secondObject:(id)arg4 ;
+(void)_populateIdentityKeysForDiff:(id)arg0 ;
+(void)_populateImmutableKeysForDiff:(id)arg0 ;
+(void)_populateMultiValueRelationshipKeysForDiff:(id)arg0 ;
+(void)_populateSingleValueKeysForDiff:(id)arg0 ;
+(void)_populateSingleValueRelationshipKeysForDiff:(id)arg0 ;
-(id)_multiValueModifiedObjectsForKey:(id)arg0 ;
-(id)_nonNilObject;
-(id)changeSetForDiff;
-(id)differentKeys;
-(id)initWithFirstObject:(id)arg0 secondObject:(id)arg1 ;
-(id)summaryDictionary;
-(id)summaryString;
-(void)_summarizeDiffsBetweenFirstObject:(id)arg0 secondObject:(id)arg1 mutableString:(id)arg2 depth:(NSInteger)arg3 ;


@end


#endif
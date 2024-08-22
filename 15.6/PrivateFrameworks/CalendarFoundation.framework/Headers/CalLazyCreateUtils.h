// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALLAZYCREATEUTILS_H
#define CALLAZYCREATEUTILS_H


#import <Foundation/Foundation.h>


@interface CalLazyCreateUtils : NSObject



+(void)addArray:(id)arg0 toArray:(*id)arg1 ;
+(void)addArray:(id)arg0 withKey:(id)arg1 toDictionaryOfArrays:(*id)arg2 ;
+(void)addArray:(id)arg0 withKey:(id)arg1 toDictionaryOfSets:(*id)arg2 ;
+(void)addArray:(id)arg0 withKey:(id)arg1 toStrongTableOfArrays:(*id)arg2 ;
+(void)addItem:(id)arg0 withKey:(id)arg1 toDictionaryOfArrays:(*id)arg2 ;
+(void)addItem:(id)arg0 withKey:(id)arg1 toDictionaryOfSets:(*id)arg2 ;
+(void)addItem:(id)arg0 withKey:(id)arg1 toStrongTableOfArrays:(*id)arg2 ;
+(void)addObject:(id)arg0 toArray:(*id)arg1 ;
+(void)addObject:(id)arg0 toSet:(*id)arg1 ;
+(void)addSet:(id)arg0 toSet:(*id)arg1 ;
+(void)addSet:(id)arg0 withKey:(id)arg1 toDictionaryOfSets:(*id)arg2 ;
+(void)setValue:(id)arg0 withKey:(id)arg1 inDictionary:(*id)arg2 ;


@end


#endif
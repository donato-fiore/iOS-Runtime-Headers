// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCONTACTSINTERFACE_H
#define SGCONTACTSINTERFACE_H


#import <Foundation/Foundation.h>


@interface SGContactsInterface : NSObject



+(BOOL)enumerateContactsMatchingEmailAddress:(id)arg0 withKeysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(*id)arg3 usingBlock:(id)arg4 ;
+(BOOL)enumerateContactsMatchingName:(id)arg0 withKeysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(*id)arg3 usingBlock:(id)arg4 ;
+(BOOL)enumerateContactsWithFetchRequest:(id)arg0 usingContactStore:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
+(BOOL)handleExistsInContactStoreForHandle:(id)arg0 withHandleType:(id)arg1 ;
+(id)identifiersPredicateFromCacheForPredicate:(id)arg0 isCached:(*BOOL)arg1 ;
+(id)unifiedContactWithIdentifier:(id)arg0 keysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(*id)arg3 ;
+(id)unifiedContactsMatchingPredicate:(id)arg0 keysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(*id)arg3 ;
+(id)unifiedMeContactWithKeysToFetch:(id)arg0 usingContactStore:(id)arg1 error:(*id)arg2 ;
+(void)clearCache;
+(void)initialize;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCACHEPOLICY_H
#define PFCACHEPOLICY_H


#import <Foundation/Foundation.h>


@interface PFCachePolicy : NSObject



-(NSUInteger)capacityHint;
-(id)cacheEntryWithKey:(id)arg0 value:(id)arg1 ;
-(id)willAddOrReplaceEntry:(id)arg0 add:(BOOL)arg1 contents:(id)arg2 ;
-(void)didAddCacheEntry:(id)arg0 ;
-(void)didGetCacheEntry:(id)arg0 ;
-(void)didRemoveAllCacheEntries;
-(void)didRemoveCacheEntry:(id)arg0 ;


@end


#endif
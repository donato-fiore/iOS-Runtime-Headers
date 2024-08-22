// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCOMPLICATIONSUGGESTIONCACHE_H
#define ATXCOMPLICATIONSUGGESTIONCACHE_H

@class _PASQueueLock;

#import <Foundation/Foundation.h>


@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}




-(BOOL)_writeComplicationsCache:(id)arg0 path:(id)arg1 withError:(*id)arg2 ;
-(BOOL)writeComplicationsInlineSetCache:(id)arg0 ;
-(BOOL)writeComplicationsModularSetCache:(id)arg0 ;
-(id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)arg0 error:(*id)arg1 ;
-(id)fetchInlineSetComplicationDescriptors;
-(id)fetchModularSetComplicationDescriptors;
-(id)init;


@end


#endif
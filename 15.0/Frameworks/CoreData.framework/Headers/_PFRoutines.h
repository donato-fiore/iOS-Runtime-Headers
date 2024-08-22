// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFROUTINES_H
#define _PFROUTINES_H


#import <Foundation/Foundation.h>


@interface _PFRoutines : NSObject



+(id)_frameworkHash;
+(struct __CFDictionary *)_createDictionaryPartitioningObjectIDs:(id)arg0 intoHierarchies:(BOOL)arg1 ;
+(struct __CFDictionary *)_createDictionaryPartitioningObjects:(id)arg0 intoHierarchies:(BOOL)arg1 ;
+(void)initialize;
+(void)wrapBlockInGuardedAutoreleasePool:(id)arg0 ;


@end


#endif
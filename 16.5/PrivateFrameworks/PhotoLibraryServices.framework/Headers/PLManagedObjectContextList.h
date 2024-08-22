// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMANAGEDOBJECTCONTEXTLIST_H
#define PLMANAGEDOBJECTCONTEXTLIST_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface PLManagedObjectContextList : NSObject {
    os_unfair_lock_s _lock;
    NSHashTable *_contexts;
}




-(id)allContexts;
-(id)allContextsNotIdenticalTo:(id)arg0 ;
-(id)init;
-(void)addContext:(id)arg0 ;


@end


#endif
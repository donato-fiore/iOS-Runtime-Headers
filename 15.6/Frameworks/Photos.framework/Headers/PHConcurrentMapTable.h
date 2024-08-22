// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHCONCURRENTMAPTABLE_H
#define PHCONCURRENTMAPTABLE_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHConcurrentMapTable : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_protectedTable;
}




+(id)mapTable;
-(BOOL)tryRemoveObjectForKey:(id)arg0 ;
-(NSUInteger)count;
-(id)allKeys;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_dispatchIsolatedRead:(id)arg0 ;
-(void)_dispatchIsolatedWriteAsync:(id)arg0 ;
-(void)_dispatchIsolatedWriteSync:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif
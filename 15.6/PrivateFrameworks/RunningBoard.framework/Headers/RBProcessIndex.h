// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBPROCESSINDEX_H
#define RBPROCESSINDEX_H

@class NSMutableOrderedSet, NSMutableDictionary;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface RBProcessIndex : NSObject <NSFastEnumeration>

 {
    os_unfair_lock_s _lock;
    NSUInteger _capacity;
    NSMutableOrderedSet *_processes;
    NSMutableDictionary *_processByIdentity;
    NSMutableDictionary *_processByInstance;
    NSMutableDictionary *_processByIdentifier;
}




+(id)index;
+(id)indexWithCapacity:(NSUInteger)arg0 ;
-(BOOL)addProcess:(id)arg0 ;
-(BOOL)addProcess:(id)arg0 existingProcess:(*id)arg1 ;
-(BOOL)containsIdentifier:(id)arg0 ;
-(BOOL)containsIdentity:(id)arg0 ;
-(BOOL)containsInstance:(id)arg0 ;
-(BOOL)containsProcess:(id)arg0 ;
-(BOOL)removeProcess:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allProcesses;
-(id)init;
-(id)processForIdentifier:(id)arg0 ;
-(id)processForIdentity:(id)arg0 ;
-(id)processForInstance:(id)arg0 ;
-(void)removeAllObjects;


@end


#endif
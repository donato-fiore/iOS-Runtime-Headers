// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPROCESSMAP_H
#define RBPROCESSMAP_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RBProcessMap : NSObject <NSCopying>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_valueMap;
}




-(BOOL)containsIdentity:(id)arg0 ;
-(NSUInteger)count;
-(id)allIdentities;
-(id)allValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)removeValueForIdentity:(id)arg0 ;
-(id)removeValueForIdentity:(id)arg0 withPredicate:(id)arg1 ;
-(id)setValue:(id)arg0 forIdentity:(id)arg1 ;
-(id)valueForIdentity:(id)arg0 ;
-(void)addIdentity:(id)arg0 ;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeIdentity:(id)arg0 ;


@end


#endif
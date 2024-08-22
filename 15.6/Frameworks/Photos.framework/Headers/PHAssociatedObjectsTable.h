// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSOCIATEDOBJECTSTABLE_H
#define PHASSOCIATEDOBJECTSTABLE_H


#import <Foundation/Foundation.h>


@interface PHAssociatedObjectsTable : NSObject {
    os_unfair_lock_s _locks;
    NSMapTable" _buckets;
}


@property (readonly) NSInteger stripeCount;


-(id)associatedObjectOnObject:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)setAssociatedObjectIfNotSet:(id)arg0 onObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAssociatedObjectsOnObject:(id)arg0 ;
-(void)removeAssociatedObjectOnObject:(id)arg0 forKey:(id)arg1 ;
-(void)setAssociatedObject:(id)arg0 onObject:(id)arg1 forKey:(id)arg2 ;


@end


#endif
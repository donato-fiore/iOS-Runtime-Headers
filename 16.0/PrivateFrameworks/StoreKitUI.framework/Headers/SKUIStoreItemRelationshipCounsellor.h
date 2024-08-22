// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTOREITEMRELATIONSHIPCOUNSELLOR_H
#define SKUISTOREITEMRELATIONSHIPCOUNSELLOR_H

@class NSRecursiveLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SKUIStoreItemRelationshipCounsellor : NSObject

@property (readonly, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableDictionary *relationshipsDictionary; // ivar: _relationshipsDictionary


-(BOOL)itemHasChildren:(id)arg0 ;
-(BOOL)itemHasParent:(id)arg0 ;
-(id)childItemsForItem:(id)arg0 ;
-(id)familyForItem:(id)arg0 ;
-(id)init;
-(id)parentItemForItem:(id)arg0 ;
-(id)siblingItemsForItem:(id)arg0 ;
-(void)addChildren:(id)arg0 forParent:(id)arg1 ;
-(void)removeAllRelationshipsForItem:(id)arg0 ;
-(void)setChildren:(id)arg0 forParent:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXACTIVEQUERY_H
#define _EXACTIVEQUERY_H

@class NSSet, NSMutableSet;

#import <Foundation/Foundation.h>

#import "_EXDiscoveryController.h"
#import "_EXQuery.h"

@interface _EXActiveQuery : NSObject

@property (retain) NSSet *currentUUIDs; // ivar: _currentUUIDs
@property (readonly, weak) _EXDiscoveryController *discoveryController; // ivar: _discoveryController
@property (readonly) NSMutableSet *internalNewObservers; // ivar: _internalNewObservers
@property (readonly) NSMutableSet *internalObservers; // ivar: _internalObservers
@property (readonly) NSSet *observers;
@property (readonly) _EXQuery *query; // ivar: _query


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActiveQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithQuery:(id)arg0 discoveryController:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)update;


@end


#endif
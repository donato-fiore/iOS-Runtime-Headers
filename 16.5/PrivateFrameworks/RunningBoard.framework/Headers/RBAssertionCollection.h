// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBASSERTIONCOLLECTION_H
#define RBASSERTIONCOLLECTION_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface RBAssertionCollection : NSObject {
    os_unfair_recursive_lock_s _lock;
    NSMutableDictionary *_assertionsByIdentifier;
    NSMutableSet *_processAssertions;
    NSMutableSet *_systemAssertions;
    NSMutableDictionary *_assertionsByOriginator;
    NSMutableDictionary *_assertionsByTargetProcessIdentity;
    NSMutableSet *_resolvedIdentifiers;
}




-(BOOL)hasAssertion:(id)arg0 ;
-(BOOL)hasAssertionsForOriginator:(id)arg0 ;
-(BOOL)hasAssertionsForOriginator:(id)arg0 exceedingCount:(NSUInteger)arg1 ;
-(BOOL)hasResolvedAssertion:(id)arg0 ;
-(NSUInteger)assertionCountForOriginator:(id)arg0 ;
-(NSUInteger)assertionCountForTargetProcessIdentity:(id)arg0 ;
-(NSUInteger)count;
-(id)allAssertions;
-(id)assertionWithIdentifier:(id)arg0 ;
-(id)assertionsForOriginator:(id)arg0 ;
-(id)assertionsForTarget:(id)arg0 ;
-(id)assertionsForTargetIdentity:(id)arg0 ;
-(id)init;
-(void)addAssertion:(id)arg0 ;
-(void)enumerateAssertionsForOriginator:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateAssertionsForProcessTargetsWithBlock:(id)arg0 ;
-(void)enumerateAssertionsForSystemTargetWithBlock:(id)arg0 ;
-(void)enumerateAssertionsForTargetProcessIdentity:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateAssertionsWithBlock:(id)arg0 ;
-(void)noteResolvedAssertion:(id)arg0 ;
-(void)removeAssertion:(id)arg0 ;


@end


#endif
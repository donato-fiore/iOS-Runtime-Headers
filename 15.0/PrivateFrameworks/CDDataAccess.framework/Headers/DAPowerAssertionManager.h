// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAPOWERASSERTIONMANAGER_H
#define DAPOWERASSERTIONMANAGER_H

@class NSMapTable, NSCountedSet, NSMutableSet;

#import <Foundation/Foundation.h>


@interface DAPowerAssertionManager : NSObject

@property (retain, nonatomic) NSMapTable *contextToGroupIdentifier; // ivar: _contextToGroupIdentifier
@property (retain, nonatomic) NSMapTable *contextToPowerAssertionRef; // ivar: _contextToPowerAssertionRef
@property (retain, nonatomic) NSCountedSet *contexts; // ivar: _contexts
@property (retain, nonatomic) NSMapTable *groupIdentifierToContexts; // ivar: _groupIdentifierToContexts
@property (retain, nonatomic) NSCountedSet *heldAsideContexts; // ivar: _heldAsideContexts
@property (retain, nonatomic) NSMutableSet *heldAsideGroupIdentifiers; // ivar: _heldAsideGroupIdentifiers


+(id)sharedPowerAssertionManager;
+(void)vendDaemons:(Class)arg0 ;
-(BOOL)_releaseAssertionForContext:(id)arg0 ;
-(BOOL)_retainAssertionForContext:(id)arg0 ;
-(NSUInteger)powerAssertionRetainCount:(id)arg0 ;
-(id)init;
-(id)stateString;
-(void)dropPowerAssertionsForGroupIdentifier:(id)arg0 ;
-(void)reattainPowerAssertionsForGroupIdentifier:(id)arg0 ;
-(void)releasePowerAssertion:(id)arg0 ;
-(void)retainPowerAssertion:(id)arg0 withGroupIdentifier:(id)arg1 ;


@end


#endif
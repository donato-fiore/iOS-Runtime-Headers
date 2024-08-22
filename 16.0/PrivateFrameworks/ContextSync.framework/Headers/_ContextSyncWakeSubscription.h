// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CONTEXTSYNCWAKESUBSCRIPTION_H
#define _CONTEXTSYNCWAKESUBSCRIPTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _ContextSyncWakeSubscription : NSObject

@property (retain, nonatomic) NSMutableDictionary *DSLtoWakeSubscription; // ivar: _DSLtoWakeSubscription


+(id)wakeSubscription;
+(id)wakeSubscription:(BOOL)arg0 forIdentifier:(id)arg1 ;
-(BOOL)addIdentifier:(id)arg0 withWake:(BOOL)arg1 ;
-(BOOL)existsIdentifier:(id)arg0 ;
-(BOOL)hasWakingIdentifier;
-(BOOL)isIdentifierWaking:(id)arg0 ;
-(BOOL)removeIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)lastChangeDateForIdentifier:(id)arg0 ;
-(id)wakeStateWithIdentifier:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDSOCIALINTERACTIONADVISOR_H
#define _CDSOCIALINTERACTIONADVISOR_H


#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"

@interface _CDSocialInteractionAdvisor : NSObject

@property (retain) _CDInteractionStore *store; // ivar: _store


-(id)adviseInteractionsForDate:(id)arg0 andSeedContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)inSeedPredicateForSeed:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)keyForModelWithSettings:(id)arg0 ;
-(id)rankContacts:(id)arg0 withSeedContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)recentPredicateForDate:(id)arg0 lambda:(float)arg1 lookAheadWeeks:(int)arg2 ;
-(void)tuneUsingSettings:(id)arg0 heartBeatHandler:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDASSERTION_H
#define HDASSERTION_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>

#import "HDAssertionManager.h"

@interface HDAssertion : NSObject {
    HDAssertionManager *_manager;
    NSInteger _state;
    CGFloat _remainingBudget;
    CGFloat _budgetIntervalStartTime;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *assertionIdentifier; // ivar: _assertionIdentifier
@property (nonatomic) CGFloat budget; // ivar: _budget
@property (readonly, copy, nonatomic) NSString *ownerIdentifier; // ivar: _ownerIdentifier
@property (readonly) NSInteger rawState;
@property (readonly) CGFloat remainingBudget;
@property (readonly) NSInteger state;


-(BOOL)_consumeFromBudgetThroughTime:(CGFloat)arg0 ;
-(NSInteger)_lock_consumeBudgetThroughTime:(CGFloat)arg0 error:(*id)arg1 ;
-(NSInteger)_takeWithManager:(id)arg0 ;
-(id)_lock_cloneWithOwnerIdentifier:(id)arg0 ;
-(id)_lock_description;
-(id)cloneWithOwnerIdentifier:(id)arg0 ;
-(id)description;
-(id)initWithAssertionIdentifier:(id)arg0 ownerIdentifier:(id)arg1 ;
-(void)_invalidateAndRelease:(BOOL)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
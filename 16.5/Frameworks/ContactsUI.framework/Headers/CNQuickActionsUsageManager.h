// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNQUICKACTIONSUSAGEMANAGER_H
#define CNQUICKACTIONSUSAGEMANAGER_H

@class NSCountedSet, NSArray, NSDate, CNContact, NSMutableSet;

#import <Foundation/Foundation.h>


@interface CNQuickActionsUsageManager : NSObject

@property (retain, nonatomic) NSCountedSet *actionsUsageSet; // ivar: _actionsUsageSet
@property (retain, nonatomic) NSArray *cachedInteractions; // ivar: _cachedInteractions
@property (retain, nonatomic) NSDate *cachedInteractionsDate; // ivar: _cachedInteractionsDate
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) NSMutableSet *enabledActionIdentifiers; // ivar: _enabledActionIdentifiers
@property (nonatomic) BOOL sortsWithDuet; // ivar: _sortsWithDuet


+(BOOL)sortUsingCoreDuetAvailable;
+(id)managerForContact:(id)arg0 ;
-(CGFloat)scoreForAction:(id)arg0 ;
-(id)init;
-(id)sortedActions:(id)arg0 ;
-(void)_updateDuetInteractionsIfNeeded;
-(void)actionPerformed:(id)arg0 ;
-(void)cacheEnabledStateForAction:(id)arg0 ;
-(void)updateCachedEnabledStateForAction:(id)arg0 ;


@end


#endif
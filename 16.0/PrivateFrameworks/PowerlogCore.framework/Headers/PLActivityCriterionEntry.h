// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACTIVITYCRITERIONENTRY_H
#define PLACTIVITYCRITERIONENTRY_H

@class NSString, NSDictionary;


#import "PLActivityCriterion.h"
#import "PLEntryNotificationOperatorComposition.h"

@interface PLActivityCriterionEntry : PLActivityCriterion

@property (copy) id *criterionBlock; // ivar: _criterionBlock
@property (readonly) NSString *entryKey; // ivar: _entryKey
@property (retain) PLEntryNotificationOperatorComposition *entryListener; // ivar: _entryListener
@property (retain) NSDictionary *filter; // ivar: _filter


+(id)audioOffCriterion;
+(id)displayOffCriterion;
+(id)pluggedInCriterion;
-(id)description;
-(id)initWithEntryKey:(id)arg0 withCriterionBlock:(id)arg1 ;
-(id)initWithEntryKey:(id)arg0 withFilter:(id)arg1 withCriterionBlock:(id)arg2 ;
-(void)didDisableActivity:(id)arg0 ;
-(void)didEnableActivity:(id)arg0 ;
-(void)scheduleEntryListener;


@end


#endif
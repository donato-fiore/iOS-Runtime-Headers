// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTAVAILABILITYEDITITEM_H
#define EKEVENTAVAILABILITYEDITITEM_H

@class NSArray;


#import "EKEventEditItem.h"

@interface EKEventAvailabilityEditItem : EKEventEditItem {
    NSInteger _availability;
    NSArray *_choices;
}




-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)editor:(id)arg0 canSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(id)_choices;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)refreshFromCalendarItemAndStore;


@end


#endif
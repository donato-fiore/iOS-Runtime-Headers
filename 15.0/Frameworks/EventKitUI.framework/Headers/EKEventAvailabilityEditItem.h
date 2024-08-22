// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTAVAILABILITYEDITITEM_H
#define EKEVENTAVAILABILITYEDITITEM_H

@class NSArray;


#import "EKEventEditItem.h"

@interface EKEventAvailabilityEditItem : EKEventEditItem {
    NSInteger _availability;
    NSUInteger _supportedAvailabilities;
    NSArray *_choices;
    NSUInteger _availabilityIndexInChoices;
}




-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)refreshFromCalendarItemAndStore;


@end


#endif
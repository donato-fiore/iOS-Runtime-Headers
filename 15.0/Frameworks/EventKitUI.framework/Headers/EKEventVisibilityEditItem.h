// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTVISIBILITYEDITITEM_H
#define EKEVENTVISIBILITYEDITITEM_H



#import "EKEventEditItem.h"
#import "EKEventAvailabilityEditItem.h"
#import "EKEventPrivacyLevelInlineEditItem.h"

@interface EKEventVisibilityEditItem : EKEventEditItem {
    EKEventAvailabilityEditItem *_availabilityEditItem;
    EKEventPrivacyLevelInlineEditItem *_privacyLevelEditItem;
    EKEventEditItem *_subitemOfLastDetailViewControllerRequested;
    NSUInteger _lastKnownNumberOfSubitems;
}




-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editor:(id)arg0 canSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(BOOL)usesDetailViewControllerForSubitem:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(CGFloat)footerHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)_editItemForIndex:(NSUInteger)arg0 ;
-(id)_lowestEditItem;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)footerTitle;
-(id)footerView;
-(id)init;
-(void)reset;
-(void)setCalendarItem:(id)arg0 store:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif
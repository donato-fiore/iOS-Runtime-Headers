// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTPRIVACYLEVELINLINEEDITITEM_H
#define EKEVENTPRIVACYLEVELINLINEEDITITEM_H



#import "EKEventEditItem.h"

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {
    BOOL _originalSwitchState;
    BOOL _currentSwitchState;
}




-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)forceTableReloadOnSave;
-(BOOL)isInline;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(CGFloat)footerHeightForWidth:(CGFloat)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)footerTitle;
-(void)_switchChanged:(id)arg0 ;
-(void)refreshFromCalendarItemAndStore;


@end


#endif
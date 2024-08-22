// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISHANDLEAPPLICATIONSHORTCUTACTION_H
#define UISHANDLEAPPLICATIONSHORTCUTACTION_H

@class BSAction, SBSApplicationShortcutItem, UIApplicationShortcutItem;



@interface UISHandleApplicationShortcutAction : BSAction

@property (readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
@property (readonly, copy, nonatomic) UIApplicationShortcutItem *uiShortcutItem;


-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSInteger)UIActionType;
-(id)initWithSBSShortcutItem:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDATADETECTIONACTIONPICKERITEM_H
#define BCSDATADETECTIONACTIONPICKERITEM_H

@class DDAction, CNContact, NSString;
@protocol DDDetectionControllerInteractionDelegate;


#import "BCSActionPickerItem.h"

@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem <DDDetectionControllerInteractionDelegate>

 {
    DDAction *_ddAction;
}


@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *icsString;
@property (readonly) Class superclass;


-(BOOL)isCopyActionItem;
-(BOOL)shouldDismissAlertWhenActionIsTaken;
-(id)actionURL;
-(id)icon;
-(id)initWithAction:(id)arg0 ddAction:(id)arg1 ;
-(id)label;
-(id)targetApplicationBundleIdentifier;
-(void)action:(id)arg0 didDismissAlertController:(id)arg1 ;
-(void)performActionWithFBOptions:(id)arg0 ;


@end


#endif
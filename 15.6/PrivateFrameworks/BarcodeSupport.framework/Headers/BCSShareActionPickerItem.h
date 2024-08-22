// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSSHAREACTIONPICKERITEM_H
#define BCSSHAREACTIONPICKERITEM_H

@class NSMutableArray;


#import "BCSActionPickerItem.h"

@interface BCSShareActionPickerItem : BCSActionPickerItem {
    NSMutableArray *_itemsToShare;
}




-(BOOL)canGroupInSubmenu;
-(id)icon;
-(id)initWithAction:(id)arg0 ;
-(id)label;
-(void)performActionWithFBOptions:(id)arg0 ;


@end


#endif
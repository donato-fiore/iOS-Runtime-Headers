// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTDELETEBUTTONEDITITEM_H
#define EKEVENTDELETEBUTTONEDITITEM_H

@class UITableViewCell, UIView;


#import "EKEventEditItem.h"

@interface EKEventDeleteButtonEditItem : EKEventEditItem {
    UITableViewCell *_cell;
    id *_deleteButtonTarget;
    SEL _deleteButtonAction;
}


@property (readonly, nonatomic) UIView *sourceViewForPopover;


-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)editor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)setDeleteButtonTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif
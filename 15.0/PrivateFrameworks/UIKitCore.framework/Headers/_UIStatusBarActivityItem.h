// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARACTIVITYITEM_H
#define _UISTATUSBARACTIVITYITEM_H



#import "UIStatusBarItem.h"
#import "_UIStatusBarActivityIndicator.h"

@interface _UIStatusBarActivityItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarActivityIndicator *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic) UIEdgeInsets activityIndicatorAlignmentRectInsets;


-(BOOL)_enableForType:(NSInteger)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARFALLBACKITEM_H
#define _UISTATUSBARFALLBACKITEM_H



#import "UIStatusBarItem.h"
#import "_UIStatusBarStringView.h"

@interface _UIStatusBarFallbackItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *label; // ivar: _label


-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif
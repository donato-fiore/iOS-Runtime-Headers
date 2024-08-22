// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARSENSORACTIVITYITEM_H
#define _UISTATUSBARSENSORACTIVITYITEM_H



#import "UIStatusBarItem.h"
#import "_UIStatusBarSensorActivityView.h"

@interface _UIStatusBarSensorActivityItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarSensorActivityView *sensorActivityIndicator; // ivar: _sensorActivityIndicator


-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif
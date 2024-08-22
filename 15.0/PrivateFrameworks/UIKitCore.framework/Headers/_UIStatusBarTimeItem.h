// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARTIMEITEM_H
#define _UISTATUSBARTIMEITEM_H



#import "UIStatusBarItem.h"
#import "_UIStatusBarStringView.h"

@interface _UIStatusBarTimeItem : UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarStringView *dateView; // ivar: _dateView
@property (retain, nonatomic) _UIStatusBarStringView *pillTimeView; // ivar: _pillTimeView
@property (retain, nonatomic) _UIStatusBarStringView *shortTimeView; // ivar: _shortTimeView
@property (retain, nonatomic) _UIStatusBarStringView *timeView; // ivar: _timeView


+(id)dateDisplayIdentifier;
+(id)pillTimeDisplayIdentifier;
+(id)shortTimeDisplayIdentifier;
+(id)timeDisplayIdentifier;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif
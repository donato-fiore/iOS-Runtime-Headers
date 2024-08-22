// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASCHECKLISTUSAGEDATA_H
#define ICASCHECKLISTUSAGEDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASChecklistAction.h"
#import "ICASMoveCheckedItemsToBottomSwitchSetting.h"

@interface ICASChecklistUsageData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASChecklistAction *checklistAction; // ivar: _checklistAction
@property (readonly, nonatomic) ICASMoveCheckedItemsToBottomSwitchSetting *moveCheckedItemsToBottomSwitchSetting; // ivar: _moveCheckedItemsToBottomSwitchSetting


+(id)dataName;
-(id)initWithChecklistAction:(id)arg0 moveCheckedItemsToBottomSwitchSetting:(id)arg1 ;
-(id)toDict;


@end


#endif
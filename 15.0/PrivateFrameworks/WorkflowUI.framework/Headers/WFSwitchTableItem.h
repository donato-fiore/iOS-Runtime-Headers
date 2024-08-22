// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSWITCHTABLEITEM_H
#define WFSWITCHTABLEITEM_H

@class NSString;


#import "WFCustomTableItem.h"

@interface WFSwitchTableItem : WFCustomTableItem

@property (readonly, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (readonly, nonatomic) NSString *secondaryText; // ivar: _secondaryText


+(id)itemWithPrimaryText:(id)arg0 initialValue:(id)arg1 ;
+(id)itemWithPrimaryText:(id)arg0 secondaryText:(id)arg1 initialValue:(id)arg2 ;
-(void)configureCell:(id)arg0 ;


@end


#endif
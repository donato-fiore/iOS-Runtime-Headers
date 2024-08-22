// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSEGMENTEDCONTROLTABLEITEM_H
#define WFSEGMENTEDCONTROLTABLEITEM_H

@class NSArray;


#import "WFCustomTableItem.h"

@interface WFSegmentedControlTableItem : WFCustomTableItem

@property (readonly, copy, nonatomic) NSArray *possibleValues; // ivar: _possibleValues


+(id)itemWithInitialValue:(id)arg0 possibleValues:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)segmentedControlSelectedItemAtIndex:(NSUInteger)arg0 ;


@end


#endif
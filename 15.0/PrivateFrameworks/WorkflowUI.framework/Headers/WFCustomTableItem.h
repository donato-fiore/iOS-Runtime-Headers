// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCUSTOMTABLEITEM_H
#define WFCUSTOMTABLEITEM_H

@class NSMapTable;


#import "WFTableItem.h"

@interface WFCustomTableItem : WFTableItem

@property (readonly, copy, nonatomic) id *configurationBlock; // ivar: _configurationBlock
@property (retain, nonatomic) id *representedObject;
@property (readonly, nonatomic) NSMapTable *representedObjectChangeTargetSelectorTable; // ivar: _representedObjectChangeTargetSelectorTable


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCellClass:(Class)arg0 style:(NSInteger)arg1 representedObject:(id)arg2 configurationBlock:(id)arg3 ;
-(void)addRepresentedObjectChangeObserver:(id)arg0 action:(SEL)arg1 ;
-(void)configureCell:(id)arg0 ;


@end


#endif
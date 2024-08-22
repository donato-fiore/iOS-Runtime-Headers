// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNLABELPICKERCONTROLLER_H
#define CNLABELPICKERCONTROLLER_H

@class NSMutableArray;


#import "CNPickerController.h"
#import "CNPropertyGroupItem.h"

@interface CNLabelPickerController : CNPickerController

@property (readonly, weak, nonatomic) CNPropertyGroupItem *item; // ivar: _item
@property (retain) NSMutableArray *labelsToDeleteOnCommit; // ivar: _labelsToDeleteOnCommit


-(id)initForPropertyItem:(id)arg0 ;
-(id)titleForPickerItem:(id)arg0 ;
-(void)pickedItem:(id)arg0 ;
-(void)removeCustomItem:(id)arg0 ;


@end


#endif
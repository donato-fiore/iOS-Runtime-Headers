// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSINGLEITEMSELECTIONCONTROLLER_H
#define HFSINGLEITEMSELECTIONCONTROLLER_H

@class NSString, NAFuture;
@protocol HFItemSelectionController;

#import <Foundation/Foundation.h>

#import "HFItem.h"

@interface HFSingleItemSelectionController : NSObject <HFItemSelectionController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *selectedItem; // ivar: _selectedItem
@property (readonly, nonatomic) NAFuture *selectionCompleteFuture;
@property (readonly) Class superclass;


-(BOOL)isItemSelected:(id)arg0 ;
-(id)deselectItem:(id)arg0 ;
-(id)selectItem:(id)arg0 ;
-(id)selectedItemInItems:(id)arg0 ;


@end


#endif
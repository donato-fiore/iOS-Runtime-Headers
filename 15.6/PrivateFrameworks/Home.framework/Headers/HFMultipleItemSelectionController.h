// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMULTIPLEITEMSELECTIONCONTROLLER_H
#define HFMULTIPLEITEMSELECTIONCONTROLLER_H

@class NSString, NSHashTable, NAFuture;
@protocol HFItemSelectionController;

#import <Foundation/Foundation.h>


@interface HFMultipleItemSelectionController : NSObject <HFItemSelectionController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *selectedItems; // ivar: _selectedItems
@property (readonly, nonatomic) NAFuture *selectionCompleteFuture;
@property (readonly) Class superclass;


-(BOOL)isItemSelected:(id)arg0 ;
-(id)deselectItem:(id)arg0 ;
-(id)init;
-(id)selectItem:(id)arg0 ;
-(id)selectedItemsInItems:(id)arg0 ;


@end


#endif
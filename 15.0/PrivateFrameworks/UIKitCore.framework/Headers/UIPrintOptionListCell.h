// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTOPTIONLISTCELL_H
#define UIPRINTOPTIONLISTCELL_H

@class NSString;
@protocol UIPopoverPresentationControllerDelegate, UIPrintOptionListDelegate;


#import "UIPrintOptionCell.h"

@interface UIPrintOptionListCell : UIPrintOptionCell <UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UIPrintOptionListDelegate> *itemListDelegate; // ivar: _itemListDelegate
@property (readonly) Class superclass;


-(void)prepareForReuse;
-(void)printOptionCellTapped;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRECURRENCEGRIDCHOOSERCONTROLLER_H
#define EKRECURRENCEGRIDCHOOSERCONTROLLER_H

@class NSString;
@protocol EKUIDividedGridViewControllerDelegate;


#import "EKRecurrenceChooserController.h"
#import "EKUIDividedGridViewTableViewCell.h"

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate>

 {
    EKUIDividedGridViewTableViewCell *_tableViewCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)drawBackgroundForRow:(NSInteger)arg0 ;
-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(NSInteger)gridViewType;
-(id)allCells;
-(id)cellForRow:(NSInteger)arg0 ;
-(id)cellLabels;
-(id)tableViewCell;
-(void)dividedGridViewController:(id)arg0 didSelectCell:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)dividedGridViewControllerDidLayout:(id)arg0 ;
-(void)prepareForDisplay;
-(void)refreshCells;
-(void)selectCell:(id)arg0 atIndex:(NSInteger)arg1 ;


@end


#endif
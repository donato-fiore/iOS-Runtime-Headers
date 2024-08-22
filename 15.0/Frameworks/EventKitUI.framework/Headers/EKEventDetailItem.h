// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTDETAILITEM_H
#define EKEVENTDETAILITEM_H

@class EKEventStore, EKEvent, NSString, UIViewController;
@protocol EKEditItemViewControllerDelegate, EKEventDetailItemDelegate;

#import <Foundation/Foundation.h>

#import "EKUIRecurrenceAlertController.h"

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate>

 {
    EKEventStore *_store;
    EKEvent *_event;
    EKEvent *_lastEventUpdated;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}


@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) int cellPosition; // ivar: _cellPosition
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKEventDetailItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL detailItemVisibilityChanged;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumNumberOfSubItems;
@property (readonly, nonatomic) BOOL requiresLayoutForSubitemCount;
@property (nonatomic) BOOL shouldIndent; // ivar: _shouldIndent
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (weak, nonatomic) UIViewController *viewControllerToPresentFrom; // ivar: _viewControllerToPresentFrom


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)eventViewController:(id)arg0 shouldSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(BOOL)isPrivateEvent;
-(BOOL)isReadOnlyDelegateCalendar;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 withTraitCollection:(id)arg1 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)editItemEventToDetach;
-(id)infoDetailViewControllerWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)editItemViewController:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)eventViewController:(id)arg0 didHighlightSubitem:(NSUInteger)arg1 ;
-(void)eventViewController:(id)arg0 didSelectReadOnlySubitem:(NSUInteger)arg1 ;
-(void)eventViewController:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)eventViewController:(id)arg0 didUnhighlightSubitem:(NSUInteger)arg1 ;
-(void)eventViewController:(id)arg0 tableViewDidScroll:(id)arg1 ;
-(void)eventViewControllerDidTapInfoButton:(id)arg0 ;
-(void)layoutCellsForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)notifyDidCommit;
-(void)notifyDidEndEditing;
-(void)notifyDidStartEditing;
-(void)notifySubitemDidSave:(NSUInteger)arg0 ;
-(void)refreshCopiedEvents;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISWIPEACTIONCONTROLLER_H
#define UISWIPEACTIONCONTROLLER_H

@class NSString, NSMutableSet, NSIndexPath, NSSet;
@protocol _UIScrollViewScrollObserver, UISwipeActionHost_Internal, UISwipeActionHost;

#import <Foundation/Foundation.h>

#import "UISwipeOccurrence.h"
#import "UIScrollView.h"
#import "UISwipeActionsConfiguration.h"
#import "_UISwipeHandler.h"
#import "UIView.h"

@interface UISwipeActionController : NSObject <_UIScrollViewScrollObserver>

 {
    UISwipeOccurrence *_preparingSwipeOccurrence;
    ? _flags;
}


@property (weak, nonatomic) UIScrollView *containerView; // ivar: _containerView
@property (weak, nonatomic) UISwipeOccurrence *currentSwipeOccurrence; // ivar: _currentSwipeOccurrence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISwipeActionsConfiguration *incomingSwipeActionsConfiguration; // ivar: _incomingSwipeActionsConfiguration
@property (readonly, nonatomic, getter=_internalSwipeActionHost) NSObject<UISwipeActionHost_Internal> *internalSwipeActionHost;
@property (readonly, nonatomic, getter=_prefersRTL) BOOL prefersRTL;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UISwipeActionHost> *swipeActionHost; // ivar: _swipeActionHost
@property (nonatomic) BOOL swipeEnabled;
@property (retain, nonatomic) _UISwipeHandler *swipeHandler; // ivar: _swipeHandler
@property (retain, nonatomic) NSMutableSet *swipeOccurrences; // ivar: _swipeOccurrences
@property (readonly, nonatomic) NSIndexPath *swipedIndexPath;
@property (readonly, nonatomic) NSSet *swipedIndexPaths;
@property (readonly, nonatomic) UIView *swipedItemView;


-(BOOL)_isSwipeForIndexPathFirstOccurrenceBeginningOrLastOccurrenceEnding:(id)arg0 ;
-(BOOL)swipeHandler:(id)arg0 mayBeginSwipeAtLocation:(struct CGPoint )arg1 withProposedDirection:(NSUInteger)arg2 ;
-(BOOL)touchAtLocationShouldDismissSwipedItem:(struct CGPoint )arg0 isTouchUp:(BOOL)arg1 ;
-(NSUInteger)_swipeDirectionForLeadingEdge:(BOOL)arg0 ;
-(id)_existingSwipeOccurrenceForIndexPath:(id)arg0 ;
-(id)_swipeActionsConfigurationForSwipeDirection:(NSUInteger)arg0 indexPath:(id)arg1 ;
-(id)_swipedViewForItemAtIndexPath:(id)arg0 ;
-(id)initWithSwipeActionHost:(id)arg0 style:(NSUInteger)arg1 ;
-(struct ? )configureForSwipeDirection:(NSUInteger)arg0 configuration:(id)arg1 startingAtTouchLocation:(struct CGPoint )arg2 ;
-(struct CGRect )swipeHandlerRestingFrame:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)dealloc;
-(void)deleteRowAtIndexPath:(id)arg0 ;
-(void)deleteSectionAtIndex:(NSUInteger)arg0 ;
-(void)insertRowAtIndexPath:(id)arg0 ;
-(void)insertSectionAtIndex:(NSUInteger)arg0 ;
-(void)moveRowAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)moveSectionAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)prepareForSwipeDirection:(NSUInteger)arg0 startingAtTouchLocation:(struct CGPoint )arg1 ;
-(void)reconfigureActiveSwipeOccurrences;
-(void)reloadData;
-(void)resetSwipedItemAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)swipeHandler:(id)arg0 didConfirmSwipeWithInfo:(struct ? )arg1 ;
-(void)swipeHandler:(id)arg0 didGenerateSwipeWithInfo:(struct ? )arg1 isTracking:(BOOL)arg2 ;
-(void)swipeHandlerDidBeginSwipe:(id)arg0 ;
-(void)swipeItemAtIndexPath:(id)arg0 configuration:(id)arg1 direction:(NSUInteger)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)swipeOccurrence:(id)arg0 didChangeStateFrom:(NSInteger)arg1 ;
-(void)swipeOccurrence:(id)arg0 willFinishWithDeletion:(BOOL)arg1 ;
-(void)swipeOccurrenceDidFinish:(id)arg0 ;
-(void)updateLayout;


@end


#endif
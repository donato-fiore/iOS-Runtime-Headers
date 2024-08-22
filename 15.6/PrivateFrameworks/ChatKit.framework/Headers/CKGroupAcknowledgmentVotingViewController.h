// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKGROUPACKNOWLEDGMENTVOTINGVIEWCONTROLLER_H
#define CKGROUPACKNOWLEDGMENTVOTINGVIEWCONTROLLER_H

@class UIViewController, UIButton, UICollectionView, NSString, NSArray, UITapGestureRecognizer;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate;


#import "CKAcknowledgmentVotingViewAnimator.h"
#import "CKAggregateAcknowledgmentChatItem.h"
#import "_CKAcknowledgmentVoteCountView.h"
#import "CKGroupAcknowledgmentVotingLayout.h"

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate>



@property (retain, nonatomic) CKAcknowledgmentVotingViewAnimator *animator; // ivar: _animator
@property (retain, nonatomic) CKAggregateAcknowledgmentChatItem *chatItem; // ivar: _chatItem
@property (retain, nonatomic) UIButton *collapseButton; // ivar: _collapseButton
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView; // ivar: _currentlyExpandedVoteCountView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKGroupAcknowledgmentVotingLayout *layout; // ivar: _layout
@property (copy, nonatomic) NSArray *sortedAnimatorModelItems; // ivar: _sortedAnimatorModelItems
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tallies; // ivar: _tallies
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_ackIconSupplementaryViewAtIndexPath:(id)arg0 ;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg0 ;
-(id)_voteCountSupplementaryViewAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withGestureRecognizer:(id)arg1 ;
-(id)initWithMessagePartChatItem:(id)arg0 ;
-(void)_animateToLayout:(NSUInteger)arg0 aroundSection:(NSInteger)arg1 ;
-(void)_collapseCollectionView;
-(void)_expandCollectionViewExpandedViewAroundSection:(NSInteger)arg0 ;
-(void)_handleCollapseButton:(id)arg0 ;
-(void)_setupTallies;
-(void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg0 ;
-(void)dealloc;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
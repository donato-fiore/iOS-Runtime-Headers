// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCTAGEDITORVIEWCONTROLLER_H
#define DOCTAGEDITORVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, UIBarButtonItem, UICollectionView, NSLayoutConstraint, NSMutableOrderedSet, NSMutableSet, NSArray, NSOrderedSet;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, DOCAddTagTextFieldDelegate, DOCTagEditorPresenter, DOCTagEditorDelegate;


#import "DOCAddTagView.h"

@interface DOCTagEditorViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, DOCAddTagTextFieldDelegate, DOCTagEditorPresenter>



@property (retain, nonatomic) NSString *addNewTagTitle; // ivar: _addNewTagTitle
@property (retain, nonatomic) DOCAddTagView *addTagTextFieldView; // ivar: _addTagTextFieldView
@property (retain, nonatomic) UIView *addTagTextFieldViewWrapper; // ivar: _addTagTextFieldViewWrapper
@property (retain, nonatomic) NSString *addTagTitle; // ivar: _addTagTitle
@property (nonatomic, getter=isAddingTag) BOOL addingTag; // ivar: _addingTag
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // ivar: _collectionViewHeightConstraint
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayResizingUntilAppeared; // ivar: _delayResizingUntilAppeared
@property (weak, nonatomic) NSObject<DOCTagEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableOrderedSet *discoveredTags; // ivar: _discoveredTags
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inTagListMode; // ivar: _inTagListMode
@property (retain, nonatomic) NSMutableSet *intersectionSelectedTags; // ivar: _intersectionSelectedTags
@property (nonatomic) BOOL isInfoInPopoverMode; // ivar: _isInfoInPopoverMode
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) BOOL pinTextFieldToTopBound; // ivar: _pinTextFieldToTopBound
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *tagsTitle; // ivar: _tagsTitle
@property (retain, nonatomic) NSMutableSet *unionSelectedTags; // ivar: _unionSelectedTags
@property (nonatomic) BOOL useCompactColorPicker; // ivar: _useCompactColorPicker
@property (nonatomic) BOOL userChangedTags; // ivar: _userChangedTags
@property (readonly, nonatomic) NSOrderedSet *userTags; // ivar: _userTags


-(BOOL)addTagTextField:(id)arg0 userDidCreateTagWithName:(id)arg1 ;
-(BOOL)addTagTextFieldShouldEndEditing:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(CGFloat)bottomEdgeSpacing;
-(CGFloat)topEdgeSpacing;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_tagForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 dequeueCell:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)_updateMixedSelectionForCell:(id)arg0 ;
-(void)_updateNavigationItem;
-(void)_updatePreferredContentSize:(BOOL)arg0 ;
-(void)_updateSelection;
-(void)_updateSelectionForSection:(NSUInteger)arg0 withTags:(id)arg1 ;
-(void)addTagTextFieldDidBeginEditing:(id)arg0 ;
-(void)addTagTextFieldDidChange:(id)arg0 ;
-(void)addTagTextFieldDidEndEditing:(id)arg0 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)deselectTag:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)registerCells:(id)arg0 ;
-(void)scheduleSetTagsOperationWithTag:(id)arg0 adding:(BOOL)arg1 ;
-(void)selectTag:(id)arg0 ;
-(void)setSelectedTags:(id)arg0 ;
-(void)setTagsWithItems:(id)arg0 ;
-(void)tagRegistryDidUpdate;
-(void)updateDiscoveredTags;
-(void)updateSelectedTags;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
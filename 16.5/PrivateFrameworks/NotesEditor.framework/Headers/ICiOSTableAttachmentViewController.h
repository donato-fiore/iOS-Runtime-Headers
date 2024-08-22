// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIOSTABLEATTACHMENTVIEWCONTROLLER_H
#define ICIOSTABLEATTACHMENTVIEWCONTROLLER_H

@class UITextView, NSString, ICNAEventReporter, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate, UIScrollViewDelegate, UITextViewDelegate, NSLayoutManagerDelegate;


#import "ICTableAttachmentViewController.h"
#import "ICNoteEditorViewController.h"

@interface ICiOSTableAttachmentViewController : ICTableAttachmentViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, UITextViewDelegate, NSLayoutManagerDelegate>



@property (retain, nonatomic) UITextView *biuTextView; // ivar: _biuTextView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICNAEventReporter *eventReporter; // ivar: _eventReporter
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialDragOffset; // ivar: _initialDragOffset
@property (nonatomic) BOOL isObservingContentOffset; // ivar: _isObservingContentOffset
@property (nonatomic) BOOL isTrackingAnalyticsEdit; // ivar: _isTrackingAnalyticsEdit
@property (nonatomic, getter=isMenuHiding) BOOL menuHiding; // ivar: _menuHiding
@property (readonly, nonatomic) ICNoteEditorViewController *noteEditorViewController;
@property (nonatomic) CGPoint previousNoteContentOffset; // ivar: _previousNoteContentOffset
@property (nonatomic) _NSRange previousSelectedRange; // ivar: _previousSelectedRange
@property (nonatomic) CGPoint previousViewOrigin; // ivar: _previousViewOrigin
@property (weak, nonatomic) UILongPressGestureRecognizer *rowLongPress; // ivar: _rowLongPress
@property (nonatomic, getter=isShowingTextStyleOptions) BOOL showingTextStyleOptions; // ivar: _showingTextStyleOptions
@property (readonly) Class superclass;
@property (nonatomic, getter=isTouchingColumnButton) BOOL touchingColumnButton; // ivar: _touchingColumnButton
@property (nonatomic, getter=isTouchingRowButton) BOOL touchingRowButton; // ivar: _touchingRowButton


-(BOOL)becomeFirstResponderForAuxStyling;
-(BOOL)canConvertToTag;
-(BOOL)canConvertToText;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)cursorPrefersWordBoundary;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)resignFirstResponderForAuxStyling;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(NSUInteger)preferredNavigationSelection;
-(id)addColumnAction;
-(id)addRowAction;
-(id)auxiliaryTextViewHost;
-(id)columnMenu;
-(id)copySelectionAction;
-(id)cutSelectionAction;
-(id)dragSnapshotFromRect:(struct CGRect )arg0 afterScreenUpdates:(BOOL)arg1 ;
-(id)formatMenu;
-(id)icTableDataFromPasteboard;
-(id)noteScrollView;
-(id)notesDataFromPasteboard;
-(id)pasteSelectionAction;
-(id)removeColumnAction;
-(id)removeRowAction;
-(id)rowMenu;
-(id)soloPlainTextStringFromPasteboard;
-(id)toggleBoldAction;
-(id)toggleItalicAction;
-(id)toggleStrikethroughAction;
-(id)toggleTableDirectionAction;
-(id)toggleUnderlineAction;
-(struct CGRect )editingViewport;
-(void)adjustScrollPositionByOffset:(struct CGPoint )arg0 ;
-(void)beginEditingNoteAtRange:(struct _NSRange )arg0 ;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)cellFirstResponderChanged;
-(void)cleanUpKVOIfNeeded;
-(void)columnButtonMenuActionTriggered:(id)arg0 ;
-(void)columnButtonPressed:(id)arg0 ;
-(void)columnButtonTouched:(id)arg0 ;
-(void)convertToTag:(id)arg0 ;
-(void)convertToText:(id)arg0 ;
-(void)convertUnconfirmedHashtagsMentionsIfNecessary;
-(void)copy:(id)arg0 ;
-(void)copySelection:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)didBeginEditingWithTextView:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didTapEmptyTable:(id)arg0 ;
-(void)didUpdateContentSize;
-(void)dragCellRange:(id)arg0 ;
-(void)dragColumn:(id)arg0 ;
-(void)dragRow:(id)arg0 ;
-(void)dragTextRange:(id)arg0 ;
-(void)ensureGesturesOnSelectionGrabbers:(id)arg0 ;
-(void)ic_makeFirstResponder:(id)arg0 ;
-(void)ic_resignFirstResponder:(id)arg0 ;
-(void)invalidateCachedChildrenForAccessibilityReparenting;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)loadView;
-(void)makeDelegateOfTextView:(id)arg0 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)menuDidHide:(id)arg0 ;
-(void)menuWillHide:(id)arg0 ;
-(void)moveAccessibilityFocusToSelectedColumnOrRowButton;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)paste:(id)arg0 ;
-(void)performInitialLayoutIfNeeded;
-(void)rowButtonMenuActionTriggered:(id)arg0 ;
-(void)rowButtonPressed:(id)arg0 ;
-(void)rowButtonTouched:(id)arg0 ;
-(void)scrollToCaretIfNeededForTextView:(id)arg0 ;
-(void)scrollToRect:(struct CGRect )arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)selectCell;
-(void)selectCurrentColumnForAccessibility;
-(void)selectCurrentRowForAccessibility;
-(void)selectionDidResignFirstResponder:(id)arg0 ;
-(void)sendAnalyticsForEndEditIfNeeded;
-(void)sendAnalyticsForStartEditIfNeeded;
-(void)setTextViewWritingDirection:(NSInteger)arg0 sender:(id)arg1 ;
-(void)setupEventHandling;
-(void)setupKVOIfNeeded;
-(void)setupTableTextView:(id)arg0 ;
-(void)shareTable:(id)arg0 ;
-(void)showButtonsAtColumns:(id)arg0 rows:(id)arg1 ;
-(void)showRangeSelectionMenu;
-(void)showRangeSelectionMenuAfterDelay;
-(void)showSelectionMenuFromRect:(struct CGRect )arg0 ;
-(void)speakAccessibilityAnnouncementForMoveToCellWithColumnID:(id)arg0 rowID:(id)arg1 ;
-(void)speakAccessibilityExitedTableAnnouncementAndDidRemoveRow:(BOOL)arg0 ;
-(void)strikethrough:(id)arg0 ;
-(void)tableAttachmentDidChange;
-(void)tableAttachmentSelectionDidChange:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unselectColumnRow;
-(void)updateAccessibilityValueForColumnAndRowButtons;
-(void)updateChrome;
-(void)updateKeyboardAppearanceForTextView:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBeginEditingWithTextView:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif
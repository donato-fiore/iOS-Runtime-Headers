// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIKEYBOARDABLECOLLECTIONVIEWCONTROLLER_H
#define SEARCHUIKEYBOARDABLECOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSString, UITextField;
@protocol UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate;



@interface SearchUIKeyboardableCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate>



@property (nonatomic) CGFloat currentKeyboardHeight; // ivar: _currentKeyboardHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<SearchUIKeyboardableTableViewDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard; // ivar: _shouldHideTableCellsUnderKeyboard
@property (readonly) Class superclass;
@property (weak, nonatomic) UITextField *textField; // ivar: _textField


-(BOOL)canBecomeFirstResponder;
-(BOOL)canHighlightRowAtIndexPath:(id)arg0 ;
-(BOOL)contentVisibleUnderKeyboard;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isOnCard;
-(CGFloat)contentHeight;
-(id)indexPathForNextSelectableIndexPath:(id)arg0 upward:(BOOL)arg1 ;
-(id)indexPathToSelectForKeyboardOnQuickReturn;
-(id)init;
-(void)addKeyCommandForKey:(id)arg0 action:(SEL)arg1 ;
-(void)deletePressed;
-(void)downArrowPressed:(id)arg0 ;
-(void)escapeButtonPressed;
-(void)goBack;
-(void)highlightNextRowAtIndexPath:(id)arg0 upward:(BOOL)arg1 ;
-(void)highlightRowAtIndexPath:(id)arg0 ;
-(void)keyboardFrameChanged:(id)arg0 ;
-(void)leftArrowPressed;
-(void)moveCursorToBeginning;
-(void)moveCursorToEnd;
-(void)moveCursorToPosition:(id)arg0 ;
-(void)returnKeyPressed;
-(void)rightArrowPressed;
-(void)scrollIndexPathToVisible:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectAllTextInTextField;
-(void)selectHighlightedRow;
-(void)setCollectionView:(id)arg0 ;
-(void)showKeyboard;
-(void)upArrowPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
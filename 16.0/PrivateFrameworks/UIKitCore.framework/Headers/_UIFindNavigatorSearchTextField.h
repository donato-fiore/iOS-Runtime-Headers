// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFINDNAVIGATORSEARCHTEXTFIELD_H
#define _UIFINDNAVIGATORSEARCHTEXTFIELD_H



#import "UISearchTextField.h"

@interface _UIFindNavigatorSearchTextField : UISearchTextField



+(id)_newlineImageForSize:(struct CGSize )arg0 withTraitCollection:(id)arg1 ;
-(BOOL)_canResignIfContainsFirstResponder;
-(BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
-(BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg0 ;
-(BOOL)canResignFirstResponder;
-(NSInteger)keyboardAppearance;
-(id)_window;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectionContainerView;
-(id)text;
-(id)undoManager;
-(struct CGRect )_applyRightViewOffsetIfApplicable:(struct CGRect )arg0 ;
-(struct CGRect )_availableTextRectForBounds:(struct CGRect )arg0 forEditing:(BOOL)arg1 ;
-(struct CGRect )_baselineLeftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )visibleRect;
-(void)insertNewline;


@end


#endif
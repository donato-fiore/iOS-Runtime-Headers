// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFVIEWCONTROLLER_H
#define PDFVIEWCONTROLLER_H


#import <Foundation/Foundation.h>

#import "PDFViewControllerPrivate.h"

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate *_private;
}




-(BOOL)_annotationIsValidTextFieldToActivate:(id)arg0 ;
-(BOOL)_handleFormFillingEventAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_shouldUpdateMarkupWithStyle:(NSUInteger)arg0 onPage:(id)arg1 forIndexSet:(id)arg2 ;
-(BOOL)isUpdatingSelectionMarkups;
-(NSUInteger)textSelectionMenu;
-(id)_annotationAtGestureLocation:(struct CGPoint )arg0 ;
-(id)_annotationFollowing:(id)arg0 wrapAround:(BOOL)arg1 ;
-(id)_annotationPreceding:(id)arg0 wrapAround:(BOOL)arg1 ;
-(id)_annotationsForSelection:(id)arg0 ;
-(id)_getPagePoint:(struct CGPoint *)arg0 forGestureLocation:(struct CGPoint )arg1 ;
-(id)_menuItemsForTextSelectionMenu:(NSUInteger)arg0 ;
-(id)_pageViewForAnnotation:(id)arg0 ;
-(id)_populateDetectedFormFieldsOnPage:(id)arg0 ;
-(id)activeAnnotation;
-(id)addAnnotationForDetectedFormField:(id)arg0 onPage:(id)arg1 activate:(BOOL)arg2 ;
-(id)initWithView:(id)arg0 ;
-(id)markupMenuPDFView:(id)arg0 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toPageView:(id)arg1 ;
-(void)_activateAnotation:(id)arg0 ;
-(void)_activateNearestAnnotationFromPage:(id)arg0 startPage:(id)arg1 previous:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)_addControlForAnnotation:(id)arg0 ;
-(void)_annotationHit:(id)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)_annotationHitLongPress:(id)arg0 gestureState:(NSInteger)arg1 location:(struct CGPoint )arg2 ;
-(void)_clearTextSelectionMenuItems;
-(void)_doButtonHit:(id)arg0 ;
-(void)_handleButtonHit:(id)arg0 ;
-(void)_hidePDFMarkupMenuView;
-(void)_hideTextSelectionMenu;
-(void)_performDoubleTapAtLocation:(struct CGPoint )arg0 ;
-(void)_postAnnotationHitNotification:(id)arg0 ;
-(void)_postAnnotationWillHitNotification:(id)arg0 ;
-(void)activateNearestAnnotation:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)activateNextAnnotation:(BOOL)arg0 ;
-(void)activateNextAnnotation:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)deleteAnnotation:(id)arg0 ;
-(void)editNoteForAnnotation:(id)arg0 ;
-(void)handleGesture:(NSUInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 ;
-(void)handleGesture:(id)arg0 ;
-(void)hideActiveMenus;
-(void)highlight:(id)arg0 ;
-(void)interactWithAnnotation:(id)arg0 ;
-(void)markupMenuController:(id)arg0 setMarkupStyle:(NSUInteger)arg1 ;
-(void)markupMenuControllerDeleteAnnotation:(id)arg0 ;
-(void)markupMenuControllerDidHide:(id)arg0 ;
-(void)markupMenuControllerEditNote:(id)arg0 ;
-(void)markupMenuControllerLayoutDidChange:(id)arg0 ;
-(void)markupMenuControllerShowTextSelectionMenu:(id)arg0 ;
-(void)removeControlForAnnotation:(id)arg0 ;
-(void)removeNoteForAnnotation:(id)arg0 ;
-(void)setActiveAnnotation:(id)arg0 ;
-(void)setMarkupStyle:(NSUInteger)arg0 forAnnotation:(id)arg1 ;
-(void)setMarkupStyle:(NSUInteger)arg0 forSelection:(id)arg1 clearSelection:(BOOL)arg2 ;
-(void)showActiveMenus;
-(void)showMarkupMenu:(id)arg0 ;
-(void)showPDFMarkupMenuView;
-(void)updateTextSelectionMenuAndShowMenu:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFMARKUPMENUVIEW_H
#define PDFMARKUPMENUVIEW_H

@class UIView;


#import "PDFMarkupMenuViewPrivate.h"

@interface PDFMarkupMenuView : UIView {
    PDFMarkupMenuViewPrivate *_private;
}




-(BOOL)_shouldShowCompactMenu;
-(id)_menuControls;
-(id)_newMaskView:(NSInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(int)_colorMenuIconForMarkupStyle:(NSUInteger)arg0 ;
-(int)_colorPaletteMenuIconForMarkupStyle:(NSUInteger)arg0 ;
-(int)_noteMenuIconForMarkupStyle:(NSUInteger)arg0 ;
-(struct CGRect )_dividerLineRectForControl:(NSInteger)arg0 ;
-(struct CGSize )_sizeThatFitsControls:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleDeleteButtonTap;
-(void)_setBlurDisabled:(BOOL)arg0 ;
-(void)_setControls:(id)arg0 ;
-(void)_setupViews;
-(void)_updateAppearance;
-(void)handleAddNoteButton:(id)arg0 ;
-(void)handleDeleteButtonTap:(id)arg0 ;
-(void)handleRightArrowButton:(id)arg0 ;
-(void)hide;
-(void)layoutSubviews;
-(void)presentFromRect:(struct CGRect )arg0 view:(id)arg1 visibleRect:(struct CGRect )arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMarkupNoteStyle:(NSUInteger)arg0 ;
-(void)setMarkupStyle:(NSUInteger)arg0 ;
-(void)showColorControlsMenu:(id)arg0 ;
-(void)useColorOf:(id)arg0 ;


@end


#endif
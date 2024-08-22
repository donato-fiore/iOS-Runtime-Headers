// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKHIGHLIGHTCOLOREDITORCONTROLLER_H
#define AKHIGHLIGHTCOLOREDITORCONTROLLER_H

@class UIButton, UIAlertController, UIView, NSString;
@protocol UIPopoverControllerDelegate;


#import "AKAnnotationPopoverViewController.h"
#import "AKCalloutBar.h"

@interface AKHighlightColorEditorController : AKAnnotationPopoverViewController <UIPopoverControllerDelegate>



@property (retain, nonatomic) UIButton *addNoteButton; // ivar: mAddNoteButton
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (retain, nonatomic) AKCalloutBar *calloutBar; // ivar: mCalloutBar
@property (retain, nonatomic) UIView *colorControls; // ivar: mColorControls
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIButton *deleteButton; // ivar: mDeleteButton
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int pageTheme; // ivar: _pageTheme
@property (retain, nonatomic) UIButton *rightArrowButton; // ivar: mRightArrowButton
@property (retain, nonatomic) UIButton *shareButton; // ivar: mShareButton
@property (readonly) Class superclass;


-(BOOL)canPresentInPosition:(int)arg0 ;
-(BOOL)p_shouldShowCompactMenu;
-(BOOL)p_shouldShowShareButton;
-(NSInteger)p_buttonTagForTheme:(id)arg0 ;
-(id)localizedAccessibilityStringForStyle:(NSInteger)arg0 ;
-(id)p_buildPaletteImageForFrontTag:(NSInteger)arg0 middleTag:(NSInteger)arg1 backTag:(NSInteger)arg2 pageTheme:(int)arg3 ;
-(id)p_colorControlImageForColor:(id)arg0 ;
-(id)p_colorControlImageForColor:(id)arg0 withForegroundImage:(id)arg1 ;
-(id)p_colorControlImageForTag:(NSInteger)arg0 pageTheme:(int)arg1 ;
-(id)p_colorControlUnderlineImageForPageTheme:(int)arg0 ;
-(id)p_colorForTag:(NSInteger)arg0 pageTheme:(int)arg1 ;
-(id)p_monochromaticImageFromImage:(id)arg0 withColor:(id)arg1 ;
-(id)p_noteGlyphForTag:(NSInteger)arg0 pageTheme:(int)arg1 ;
-(id)p_paletteImageForTag:(NSInteger)arg0 pageTheme:(int)arg1 ;
-(id)p_paletteImageWithFrontColor:(id)arg0 middleColor:(id)arg1 backColor:(id)arg2 frontForegroundImage:(id)arg3 ;
-(id)p_themeForStyle:(NSInteger)arg0 pageTheme:(int)arg1 ;
-(id)p_underlineForegroundImageForPageTheme:(int)arg0 ;
-(void)didShow;
-(void)handleAddNoteButton:(id)arg0 ;
-(void)handleDeleteButtonTap:(id)arg0 ;
-(void)handleRightArrowButton:(id)arg0 ;
-(void)handleShareButton:(id)arg0 ;
-(void)loadView;
-(void)p_drawColorControlCircleWithFrame:(struct CGRect )arg0 color:(id)arg1 ;
-(void)p_drawCrescentWithCircleRect:(struct CGRect )arg0 color:(id)arg1 leftShift:(CGFloat)arg2 addRadius:(CGFloat)arg3 ;
-(void)p_postDeleteConfirmation;
-(void)p_removeAnnotation:(id)arg0 ;
-(void)p_setStyle:(NSInteger)arg0 forAnnotation:(id)arg1 ;
-(void)p_updateAppearance;
-(void)presentFromRect:(struct CGRect )arg0 view:(id)arg1 ;
-(void)releaseOutlets;
-(void)setDelegate:(id)arg0 ;
-(void)setPosition:(int)arg0 ;
-(void)showColorControlsMenu:(id)arg0 ;
-(void)useColorOf:(id)arg0 ;
-(void)viewDidLoad;
-(void)willShow;


@end


#endif
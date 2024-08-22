// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGFONTANDCOLORPICKERVIEWCONTROLLER_H
#define PREDITINGFONTANDCOLORPICKERVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, NSURL, UIBarButtonItem, UIStackView;
@protocol PREditingFontPickerComponentViewControllerDelegate, PREditorNumberingSystemPickerControllerDelegate, PREditingColorPickerComponentViewControllerDelegate, PREditorNumberingSystemViewControllerDelegate, UISheetPresentationControllerDelegate, PREditingFontAndColorPickerViewControllerDelegate;


#import "PREditorColorPickerConfiguration.h"
#import "PREditingColorPickerComponentViewController.h"
#import "PREditingColorVariationStore.h"
#import "PREditingColorWell.h"
#import "PREditingColorWellView.h"
#import "PREditingFontPickerComponentViewController.h"
#import "PREditorNumberingSystemPickerController.h"
#import "PREditorNumberingSystemViewController.h"
#import "PRPosterTitleStyleConfiguration.h"

@interface PREditingFontAndColorPickerViewController : UIViewController <PREditingFontPickerComponentViewControllerDelegate, PREditorNumberingSystemPickerControllerDelegate, PREditingColorPickerComponentViewControllerDelegate, PREditorNumberingSystemViewControllerDelegate, UISheetPresentationControllerDelegate>



@property (copy, nonatomic) NSArray *additionalFonts; // ivar: _additionalFonts
@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (retain, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration; // ivar: _colorPickerConfiguration
@property (retain, nonatomic) PREditingColorPickerComponentViewController *colorPickerController; // ivar: _colorPickerController
@property (retain, nonatomic) PREditingColorVariationStore *colorVariationStore; // ivar: _colorVariationStore
@property (retain, nonatomic) PREditingColorWell *colorWell; // ivar: _colorWell
@property (retain, nonatomic) PREditingColorWellView *colorWellView; // ivar: _colorWellView
@property (readonly, nonatomic) NSUInteger components; // ivar: _components
@property (nonatomic) CGFloat contentsLuminance; // ivar: _contentsLuminance
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PREditingFontAndColorPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *extensionBundleURL; // ivar: _extensionBundleURL
@property (retain, nonatomic) PREditingFontPickerComponentViewController *fontPickerController; // ivar: _fontPickerController
@property (nonatomic) BOOL hasLoadedComponentViewControllers; // ivar: _hasLoadedComponentViewControllers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *numberSystemBarItem; // ivar: _numberSystemBarItem
@property (retain, nonatomic) PREditorNumberingSystemPickerController *numberingSystemController; // ivar: _numberingSystemController
@property (retain, nonatomic) PREditorNumberingSystemViewController *numberingSystemViewController; // ivar: _numberingSystemViewController
@property (retain, nonatomic) UIStackView *rootStackView; // ivar: _rootStackView
@property (readonly) Class superclass;
@property (retain, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration; // ivar: _titleStyleConfiguration


-(CGFloat)desiredDetent;
-(id)initWithComponents:(NSUInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localeWithNumberingSystem:(id)arg0 ;
-(void)_closeButtonTapped:(id)arg0 ;
-(void)_signalDelegateDidFinish;
-(void)colorPickerComponentViewController:(id)arg0 didSelectColorItem:(id)arg1 userSelected:(BOOL)arg2 ;
-(void)colorPickerComponentViewControllerDidChangeHeight:(id)arg0 ;
-(void)colorWellDidUpdateColor:(id)arg0 ;
-(void)fontPickerComponentViewController:(id)arg0 didSelectFont:(id)arg1 ;
-(void)loadComponentViewControllersIfNeeded;
-(void)loadView;
-(void)numberingSystemPickerController:(id)arg0 didSelectNumberingSystem:(id)arg1 ;
-(void)numberingSystemViewController:(id)arg0 didSelectNumberingSystem:(id)arg1 ;
-(void)numberingSystemWasChanged:(id)arg0 locale:(id)arg1 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
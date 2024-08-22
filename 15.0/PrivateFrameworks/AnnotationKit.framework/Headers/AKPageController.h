// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKPAGECONTROLLER_H
#define AKPAGECONTROLLER_H

@class NSString, NSMutableDictionary, UIView;
@protocol AKNoteEditorControllerDelegate, AKHighlightColorEditorControllerDelegate, AKNoteEditorControllerDelegate, AKControllerDelegateProtocol;

#import <Foundation/Foundation.h>

#import "AKController.h"
#import "AKGeometryHelper.h"
#import "AKHighlightColorEditorController.h"
#import "AKInkPageOverlayController.h"
#import "AKLayerPresentationManager.h"
#import "AKPageModelController.h"

@interface AKPageController : NSObject <AKNoteEditorControllerDelegate, AKHighlightColorEditorControllerDelegate, AKNoteEditorControllerDelegate>



@property (weak) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<AKControllerDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AKGeometryHelper *geometryHelper; // ivar: _geometryHelper
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AKHighlightColorEditorController *highlightColorEditorController; // ivar: _highlightColorEditorController
@property (retain, nonatomic) id *inkOverlayDrawingUndoTarget; // ivar: _inkOverlayDrawingUndoTarget
@property (retain, nonatomic) AKInkPageOverlayController *inkPageOverlayController; // ivar: _inkPageOverlayController
@property (retain, nonatomic) AKLayerPresentationManager *layerPresentationManager; // ivar: _layerPresentationManager
@property (retain) NSMutableDictionary *noteEditors; // ivar: _noteEditors
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property NSUInteger pageIndex; // ivar: _pageIndex
@property (retain) AKPageModelController *pageModelController; // ivar: _pageModelController
@property BOOL shouldPixelate; // ivar: _shouldPixelate
@property (readonly) Class superclass;
@property BOOL superviewDependentThingsWereSetUp; // ivar: _superviewDependentThingsWereSetUp


+(id)pageControllerWithController:(id)arg0 andPageModelController:(id)arg1 ;
-(BOOL)editorController:(id)arg0 isRightArrowEnabledForAnnotation:(id)arg1 ;
-(BOOL)handleEditAnnotation:(id)arg0 ;
-(BOOL)relinquishablesAreLoaded;
-(CGFloat)currentModelToScreenScaleFactor;
-(CGFloat)modelBaseScaleFactor;
-(NSInteger)currentModelToScreenExifOrientation;
-(NSUInteger)edgeForNoteEditor:(id)arg0 ;
-(id)_initWithController:(id)arg0 andPageModelController:(id)arg1 ;
-(id)_popoverPresentingViewController;
-(id)annotationsBeneathLoupe:(id)arg0 ;
-(id)initForTesting;
-(id)newContentSnapshotPDFDataAtScale:(CGFloat)arg0 inRect:(struct CGRect )arg1 forLoupeAnnotation:(id)arg2 ;
-(id)popoverPresentingViewControllerForNoteEditor:(id)arg0 ;
-(id)stickyContainerForNoteEditor:(id)arg0 ;
-(struct CGPoint )convertPointFromModelToOverlay:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointFromOverlayToModel:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectFromModelToOverlay:(struct CGRect )arg0 ;
-(struct CGRect )convertRectFromOverlayToModel:(struct CGRect )arg0 ;
-(struct CGRect )maxPageRect;
-(struct CGRect )stickyViewFrameForNoteEditor:(id)arg0 ;
-(struct CGRect )visibleRectOfOverlay;
-(void)_updateOverlayVisibilityWithToolPicker:(id)arg0 visible:(BOOL)arg1 ;
-(void)addPopupToAnnotation:(id)arg0 openPopup:(BOOL)arg1 ;
-(void)editorController:(id)arg0 deleteAnnotation:(id)arg1 ;
-(void)editorController:(id)arg0 editNote:(id)arg1 ;
-(void)editorController:(id)arg0 setTheme:(id)arg1 forAnnotation:(id)arg2 ;
-(void)editorController:(id)arg0 showEditMenuForAnnotation:(id)arg1 ;
-(void)noteEditorDidBeginEditing:(id)arg0 ;
-(void)noteEditorDidFinishEditing:(id)arg0 ;
-(void)noteEditorWillDismissFromFullScreen:(id)arg0 ;
-(void)noteEditorWillPresentFullScreen:(id)arg0 ;
-(void)openPopoverForHighlightAnnotation:(id)arg0 ;
-(void)openPopupAnnotation:(id)arg0 ;
-(void)overlayWasAddedToSuperview;
-(void)releaseRelinquishables;
-(void)removeNoteFromAnnotation:(id)arg0 ;
-(void)setupRelinquishables;
-(void)teardown;
-(void)unregisterFromUndoManager:(id)arg0 ;
-(void)updateOverlayViewLayers;
-(void)updateScaleFactor:(CGFloat)arg0 isLiveUpdate:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;


@end


#endif
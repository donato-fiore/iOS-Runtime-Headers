// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGEVIEW_H
#define PDFPAGEVIEW_H

@class UIView, NSString;
@protocol UITextViewDelegate, PDFPageLayerInterface;


#import "PDFPageViewPrivate.h"

@interface PDFPageView : UIView <UITextViewDelegate, PDFPageLayerInterface>

 {
    PDFPageViewPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_allowsFormFieldEntry;
-(BOOL)_shouldReplaceStringOnAnnotation:(id)arg0 withTextView:(id)arg1 ;
-(BOOL)enablesTileUpdates;
-(BOOL)hasBackgroundImage;
-(BOOL)isVisible;
-(NSInteger)displayBox;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)visibilityDelegateIndex;
-(id)activeAnnotation;
-(id)backgroundImage;
-(id)geometryInterface;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPage:(id)arg0 geometryInterface:(id)arg1 andRenderingProperties:(id)arg2 ;
-(id)markupAnnotationsForIndexSet:(id)arg0 ;
-(id)page;
-(id)pageLayer;
-(id)pageLayerEffectForID:(id)arg0 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(id)renderingProperties;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(int)backgroundImageQuality;
-(struct CGAffineTransform )_rotationTransformForPageView;
-(struct CGAffineTransform )layerEffectTransform;
-(struct CGPoint )convertPointToPageView:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectToPageView:(struct CGRect )arg0 ;
-(void)_addPDFAnnotation:(id)arg0 ;
-(void)_addPDFAnnotationChoiceWidget:(id)arg0 ;
-(void)_addPDFAnnotationStampSignature:(id)arg0 ;
-(void)_addPDFAnnotationTextWidget:(id)arg0 ;
-(void)_choiceWidgetDone;
-(void)_didRotatePageNotification:(id)arg0 ;
-(void)_formChanged:(id)arg0 ;
-(void)_rotateActiveAnnotation;
-(void)_setAttributedStringForAnnotation:(id)arg0 stringValue:(id)arg1 textView:(id)arg2 ;
-(void)_setupBookmarkLayer;
-(void)_setuppageAnnotationEffects;
-(void)_updateAnnotationVisibility:(id)arg0 ;
-(void)_updateBackgroundColor;
-(void)_updateWidgetControl:(id)arg0 forBounds:(struct CGRect )arg1 ;
-(void)addAnnotation:(id)arg0 ;
-(void)addBookmark;
-(void)addControlForAnnotation:(id)arg0 ;
-(void)addMarkupWithStyle:(NSUInteger)arg0 forIndexSet:(id)arg1 ;
-(void)addPageLayerEffect:(id)arg0 ;
-(void)addSearchSelection:(id)arg0 ;
-(void)applyTileLayoutScale:(CGFloat)arg0 ;
-(void)clearTiles;
-(void)colorWidgetBackgrounds:(BOOL)arg0 ;
-(void)dealloc;
-(void)forceTileUpdate;
-(void)hideTileLayer:(BOOL)arg0 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)previewRotatePage:(CGFloat)arg0 ;
-(void)removeAnnotation:(id)arg0 ;
-(void)removeBookmark;
-(void)removeControlForAnnotation:(id)arg0 ;
-(void)removePageLayerEffectForID:(id)arg0 ;
-(void)restoreOriginalTileLayout;
-(void)saveOriginalTileLayout;
-(void)scalePageLayerEffects:(CGFloat)arg0 ;
-(void)setBackgroundImage:(id)arg0 atBackgroundQuality:(int)arg1 ;
-(void)setEnableTileUpdates:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setNeedsTilesUpdate;
-(void)setSearchSelections:(id)arg0 ;
-(void)setState:(NSInteger)arg0 onButtonWidgetAnnotation:(id)arg1 ;
-(void)setStringValue:(id)arg0 onChoiceWidgetAnnotation:(id)arg1 withTableView:(id)arg2 ;
-(void)setStringValue:(id)arg0 onChoiceWidgetAnnotation:(id)arg1 withTextField:(id)arg2 ;
-(void)setStringValue:(id)arg0 onTextWidgetAnnotation:(id)arg1 withTextView:(id)arg2 ;
-(void)setVisibilityDelegateIndex:(NSUInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateAnnotation:(id)arg0 ;
-(void)updateBookmark;
-(void)updatePageLayerEffectForID:(id)arg0 ;
-(void)updatePageLayerEffects;


@end


#endif
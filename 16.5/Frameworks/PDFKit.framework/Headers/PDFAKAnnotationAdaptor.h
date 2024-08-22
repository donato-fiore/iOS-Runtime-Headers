// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFAKANNOTATIONADAPTOR_H
#define PDFAKANNOTATIONADAPTOR_H

@class AKAnnotation;

#import <Foundation/Foundation.h>

#import "PDFAKAnnotationAdaptorPrivate.h"
#import "PDFAnnotation.h"

@interface PDFAKAnnotationAdaptor : NSObject {
    PDFAKAnnotationAdaptorPrivate *_private;
}


@property (readonly, nonatomic) AKAnnotation *akAnnotation;
@property (readonly, weak, nonatomic) PDFAnnotation *pdfAnnotation;


+(Class)_akAnnotationSubclassForWidgetFieldType:(id)arg0 ;
+(id)_akAnnotationInstanceForPDFAnnotationSubtype:(id)arg0 withOptionalWidgetFieldType:(id)arg1 ;
+(id)_pdfAnnotationInstanceForAKAnnotation:(id)arg0 ;
+(id)annotationAdaptorWithPDFAnnotation:(id)arg0 andCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 andPDFDictionary:(struct CGPDFDictionary *)arg2 ;
+(id)newPDFAnnotationFromAKAnnotation:(id)arg0 ;
-(id)_colorFromColorOrArray:(id)arg0 ;
-(id)initWithPDFAnnotation:(id)arg0 andAKAnnotation:(id)arg1 ;
-(void)_invalidateAppearanceStreamForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_startObservingAnnotation;
-(void)_stopObservingAnnotation;
-(void)_syncAction:(id)arg0 ;
-(void)_syncAdditionalAction:(id)arg0 ;
-(void)_syncAnnotationTextForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncAppearanceDictionaryUpdatingEditsDisableAppearanceOverride:(BOOL)arg0 ;
-(void)_syncAppearanceState:(id)arg0 ;
-(void)_syncAppleExtras:(id)arg0 ;
-(void)_syncArrowHeadStyleForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncAuthorForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncBorder:(id)arg0 ;
-(void)_syncBorderStyle:(id)arg0 ;
-(void)_syncBoundingRectangleForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncChildAnnotationForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncColor:(id)arg0 ;
-(void)_syncColorForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncContents:(id)arg0 ;
-(void)_syncContentsForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncCornerRadiusForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncDashedForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncDate:(id)arg0 ;
-(void)_syncDefaultAppearance:(id)arg0 ;
-(void)_syncDestination:(id)arg0 ;
-(void)_syncEndPointForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncEverythingToAKAnnotation;
-(void)_syncEverythingToPDFAnnotation;
-(void)_syncFlags:(NSUInteger)arg0 ;
-(void)_syncHighlightingMode:(id)arg0 ;
-(void)_syncIconName:(id)arg0 ;
-(void)_syncInkPathForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncInklist:(id)arg0 ;
-(void)_syncInteriorColor:(id)arg0 ;
-(void)_syncLineEndingStyles:(id)arg0 ;
-(void)_syncLinePoints:(id)arg0 ;
-(void)_syncModificationDateForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncName:(id)arg0 ;
-(void)_syncOpen:(BOOL)arg0 ;
-(void)_syncPage:(id)arg0 ;
-(void)_syncParent:(id)arg0 ;
-(void)_syncPopup:(id)arg0 ;
-(void)_syncQuadding:(NSInteger)arg0 ;
-(void)_syncRect:(struct CGRect )arg0 ;
-(void)_syncStartPointForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncStrokeWidthForAnnotation:(id)arg0 withKey:(id)arg1 andNewValue:(id)arg2 ;
-(void)_syncSubtype:(id)arg0 ;
-(void)_syncTextLabel:(id)arg0 ;
-(void)_syncWidgetAppearance:(id)arg0 ;
-(void)_syncWidgetDefaultValue:(id)arg0 ;
-(void)_syncWidgetFieldFlags:(NSUInteger)arg0 ;
-(void)_syncWidgetFieldType:(id)arg0 ;
-(void)_syncWidgetMaxLen:(NSUInteger)arg0 ;
-(void)_syncWidgetOptions:(id)arg0 ;
-(void)_syncWidgetTextLabelUI:(id)arg0 ;
-(void)_syncWidgetValue:(id)arg0 ;
-(void)_teardown;
-(void)_updateDashedPatternForStrokeWidth:(CGFloat)arg0 isDashed:(BOOL)arg1 ;
-(void)dealloc;
-(void)didRemoveValueForAnnotationKey:(id)arg0 ;
-(void)didReplaceAllValuesWithNewDictionary:(id)arg0 andOldDictionary:(id)arg1 ;
-(void)didSetValue:(id)arg0 forAnnotationKey:(id)arg1 ;
-(void)invalidateAppearanceStream;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)teardown;


@end


#endif
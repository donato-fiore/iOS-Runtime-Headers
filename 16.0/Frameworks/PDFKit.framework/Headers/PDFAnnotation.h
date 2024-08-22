// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFANNOTATION_H
#define PDFANNOTATION_H

@class NSURL, NSDictionary, UIColor, NSString, NSArray, UIFont, NSDate;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "PDFAnnotationPrivateVars.h"
#import "PDFAction.h"
#import "PDFBorder.h"
#import "PDFDestination.h"
#import "PDFPage.h"
#import "PDFAnnotation.h"

@interface PDFAnnotation : NSObject <NSCopying, NSCoding>

 {
    PDFAnnotationPrivateVars *_private;
}


@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) PDFAction *action;
@property (nonatomic) NSInteger alignment;
@property (nonatomic) BOOL allowsToggleToOff;
@property (readonly, copy, nonatomic) NSDictionary *annotationKeyValues;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) PDFBorder *border;
@property (nonatomic) CGRect bounds;
@property (nonatomic) NSInteger buttonWidgetState;
@property (copy, nonatomic) NSString *buttonWidgetStateString;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSArray *choices;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic, getter=hasComb) BOOL comb;
@property (copy, nonatomic) NSString *contents;
@property (retain, nonatomic) PDFDestination *destination;
@property (nonatomic) NSInteger endLineStyle;
@property (nonatomic) CGPoint endPoint;
@property (copy, nonatomic) NSString *fieldName;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *fontColor;
@property (readonly, nonatomic) BOOL hasAppearanceStream;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) NSInteger iconType;
@property (copy, nonatomic) UIColor *interiorColor;
@property (readonly, nonatomic) BOOL isPasswordField;
@property (nonatomic, getter=isListChoice) BOOL listChoice;
@property (nonatomic) NSInteger markupType;
@property (nonatomic) NSInteger maximumLength;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) NSArray *paths;
@property (retain, nonatomic) PDFAnnotation *popup;
@property (copy, nonatomic) NSArray *quadrilateralPoints;
@property (nonatomic) BOOL radiosInUnison;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;
@property (nonatomic) BOOL shouldDisplay;
@property (nonatomic) BOOL shouldPrint;
@property (copy, nonatomic) NSString *stampName;
@property (nonatomic) NSInteger startLineStyle;
@property (nonatomic) CGPoint startPoint;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic) NSInteger widgetControlType;
@property (copy, nonatomic) NSString *widgetDefaultStringValue;
@property (copy, nonatomic) NSString *widgetFieldType;
@property (copy, nonatomic) NSString *widgetStringValue;


+(BOOL)PDFAnnotationIsHandledByPDFKit:(id)arg0 ;
+(BOOL)annotationPageLayerEffectIsFlipped;
+(NSInteger)MarkupTypeForMarkupStyle:(NSUInteger)arg0 ;
+(NSInteger)lineStyleFromName:(id)arg0 ;
+(id)PDFAnnotationKeysWithStringValues;
+(id)PDFFormFieldBackgroundColor;
+(id)PDFKitAnnotationKeys;
+(id)PDFKitAnnotationKeysIgnored;
+(id)PDFKitAnnotationUndoManagerDisplayNames;
+(id)PDFKitAppearanceDictionaryArray;
+(id)PDFKitBorderStyleArray;
+(id)PDFKitFieldTypeArray;
+(id)PDFKitHighlightingModeArray;
+(id)PDFMarkupColors;
+(id)PDFMarkupStyleLabels;
+(id)PDFTextBorderColors;
+(id)PDFTextColors;
+(id)PresentableStringForAnnotationKey:(id)arg0 ;
+(id)SubtypeForPDFMarkupStyle:(NSUInteger)arg0 ;
+(id)getProperNameStringFromString:(id)arg0 ;
+(id)nameForLineStyle:(NSInteger)arg0 ;
+(id)newPDFAnnotationFromAKAnnotation:(id)arg0 ;
+(void)setAnnotationPageLayerEffectIsFlipped:(BOOL)arg0 ;
-(*void)_sanitizeValue:(id)arg0 forKey:(id)arg1 ;
-(?)cgPathArray;
-(?)setCGPathArray;
-(BOOL)_annotationAllowsCommenting:(id)arg0 ;
-(BOOL)_boolValueForAnnotationFlag:(NSUInteger)arg0 withDefaultValue:(BOOL)arg1 ;
-(BOOL)_boolValueForWidgetFieldFlag:(NSUInteger)arg0 ;
-(BOOL)_isValidAnnotationKey:(id)arg0 ;
-(BOOL)_setArray:(id)arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)_setDictionary:(id)arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)_setInteger:(id)arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)_setString:(id)arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)_setVarious:(id)arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)_shouldReadAppearanceStreams;
-(BOOL)addDestinationToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)inFormFillingMode;
-(BOOL)isFullyConstructed;
-(BOOL)isHidden;
-(BOOL)isInvisible;
-(BOOL)isLocked;
-(BOOL)isMarkupAnnotation;
-(BOOL)isNoteAnnotation;
-(BOOL)isSelected;
-(BOOL)isSignature;
-(BOOL)isTextField;
-(BOOL)isTextMarkupAnnotation;
-(BOOL)isTextMarkupOrNoteAnnotation;
-(BOOL)isTextWidget;
-(BOOL)isTransparent;
-(BOOL)isWidgetOrMarkupAnnotation;
-(BOOL)noteContainsPoint:(struct CGPoint )arg0 ;
-(BOOL)pointerIsOverAnnotation;
-(BOOL)savesAppearanceStream;
-(BOOL)setBoolean:(BOOL)arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)setRect:(struct CGRect )arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)setValue:(id)arg0 forAnnotationKey:(id)arg1 ;
-(BOOL)shouldBurnIn;
-(BOOL)shouldComb;
-(BOOL)shouldExport;
-(BOOL)shouldNotRotate;
-(BOOL)shouldNotZoom;
-(BOOL)shouldToggleNoView;
-(CGFloat)pointSizeFromAppearanceTokens:(id)arg0 ;
-(CGFloat)scaleFactor;
-(NSInteger)priority;
-(NSUInteger)flags;
-(NSUInteger)markupStyle;
-(id)_PDFMarkupColorForColor:(id)arg0 ;
-(id)_PDFTextColorForColor:(id)arg0 ;
-(id)_accessibilityTypeString;
-(id)_createArrayForCGRect:(struct CGRect )arg0 ;
-(id)_createArrayForColor:(id)arg0 ;
-(id)_getFullFieldNameFromDictionary:(struct CGPDFDictionary *)arg0 ;
-(id)_selectionForMarkupAnnotation;
-(id)_textForValue:(id)arg0 ;
-(id)accessibilityNode;
-(id)akAnnotation;
-(id)akAnnotationAdaptor;
-(id)colorFromAppearanceTokens:(id)arg0 ;
-(id)control;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAttributedStringForTextWidget;
-(id)createDefaultAppearanceStringWithFont:(id)arg0 fontColor:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)displayName;
-(id)fontNameFromAppearanceTokens:(id)arg0 ;
-(id)formData;
-(id)getColorFromAppearanceNSString:(id)arg0 ;
-(id)getColorFromAppearanceString:(struct CGPDFString *)arg0 ;
-(id)getFontFromAppearanceNSString:(id)arg0 ;
-(id)getFontFromAppearanceString:(struct CGPDFString *)arg0 ;
-(id)getPDFKeyMappingDictionary;
-(id)indexSetForQuadPoints;
-(id)init;
-(id)initCommonWithBounds:(struct CGRect )arg0 ;
-(id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0 forPage:(id)arg1 ;
-(id)initWithBounds:(struct CGRect )arg0 forType:(id)arg1 withProperties:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 forPage:(id)arg1 ;
-(id)interactiveBackgroundColor;
-(id)layoutManager;
-(id)mouseDownAction;
-(id)mouseUpAction;
-(id)parent;
-(id)pathLock;
-(id)pdfAnnotationUUID;
-(id)replaceTextWidgetWithString:(id)arg0 ;
-(id)scaledFontForTextWidget;
-(id)textContentType;
-(id)textMarkupString;
-(id)textStorage;
-(id)tokenizeAppearanceString:(id)arg0 ;
-(id)toolTip;
-(id)valueForAnnotationKey:(id)arg0 ;
-(id)widgetOnStateString;
-(struct ? )_calculatePDFAnnotationLayerOutsetForAction:(int)arg0 ;
-(struct CGDisplayList *)cachedAppearance:(int)arg0 ;
-(struct CGPDFAnnotation *)CGPDFAnnotation;
-(struct CGPDFDictionary *)sourceDictionary;
-(struct CGPDFForm *)appearance:(int)arg0 ;
-(struct CGPath *)quadPointsPath;
-(struct CGPoint )_pointOutsetFrom:(struct CGPoint )arg0 startPoint1:(struct CGPoint )arg1 startPoint2:(struct CGPoint )arg2 lineWidth:(CGFloat)arg3 ;
-(struct CGRect )_drawingRectForLineStyle:(NSInteger)arg0 from:(struct CGPoint )arg1 to:(struct CGPoint )arg2 borderWidth:(CGFloat)arg3 ;
-(struct CGRect )extendedBoundsForAction:(int)arg0 ;
-(struct CGRect )noteBounds;
-(struct UIEdgeInsets )textInsets;
-(struct __CFDictionary *)commonCreateDictionaryRef;
-(struct __CFDictionary *)dictionaryRef;
-(struct __CFDictionary *)dictionaryRefExcludingParentOrPopup;
-(struct __CFDictionary *)gcCreateAttributesForFont:(id)arg0 color:(id)arg1 ;
-(void)_addAKAnnotationToDictionary:(struct __CFDictionary *)arg0 ;
-(void)_addUnknownPropertiesToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)_didRemoveValueForAnnotationKey:(id)arg0 ;
-(void)_didSetValue:(id)arg0 forAnnotationKey:(id)arg1 ;
-(void)_drawAnnotationWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)_generateFormFieldName;
-(void)_printDictionary:(id)arg0 atDepth:(int)arg1 ;
-(void)_releaseDictionaryRef;
-(void)_restorePropertiesAfterSetBounds;
-(void)_savePropertiesBeforeSetBounds;
-(void)_setBoolValue:(BOOL)arg0 forAnnotationFlag:(NSUInteger)arg1 ;
-(void)_setBoolValue:(BOOL)arg0 forWidgetFieldFlag:(NSUInteger)arg1 ;
-(void)addActionToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addAdditionalActionsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addAlternateFieldNameToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addAppearanceCharacteristicsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addAppearanceForKey:(struct __CFString *)arg0 toDictionaryRef:(struct __CFDictionary *)arg1 ;
-(void)addBezierPath:(id)arg0 ;
-(void)addBorderStyleToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addBorderToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addColor:(id)arg0 forKey:(struct __CFString *)arg1 toDictionaryRef:(struct __CFDictionary *)arg2 ;
-(void)addContentsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addDefaultAppearanceDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addDefaultFieldValueToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addFieldFlagsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addFieldNameToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addFieldTypeToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addFieldValueToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addFlagsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addHighlightingModeToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addInkListToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addLineEndingStylesToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addLineToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addMaxLenToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addModificationDateToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addNameToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addNormalAndDownAppearanceToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addNormalAndDownAppearanceWithStateToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addNormalAppearanceToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addNormalAppearanceWithStateToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addOpenToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addOptionsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addPageReferenceToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addPopupToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addQuadPointsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addQuaddingToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addRect:(struct CGRect )arg0 forKey:(struct __CFString *)arg1 toDictionaryRef:(struct __CFDictionary *)arg2 ;
-(void)addTextLabelToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addToPageView;
-(void)cacheAppearances;
-(void)commonInit;
-(void)dealloc;
-(void)drawAppearance:(struct CGPDFForm *)arg0 withBox:(NSInteger)arg1 inContext:(struct CGContext *)arg2 ;
-(void)drawAppearance:(struct CGPDFForm *)arg0 withBox:(NSInteger)arg1 inContext:(struct CGContext *)arg2 inRect:(struct CGRect )arg3 scaleProportional:(BOOL)arg4 ;
-(void)drawAppearance:(struct CGPDFForm *)arg0 withBox:(NSInteger)arg1 inContext:(struct CGContext *)arg2 scaleProportional:(BOOL)arg3 ;
-(void)drawCachedAppearance:(struct CGDisplayList *)arg0 withBox:(NSInteger)arg1 inContext:(struct CGContext *)arg2 inRect:(struct CGRect )arg3 scaleProportional:(BOOL)arg4 ;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getAppearancesFromDictionary:(struct CGPDFDictionary *)arg0 ofType:(int)arg1 ;
-(void)highlightRedaction:(BOOL)arg0 ;
-(void)postAnnotationsChangedNotification;
-(void)presentRedactionDiscoverabilityAlertWithOldValue:(id)arg0 forAnnotationKey:(id)arg1 ;
-(void)printDictionaryKeyValues;
-(void)releaseCGPathArray;
-(void)removeAKAnnotationAdaptor;
-(void)removeAllAppearanceStreams;
-(void)removeBezierPath:(id)arg0 ;
-(void)removeFromPageView;
-(void)removeValueForAnnotationKey:(id)arg0 ;
-(void)secondaryInit;
-(void)setAccessibilityNode:(id)arg0 ;
-(void)setAppearance:(struct CGPDFForm *)arg0 forType:(int)arg1 ;
-(void)setCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 ;
-(void)setControl:(id)arg0 ;
-(void)setDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)setForExport:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setInvisible:(BOOL)arg0 ;
-(void)setIsFullyConstructed:(BOOL)arg0 ;
-(void)setIsSelected:(BOOL)arg0 ;
-(void)setIsSignature:(BOOL)arg0 ;
-(void)setIsTransparent:(BOOL)arg0 ;
-(void)setLayoutManager:(id)arg0 ;
-(void)setLocked:(BOOL)arg0 ;
-(void)setMouseDownAction:(id)arg0 ;
-(void)setMouseUpAction:(id)arg0 ;
-(void)setPDFAnnotationDictionary:(id)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setPointerIsOverAnnotation:(BOOL)arg0 ;
-(void)setQuadPointsForIndexSet:(id)arg0 withUndo:(BOOL)arg1 ;
-(void)setSavesAppearanceStream:(BOOL)arg0 ;
-(void)setScaleFactor:(CGFloat)arg0 ;
-(void)setShouldBurnIn:(BOOL)arg0 ;
-(void)setShouldHideInteractiveBackgroundColor:(BOOL)arg0 ;
-(void)setShouldNotRotate:(BOOL)arg0 ;
-(void)setShouldNotZoom:(BOOL)arg0 ;
-(void)setShouldToggleNoView:(BOOL)arg0 ;
-(void)setTextInsets:(struct UIEdgeInsets )arg0 ;
-(void)setTextStorage:(id)arg0 ;
-(void)setWidgetOnStateString:(id)arg0 ;
-(void)setupAKAnnotationAdaptorIfNecessary;
-(void)updateAnnotationEffect;
-(void)updateFormData;


@end


#endif
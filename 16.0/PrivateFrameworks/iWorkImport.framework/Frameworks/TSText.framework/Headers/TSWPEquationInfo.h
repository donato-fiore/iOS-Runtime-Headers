// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPEQUATIONINFO_H
#define TSWPEQUATIONINFO_H

@class TSDImageInfo, NSString, EQKitEquation, TSSPropertyMap;
@protocol TSWPDrawableAttachmentDescriptionProvider, TSDDrawableInfoCustomUnarchivingSubclassProviding;



@interface TSWPEquationInfo : TSDImageInfo <TSWPDrawableAttachmentDescriptionProvider, TSDDrawableInfoCustomUnarchivingSubclassProviding>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat depth; // ivar: _depth
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EQKitEquation *equation; // ivar: _equation
@property (readonly, nonatomic) int format;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInlineForPreviewImage; // ivar: _isInlineForPreviewImage
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) TSSPropertyMap *textProperties; // ivar: _textProperties


+(BOOL)archiveHasEquationSource:(id)arg0 ;
+(Class)drawableInfoSubclassForClass:(Class)arg0 unarchiver:(id)arg1 ;
+(id)defaultTextProperties;
+(id)eqKitEquationWithWithContext:(id)arg0 source:(id)arg1 error:(*id)arg2 ;
+(id)equationInfoWithContext:(id)arg0 equationInfo:(id)arg1 textStorage:(id)arg2 charIndex:(NSUInteger)arg3 ;
+(id)equationInfoWithContext:(id)arg0 string:(id)arg1 textStorage:(id)arg2 charIndex:(NSUInteger)arg3 ;
+(id)filteredTextPropertiesFromTextProperties:(id)arg0 ;
+(id)fontNameFromTextProperties:(id)arg0 ;
+(id)pdfImageDataWithContext:(id)arg0 equation:(id)arg1 layout:(id)arg2 layoutContext:(id)arg3 sourceString:(id)arg4 ;
+(id)propertiesForChangePropagation;
+(id)propertiesForParagraphStyle:(id)arg0 characterStyle:(id)arg1 ;
+(id)propertiesForStorage:(id)arg0 characterIndex:(NSUInteger)arg1 ;
-(BOOL)canAdjustImage;
-(BOOL)canAnchor;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canBeMasked;
-(BOOL)canBeMediaPlaceholder;
-(BOOL)canChangeWrapType;
-(BOOL)canResetMediaSize;
-(BOOL)isSelectable;
-(BOOL)needsUpdateForStyleChangeToStorage:(id)arg0 charIndex:(NSUInteger)arg1 ;
-(BOOL)needsUpdateForStyleChangeToStorage:(id)arg0 charIndex:(NSUInteger)arg1 isAnchoredOrFloating:(BOOL)arg2 ;
-(BOOL)shouldGenerateThumbnails;
-(BOOL)supportsStyleInspecting;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)copyWithContext:(id)arg0 ;
-(id)descriptionForDrawableAttachment:(id)arg0 ;
-(id)imageDataWithObjectContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 string:(id)arg1 ;
-(id)initWithContext:(id)arg0 string:(id)arg1 filteredTextProperties:(id)arg2 equation:(id)arg3 pdfImageData:(id)arg4 depth:(CGFloat)arg5 geometry:(id)arg6 style:(id)arg7 ;
-(id)initWithContext:(id)arg0 string:(id)arg1 targetGeometry:(id)arg2 ;
-(id)initWithContext:(id)arg0 string:(id)arg1 textProperties:(id)arg2 ;
-(id)promisedDataForType:(id)arg0 ;
-(id)propertiesForParentAttachment;
-(id)typeName;
-(id)typesToPromiseWhenCopyingSingleDrawable;
-(struct CGSize )defaultOriginalSize;
-(struct CGSize )rawDataSize;
-(unsigned int)elementKind;
-(void)acceptVisitor:(id)arg0 ;
-(void)didFinalizeUnarchivingFromWPStorage:(id)arg0 ;
-(void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)rebuildEquationPDFIncludingGeometry:(BOOL)arg0 ;
-(void)replaceSourceWithNewSource:(id)arg0 ;
-(void)saveCharacterStylePropertiesFromPropertyMap:(id)arg0 toArchive:(*void)arg1 archiver:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)updateForStyleChangeToStorage:(id)arg0 charIndex:(NSUInteger)arg1 ;
-(void)updateForStyleChangeToStorage:(id)arg0 charIndex:(NSUInteger)arg1 isAnchoredOrFloating:(BOOL)arg2 ;
-(void)updateTextProperties:(id)arg0 ;
-(void)willChangeProperty:(int)arg0 ;


@end


#endif
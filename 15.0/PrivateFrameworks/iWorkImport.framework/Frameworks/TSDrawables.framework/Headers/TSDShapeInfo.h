// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSHAPEINFO_H
#define TSDSHAPEINFO_H

@class NSString, TSPObject<TSDOwningAttachment>;
@protocol TSDReducibleImageContainer, TSDMixing, TSKSearchable, TSDInfoWithPathSource, TSDCompatibilityAwareMediaContainer, TSDInfo;


#import "TSDStyledInfo.h"
#import "TSDShapeStyle.h"
#import "TSDFill.h"
#import "TSDInfoGeometry.h"
#import "TSDLineEnd.h"
#import "TSDPathSource.h"

@interface TSDShapeInfo : TSDStyledInfo <TSDReducibleImageContainer, TSDMixing, TSKSearchable, TSDInfoWithPathSource, TSDCompatibilityAwareMediaContainer>

 {
    TSDShapeStyle *mStyle;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSDFill *fill;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) TSDLineEnd *headLineEnd;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isFreehandDrawingSpacerShape;
@property (readonly, nonatomic) BOOL isTreatedAsFillForFreehandDrawing;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (retain, nonatomic) TSDPathSource *pathSource; // ivar: mPathSource
@property (readonly, nonatomic) TSDShapeStyle *shapeStyle;
@property (nonatomic) CGFloat strokePatternOffsetDistance; // ivar: mStrokePatternOffsetDistance
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsShrinkTextToFit;
@property (readonly, nonatomic) BOOL supportsTextInset;
@property (copy, nonatomic) TSDLineEnd *tailLineEnd;


-(BOOL)allowsCaption;
-(BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
-(BOOL)allowsTitle;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canCopyData;
-(BOOL)isAllowedInFreehandDrawings;
-(BOOL)isAutosizingTextBox;
-(BOOL)isLine;
-(BOOL)isOpenPath;
-(BOOL)isTailEndOnLeftFromTemporaryLayoutForPasteboard;
-(BOOL)isValidShapeToUnarchive;
-(BOOL)needsDownload;
-(BOOL)pathIsOpen;
-(BOOL)shouldBeIgnoredWhenCopying;
-(BOOL)shouldFlipLineEndsForStyle:(id)arg0 isStyleTailEndOnLeft:(int)arg1 ;
-(BOOL)supportsHyperlinks;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSInteger)mediaCompatibilityTypeForData:(id)arg0 associatedHint:(id)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)animationFilters;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)p_nameFromPathSource;
-(id)p_shapeLibraryUserDefinedName;
-(id)style;
-(id)typeName;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_correctLineSegmentGeometry;
-(void)p_correctNearZeroWidthLines;
-(void)p_recoverFromMissingStyleDuringUnarchivingIfNeededFromVersion:(NSUInteger)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)setValuesForProperties:(id)arg0 ;


@end


#endif
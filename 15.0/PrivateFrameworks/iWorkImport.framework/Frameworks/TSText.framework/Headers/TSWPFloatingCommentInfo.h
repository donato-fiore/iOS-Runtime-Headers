// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPFLOATINGCOMMENTINFO_H
#define TSWPFLOATINGCOMMENTINFO_H

@class TSDCommentStorage, NSString, TSKAnnotationAuthor, NSDate;
@protocol TSDComment;


#import "TSWPShapeInfo.h"

@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment>

 {
    TSDCommentStorage *_commentStorage;
}


@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) int annotationType;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) CGFloat commentScalingMultiplier;
@property (retain, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHighlight;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly) Class superclass;


+(id)bezierPathForExportCommentOutline;
+(id)commentInfoWithContext:(id)arg0 size:(struct CGSize )arg1 storage:(id)arg2 ;
+(id)commentParagraphStyleForStylesheet:(id)arg0 ;
+(id)commentParagraphStyleForStylesheet:(id)arg0 scalingMultiplier:(CGFloat)arg1 ;
+(id)commentParagraphStyleIdentifierForFontSize:(NSUInteger)arg0 ;
+(id)commentStyleIdentifier;
+(id)p_commentInfoWithContext:(id)arg0 geometry:(id)arg1 storage:(id)arg2 ;
+(id)p_commentParagraphStyleForStylesheet:(id)arg0 fontSize:(NSUInteger)arg1 ;
+(id)p_defaultCommentInfoStyleInStylesheet:(id)arg0 ;
+(id)p_defaultFill;
+(id)p_defaultPadding;
+(id)p_defaultShadow;
+(id)p_defaultStroke;
+(struct CGSize )commentInitialSizeWithContext:(id)arg0 ;
+(void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg0 ;
+(void)upgradeCommentInfoStorage:(id)arg0 ;
+(void)upgradeCommentInfoStyle:(id)arg0 ;
+(void)upgradeCommentParagraphStylesForStylesheet:(id)arg0 withCommentScale:(CGFloat)arg1 ;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)isAllowedInGroups;
-(BOOL)isFloatingComment;
-(BOOL)isInDocument;
-(BOOL)isLockable;
-(BOOL)supportsAttachedComments;
-(BOOL)supportsHyperlinks;
-(CGFloat)transformGeometryRatioForTransform:(struct CGAffineTransform )arg0 ;
-(Class)editorClass;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyWithContext:(id)arg0 ;
-(id)creationDateString;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 commentStorage:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 wpStorage:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 wpStorage:(id)arg4 commentStorage:(id)arg5 ;
-(id)pathSourceForExportCommentOutline;
-(id)typeName;
-(unsigned int)elementKind;
-(void)commentWillBeAddedToDocumentRoot;
-(void)enumerateAllAnnotationsInModelWithHitBlock:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDOCUMENTROOT_H
#define TSWPDOCUMENTROOT_H

@class TSKDocumentRoot, NSUUID, NSMutableSet, EQKitEnvironment, TSULocale;
@protocol TSWPObjectIndex, TSWPTOCController;



@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex>

 {
    NSUUID *_uuid;
    NSMutableSet *_ignoredWords;
}


@property (readonly, nonatomic, getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
@property (nonatomic) BOOL didRemoveMissingAttachments; // ivar: _didRemoveMissingAttachments
@property (readonly, nonatomic) EQKitEnvironment *equationEnvironment;
@property (nonatomic) BOOL laysOutBodyVertically;
@property (readonly, nonatomic) CGFloat stickyCommentScaleMultiplier;
@property (readonly, nonatomic) BOOL supportHeaderFooterParagraphAlignmentInInspectors;
@property (readonly, nonatomic) NSObject<TSWPTOCController> *tocInfoController; // ivar: _tocInfoController
@property (readonly, nonatomic) TSULocale *typesettingLocale;


-(BOOL)cellCommentsAllowedOnInfo:(id)arg0 ;
-(BOOL)containsVerticalText;
-(BOOL)has_30356142_build;
-(BOOL)isDrawableOnSectionTemplatePage:(id)arg0 ;
-(BOOL)isIgnoringWord:(id)arg0 ;
-(BOOL)isSectionModel:(id)arg0 ;
-(BOOL)isSectionTemplateInfo:(id)arg0 ;
-(BOOL)shouldHyphenate;
-(BOOL)textIsVerticalInStorage:(id)arg0 atCharIndex:(NSUInteger)arg1 ;
-(BOOL)useLigatures;
-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(CGFloat)bodyWidth;
-(NSInteger)fullyJustifiedAlignmentAtCharIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 ;
-(NSInteger)naturalAlignmentAtCharIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 ;
-(id)changeSessionManagerForModel:(id)arg0 ;
-(id)changeVisibility;
-(id)documentFonts;
-(id)documentId;
-(id)documentTSWPFontObjects;
-(id)flowInfoContainer;
-(id)ignoredWords;
-(id)p_fontsInStylesheetUsingBlock:(id)arg0 ;
-(id)unavailableDocumentFonts;
-(int)verticalAlignmentForTextStorage:(id)arg0 ;
-(struct __CFLocale *)hyphenationLocale;
-(void)addIgnoredWord:(id)arg0 ;
-(void)documentDidLoad;
-(void)fontUpdatedForStyleClient:(id)arg0 ;
-(void)removeIgnoredWord:(id)arg0 ;
-(void)willClose;


@end


#endif
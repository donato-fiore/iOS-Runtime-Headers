// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSECTION_H
#define TPSECTION_H

@class TSPObject, TSWPStorage, NSString, NSUUID, TSDFill, NSArray, NSURL;
@protocol TSDReducibleImageContainer, TSDReplaceableMediaContainer, TSKDocumentObject, TSKModel, TSWPSection;


#import "TPPageTemplate.h"

@interface TPSection : TSPObject <TSDReducibleImageContainer, TSDReplaceableMediaContainer, TSKDocumentObject, TSKModel, TSWPSection>

 {
    TPSectionTemplatePage" _sectionTemplatePages;
    TSWPStorage *_parentStorage;
    NSString *_name;
    NSUUID *_sectionHyperlinkUUID;
    BOOL _inheritPreviousHeaderFooter;
    unsigned int _sectionStartKind;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
}


@property (retain, nonatomic) TSDFill *backgroundFill; // ivar: _backgroundFill
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inheritPreviousHeaderFooter;
@property (readonly, nonatomic) NSString *localizedPrettyDisplayStringLong;
@property (readonly, nonatomic) NSString *localizedPrettyDisplayStringShort;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *pageInfosForPropagation;
@property (readonly, nonatomic) TPPageTemplate *pageTemplate;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (copy, nonatomic) NSUUID *sectionHyperlinkUUID;
@property (nonatomic) unsigned int sectionPageNumberKind;
@property (nonatomic) unsigned int sectionPageNumberStart;
@property (nonatomic) unsigned int sectionStartKind;
@property (nonatomic) BOOL sectionTemplateEvenOddPagesDifferent; // ivar: _sectionTemplateEvenOddPagesDifferent
@property (nonatomic) BOOL sectionTemplateFirstPageDifferent; // ivar: _sectionTemplateFirstPageDifferent
@property (nonatomic) BOOL sectionTemplateFirstPageHidesHeaderFooter; // ivar: _sectionTemplateFirstPageHidesHeaderFooter
@property (readonly, nonatomic) NSArray *sectionTemplatePages;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url;


+(BOOL)needsObjectUUID;
-(BOOL)isHeaderFooterEmpty:(NSInteger)arg0 ;
-(BOOL)isHeaderFooterVisible:(NSInteger)arg0 ;
-(BOOL)pageMasterEvenOddPagesDifferent;
-(BOOL)pageMasterFirstPageDifferent;
-(BOOL)pageMasterFirstPageHidesHeaderFooter;
-(id)allDrawables;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 section:(id)arg1 ;
-(id)objectUUIDPath;
-(id)sectionTemplatePageForType:(NSInteger)arg0 ;
-(id)sectionTemplatePageOwningInfo:(id)arg0 ;
-(id)sectionTemplatePageOwningModel:(id)arg0 ;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)i_clearPropertiesToDefaults;
-(void)i_copyHeadersAndFootersFrom:(id)arg0 dolcContext:(id)arg1 withBlock:(id)arg2 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_addAllDrawablesFromInfo:(id)arg0 toMutableArray:(id)arg1 ;
-(void)p_makeUserGuideStorage;
-(void)p_unarchiveAndUpgrade:(id)arg0 archive:(*void)arg1 ;
-(void)p_upgradePageSizeAndMarginsFromParsedArchive:(*void)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setSectionTemplatePageForFirstPage:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif
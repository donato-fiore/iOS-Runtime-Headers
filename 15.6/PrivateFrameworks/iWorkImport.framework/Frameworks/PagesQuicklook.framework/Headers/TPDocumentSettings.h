// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPDOCUMENTSETTINGS_H
#define TPDOCUMENTSETTINGS_H

@class TSPObject, NSString;



@interface TPDocumentSettings : TSPObject {
    BOOL _hasBody;
    BOOL _hasHeaders;
    BOOL _hasFooters;
    BOOL _hasFacingPages;
    BOOL _qlPreview;
    BOOL _copyMovies;
    BOOL _copyAssets;
    BOOL _placeholderAuthoring;
    BOOL _sectionAuthoring;
    BOOL _linksEnabled;
    BOOL _hyphenation;
    BOOL _ligatures;
    BOOL _tocLinksEnabled;
    BOOL _showCTMarkup;
    BOOL _showCTDeletions;
    BOOL _changeBarsVisible;
    BOOL _formatChangesVisible;
    BOOL _annotationsVisible;
    BOOL _documentIsRTL;
    NSInteger _footnoteKind;
    NSInteger _footnoteFormat;
    NSInteger _footnoteNumbering;
    NSInteger _footnoteGap;
    NSString *_decimalTab;
    NSString *_language;
    NSString *_hyphenationLanguage;
    NSString *_creationLocale;
    NSString *_originalTemplate;
    NSString *_creationDate;
    NSString *_bibliographyFormat;
}


@property (nonatomic) BOOL annotationsVisible;
@property (nonatomic) BOOL autoHyphenation;
@property (readonly, nonatomic) NSInteger basicFootnoteFormat;
@property (copy, nonatomic) NSString *bibliographyFormat;
@property (nonatomic) BOOL changeBarsVisible;
@property (nonatomic) BOOL copyMovies;
@property (nonatomic) BOOL copyTemplateAssets;
@property (copy, nonatomic) NSString *creationDate;
@property (copy, nonatomic) NSString *creationLocale;
@property (nonatomic) int ctBubblesVisibility; // ivar: _ctBubblesVisibility
@property (copy, nonatomic) NSString *decimalTab;
@property (nonatomic) BOOL documentIsRTL;
@property (nonatomic) NSInteger footnoteFormat;
@property (nonatomic) NSInteger footnoteGap;
@property (nonatomic) NSInteger footnoteKind;
@property (nonatomic) NSInteger footnoteNumbering;
@property (nonatomic) BOOL formatChangesVisible;
@property (nonatomic) BOOL hasBody;
@property (nonatomic) BOOL hasFacingPages;
@property (nonatomic) BOOL hasFooters;
@property (nonatomic) BOOL hasHeaders;
@property (nonatomic) BOOL hyperlinksEnabled;
@property (copy, nonatomic) NSString *hyphenationLanguage;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *originalTemplate;
@property (nonatomic) BOOL placeholderAuthoring;
@property (nonatomic) BOOL quickLookPreview;
@property (nonatomic) BOOL sectionAuthoring;
@property (nonatomic) BOOL showCTDeletions;
@property (nonatomic) BOOL showCTMarkup;
@property (nonatomic) BOOL tocLinksEnabled;
@property (nonatomic) BOOL useLigatures;


-(id)initWithContext:(id)arg0 ;
-(id)stringWithCurrentDate;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)resetForNewDocumentFromTemplate:(id)arg0 locale:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setCTBubblesVisibility:(int)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTRANSLATIONWEBPAGECONTENTEXTRACTOR_H
#define WBSTRANSLATIONWEBPAGECONTENTEXTRACTOR_H

@class WKWebView, NSMutableArray, NSString;
@protocol _WKTextManipulationDelegate, WBSTranslationContentExtracting, WBSTranslationContentFilling, WBSTranslationContentExtractionDelegate, WBSTranslationContentFillingDelegate;

#import <Foundation/Foundation.h>


@interface WBSTranslationWebpageContentExtractor : NSObject <_WKTextManipulationDelegate, WBSTranslationContentExtracting, WBSTranslationContentFilling>

 {
    BOOL _currentlyExtractingContent;
    BOOL _needsHTMLLangAttributeUpdate;
    WKWebView *_webView;
    os_unfair_lock_s _replaceItemsLock;
    NSMutableArray *_replaceItemsQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<WBSTranslationContentExtractionDelegate> *extractionDelegate; // ivar: _extractionDelegate
@property (weak, nonatomic) NSObject<WBSTranslationContentFillingDelegate> *fillingDelegate; // ivar: _fillingDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_textManipulationConfiguration;
-(id)initWithWebView:(id)arg0 ;
-(void)_replaceItemsWithSignpostID:(NSUInteger)arg0 ;
-(void)_scheduleReplaceItemsWithTargetLocale:(id)arg0 ;
-(void)_updateHTMLLanguageAttributesIfNeeded:(id)arg0 ;
-(void)_webView:(id)arg0 didFindTextManipulationItem:(id)arg1 ;
-(void)_webView:(id)arg0 didFindTextManipulationItems:(id)arg1 ;
-(void)beginExtractingContent;
-(void)replaceExtractedContent:(id)arg0 withTranslatedContent:(id)arg1 targetLocale:(id)arg2 ;
-(void)stopExtractingContent;


@end


#endif
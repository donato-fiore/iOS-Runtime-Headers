// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRLANGUAGERESOURCES_H
#define CRLANGUAGERESOURCES_H

@class CVNLPLanguageResourceBundle, NSLocale;

#import <Foundation/Foundation.h>


@interface CRLanguageResources : NSObject

@property (retain) CVNLPLanguageResourceBundle *_cvnlpLanguageResourceBundle; // ivar: __cvnlpLanguageResourceBundle
@property (readonly, nonatomic) *CVNLPLanguageModel cvnlpCharacterLanguageModel; // ivar: _cvnlpCharacterLanguageModel
@property (readonly, nonatomic) *void lmCharacterLanguageModel; // ivar: _lmCharacterLanguageModel
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon
@property (readonly, nonatomic) *void wordLanguageModel; // ivar: _wordLanguageModel


+(*void)createCharacterModel:(id)arg0 ;
+(*void)createWordLanguageModel:(id)arg0 ;
+(BOOL)isCustomWordsSupportedForLanguageIdentifier:(id)arg0 ;
+(BOOL)isLanguageSupported:(id)arg0 ;
+(struct CVNLPLanguageModel *)createCVNLPCharacterLanguageModel:(id)arg0 ;
+(struct _LXLexicon *)createStaticLexicon:(id)arg0 ;
-(id)cvnlpLanguageResourceBundle:(id)arg0 ;
-(id)initWithLanguageIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif
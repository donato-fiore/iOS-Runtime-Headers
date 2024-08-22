// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDEFINITIONDICTIONARY_H
#define _UIDEFINITIONDICTIONARY_H

@class MAAsset, NSString;

#import <Foundation/Foundation.h>


@interface _UIDefinitionDictionary : NSObject {
    *__DCSDictionary _dictionary;
}


@property BOOL activated; // ivar: _activated
@property (retain) MAAsset *assetToUpgrade; // ivar: _assetToUpgrade
@property (readonly) NSString *definitionLanguage; // ivar: _definitionLanguage
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) MAAsset *rawAsset; // ivar: _rawAsset


+(id)_normalizedLanguageStringForLanguageCode:(id)arg0 ;
-(BOOL)_hasDefinitionForTerm:(id)arg0 ;
-(BOOL)_isTTYDictionary;
-(BOOL)assetIsDeletable;
-(BOOL)assetIsLocal;
-(id)_HTMLDefinitionForTerm:(id)arg0 type:(NSInteger)arg1 ;
-(id)_attributedDefinitionForTerm:(id)arg0 ;
-(id)_definitionValueForTerm:(id)arg0 ;
-(id)_fullHTMLDefinitionForTerm:(id)arg0 ;
-(id)_shortHTMLDefinitionForTerm:(id)arg0 ;
-(id)description;
-(id)initWithAsset:(id)arg0 ;
-(void)dealloc;
-(void)updateAsset;


@end


#endif
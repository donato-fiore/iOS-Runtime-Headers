// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DUDEFINITIONDICTIONARY_H
#define DUDEFINITIONDICTIONARY_H

@class MAAsset, NSString;

#import <Foundation/Foundation.h>


@interface DUDefinitionDictionary : NSObject {
    *__DCSDictionary _dictionary;
    MAAsset *_assetToUpgrade;
}


@property (nonatomic) BOOL activated; // ivar: _activated
@property (readonly) NSString *definitionLanguage; // ivar: _definitionLanguage
@property (readonly) *__DCSDictionary dictionaryRef;
@property BOOL isAppleDictionary; // ivar: _isAppleDictionary
@property BOOL isTTYDictionary; // ivar: _isTTYDictionary
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) NSString *localizedSortName;
@property (readonly) BOOL needsDownloadNewerVersion;
@property NSInteger preferredOrder; // ivar: _preferredOrder
@property float progress; // ivar: _progress
@property (readonly) MAAsset *rawAsset; // ivar: _rawAsset


+(id)displayNameForLanguageIdentifier:(id)arg0 ;
-(BOOL)_hasDefinitionForTerm:(id)arg0 ;
-(id)_definitionValueForTerm:(id)arg0 ;
-(id)description;
-(id)initWithAsset:(id)arg0 ;
-(void)dealloc;
-(void)setAssetToUpgrade:(id)arg0 ;


@end


#endif
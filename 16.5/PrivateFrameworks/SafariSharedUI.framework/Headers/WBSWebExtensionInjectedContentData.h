// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONINJECTEDCONTENTDATA_H
#define WBSWEBEXTENSIONINJECTEDCONTENTDATA_H

@class NSString, NSArray, NSSet, NSMutableSet;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionInjectedContentData : NSObject

@property (readonly, copy, nonatomic) NSString *contentScriptID; // ivar: _contentScriptID
@property (readonly, nonatomic) NSArray *excludeGlobPatternStrings; // ivar: _excludeGlobPatternStrings
@property (readonly, nonatomic) NSArray *excludeMatchPatternStrings; // ivar: _excludeMatchPatternStrings
@property (readonly, nonatomic) NSSet *excludeMatchPatterns; // ivar: _excludeMatchPatterns
@property (readonly, nonatomic) NSArray *includeGlobPatternStrings; // ivar: _includeGlobPatternStrings
@property (readonly, nonatomic) NSArray *includeMatchPatternStrings; // ivar: _includeMatchPatternStrings
@property (readonly, nonatomic) NSSet *includeMatchPatterns; // ivar: _includeMatchPatterns
@property (readonly, nonatomic) NSInteger injectionTime; // ivar: _injectionTime
@property (readonly, nonatomic) BOOL injectsIntoAllFrames; // ivar: _injectsIntoAllFrames
@property (readonly, nonatomic) BOOL isForMainWorld; // ivar: _isForMainWorld
@property (readonly, nonatomic) BOOL matchesAboutBlank; // ivar: _matchesAboutBlank
@property (readonly, nonatomic) BOOL persistAcrossLaunchesOfSafari; // ivar: _persistAcrossLaunchesOfSafari
@property (copy, nonatomic) NSArray *scriptContents; // ivar: _scriptContents
@property (readonly, nonatomic) NSArray *scriptPaths; // ivar: _scriptPaths
@property (copy, nonatomic) NSArray *styleSheetContents; // ivar: _styleSheetContents
@property (readonly, nonatomic) NSArray *styleSheetPaths; // ivar: _styleSheetPaths
@property (readonly, copy, nonatomic) NSArray *unexpandedExcludeMatchPatternStrings; // ivar: _unexpandedExcludeMatchPatternStrings
@property (readonly, copy, nonatomic) NSArray *unexpandedIncludeMatchPatternStrings; // ivar: _unexpandedIncludeMatchPatternStrings
@property (readonly, copy, nonatomic) NSMutableSet *userScripts; // ivar: _userScripts
@property (readonly, copy, nonatomic) NSMutableSet *userStyleSheets; // ivar: _userStyleSheets


+(id)supportedInjectedContentFeatures;
-(BOOL)_parseDictionaryContainingContentScriptDetails:(id)arg0 extensionIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithManifestDictionary:(id)arg0 extensionIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithPersistentContentScriptDetails:(id)arg0 extensionIdentifier:(id)arg1 errorMessage:(*id)arg2 ;
-(void)_validateExtensionResources:(id)arg0 forExtensionWithIdentifier:(id)arg1 errorMessage:(*id)arg2 ;
-(void)addWKUserScript:(id)arg0 ;
-(void)addWKUserStyleSheet:(id)arg0 ;
-(void)removeWKUserScripts;
-(void)removeWKUserStyleSheets;


@end


#endif
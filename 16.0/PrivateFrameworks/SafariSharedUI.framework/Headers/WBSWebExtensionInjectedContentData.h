// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONINJECTEDCONTENTDATA_H
#define WBSWEBEXTENSIONINJECTEDCONTENTDATA_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionInjectedContentData : NSObject

@property (readonly, nonatomic) NSArray *excludeGlobPatternStrings; // ivar: _excludeGlobPatternStrings
@property (readonly, nonatomic) NSArray *excludeMatchPatternStrings; // ivar: _excludeMatchPatternStrings
@property (readonly, nonatomic) NSSet *excludeMatchPatterns; // ivar: _excludeMatchPatterns
@property (readonly, nonatomic) NSArray *includeGlobPatternStrings; // ivar: _includeGlobPatternStrings
@property (readonly, nonatomic) NSArray *includeMatchPatternStrings; // ivar: _includeMatchPatternStrings
@property (readonly, nonatomic) NSSet *includeMatchPatterns; // ivar: _includeMatchPatterns
@property (readonly, nonatomic) NSInteger injectionTime; // ivar: _injectionTime
@property (readonly, nonatomic) BOOL injectsIntoAllFrames; // ivar: _injectsIntoAllFrames
@property (readonly, nonatomic) BOOL matchesAboutBlank; // ivar: _matchesAboutBlank
@property (copy, nonatomic) NSArray *scriptContents; // ivar: _scriptContents
@property (readonly, nonatomic) NSArray *scriptPaths; // ivar: _scriptPaths
@property (copy, nonatomic) NSArray *styleSheetContents; // ivar: _styleSheetContents
@property (readonly, nonatomic) NSArray *styleSheetPaths; // ivar: _styleSheetPaths


+(id)supportedInjectedContentFeatures;
-(BOOL)_parseManifestDictionary:(id)arg0 extensionIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithManifestDictionary:(id)arg0 extensionIdentifier:(id)arg1 error:(*id)arg2 ;


@end


#endif
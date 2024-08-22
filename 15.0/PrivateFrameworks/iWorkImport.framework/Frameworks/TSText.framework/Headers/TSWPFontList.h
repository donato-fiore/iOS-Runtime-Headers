// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPFONTLIST_H
#define TSWPFONTLIST_H

@class NSMutableArray, NSSet, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface TSWPFontList : NSObject

@property (retain) NSMutableArray *cachedAvailableFamilyFonts; // ivar: _cachedAvailableFamilyFonts
@property (retain) NSSet *downloadedFonts; // ivar: _downloadedFonts
@property (copy, nonatomic) id *fontPropertyResolver; // ivar: _fontPropertyResolver
@property (retain) NSDictionary *knownFontFamilyFaces; // ivar: _knownFontFamilyFaces
@property (retain) NSDictionary *knownFonts; // ivar: _knownFonts
@property (readonly) NSArray *recentBaseFonts;
@property (retain) NSArray *recentFontNames; // ivar: _recentFontNames


+(id)excludedFamilyNames;
+(id)sharedInstance;
-(id)availableFontDescriptorsForAllFamilies;
-(id)availableFontFamilies;
-(id)baseFontWithDescriptor:(id)arg0 ;
-(id)cacheKeyForFontDescriptor:(id)arg0 ;
-(id)cacheKeyForFontWithPostScriptName:(id)arg0 atSize:(CGFloat)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(id)cachedFacesOfFontFamily:(id)arg0 ;
-(id)description;
-(id)familiesForFontsInCollection:(struct __CTFontCollection *)arg0 ;
-(id)familyNameFromFontDescriptor:(struct __CTFontDescriptor *)arg0 ;
-(id)fontFacesForFontFamily:(id)arg0 ;
-(id)fontForKey:(id)arg0 ;
-(id)fontForPostscriptName:(id)arg0 ;
-(id)fontForPostscriptName:(id)arg0 atSize:(CGFloat)arg1 ;
-(id)fontForPostscriptName:(id)arg0 atSize:(CGFloat)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(id)fontForStyles:(id)arg0 ;
-(id)fontFromStyle:(id)arg0 ;
-(id)fontsForAvailableFamilies;
-(id)init;
-(id)normalizeChangedFontUrlsToStrings:(id)arg0 forKey:(id)arg1 ;
-(id)postScriptNameForFamilyName:(id)arg0 ;
-(id)sortedFontFamilies;
-(id)sortedFontsInStylesheet:(id)arg0 ;
-(void)cacheFaces:(id)arg0 forFontFamily:(id)arg1 ;
-(void)cacheFont:(id)arg0 forPostScriptName:(id)arg1 atSize:(CGFloat)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4 ;
-(void)cacheFont:(id)arg0 withKey:(id)arg1 ;
-(void)downloadableFontsChanged:(id)arg0 ;
-(void)dropFontsWithPSNamesInSet:(id)arg0 ;
-(void)fontsChanged:(id)arg0 ;
-(void)loadRecentFonts;
-(void)registerDownloadedFontPostScriptNames:(id)arg0 ;
-(void)registerRecentFont:(id)arg0 ;
-(void)reset;
-(void)saveRecentFontNames:(id)arg0 ;


@end


#endif
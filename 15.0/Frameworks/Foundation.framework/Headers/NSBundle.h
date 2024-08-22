// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBUNDLE_H
#define NSBUNDLE_H

@class NSMutableDictionary, NSURL, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSBundle : NSObject {
    NSUInteger _flags;
    ? _cfBundle;
    NSMutableDictionary *_attributedStringTable;
    Class _principalClass;
    id *_initialPath;
    id *_resolvedPath;
    NSString *_firstClassName;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSURL *appStoreReceiptURL;
@property (readonly, copy) NSString *builtInPlugInsPath;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *developmentLocalization;
@property (readonly, copy) NSArray *executableArchitectures;
@property (readonly, copy) NSString *executablePath;
@property (readonly, copy) NSURL *executableURL;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) NSArray *localizations;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class principalClass;
@property (readonly, copy) NSString *privateFrameworksPath;
@property (readonly, copy) NSURL *privateFrameworksURL;
@property (readonly, copy) NSString *resourcePath;
@property (readonly, copy) NSURL *resourceURL;
@property (readonly, copy) NSString *sharedFrameworksPath;
@property (readonly, copy) NSURL *sharedFrameworksURL;
@property (readonly, copy) NSString *sharedSupportPath;
@property (readonly, copy) NSURL *sharedSupportURL;


+(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
+(id)URLsForResourcesWithExtension:(id)arg0 subdirectory:(id)arg1 inBundleWithURL:(id)arg2 ;
+(id)_bundleWithIdentifier:(id)arg0 andLibraryName:(id)arg1 ;
+(id)allBundles;
+(id)allFrameworks;
+(id)bundleForClass:(Class)arg0 ;
+(id)bundleWithIdentifier:(id)arg0 ;
+(id)bundleWithPath:(id)arg0 ;
+(id)bundleWithURL:(id)arg0 ;
+(id)debugDescription;
+(id)findBundleResourceURLsCallingMethod:(SEL)arg0 baseURL:(id)arg1 passingTest:(id)arg2 ;
+(id)findBundleResources:(id)arg0 callingMethod:(SEL)arg1 directory:(id)arg2 languages:(id)arg3 name:(id)arg4 types:(id)arg5 limit:(NSUInteger)arg6 ;
+(id)loadedBundles;
+(id)mainBundle;
+(id)pathForResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
+(id)pathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 ;
+(id)preferredLocalizationsFromArray:(id)arg0 ;
+(id)preferredLocalizationsFromArray:(id)arg0 forPreferences:(id)arg1 ;
+(void)setSystemLanguages:(id)arg0 ;
-(BOOL)_searchForLocalizedString:(id)arg0 foundKey:(*id)arg1 foundTable:(*id)arg2 ;
-(BOOL)load;
-(BOOL)loadAndReturnError:(*id)arg0 ;
-(BOOL)preflightAndReturnError:(*id)arg0 ;
-(BOOL)unload;
-(CGFloat)preservationPriorityForTag:(id)arg0 ;
-(Class)classNamed:(id)arg0 ;
-(NSUInteger)versionNumber;
-(id)URLForAuxiliaryExecutable:(id)arg0 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3 ;
-(id)URLsForResourcesWithExtension:(id)arg0 subdirectory:(id)arg1 ;
-(id)URLsForResourcesWithExtension:(id)arg0 subdirectory:(id)arg1 localization:(id)arg2 ;
-(id)_localizedStringNoCacheNoMarkdownParsingForKey:(id)arg0 value:(id)arg1 table:(id)arg2 localization:(id)arg3 actualTableURL:(*id)arg4 formatSpecifierConfiguration:(*id)arg5 ;
-(id)_pathForResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3 ;
-(id)_pathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 forRegion:(id)arg2 ;
-(id)_regionsArray;
-(id)_wrappedBundleURL;
-(id)_wrapperContainerURL;
-(id)bundleLanguages;
-(id)description;
-(id)findBundleResourceURLsCallingMethod:(SEL)arg0 passingTest:(id)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)localizedAttributedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(id)localizedAttributedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 localization:(id)arg3 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 localization:(id)arg3 ;
-(id)objectForInfoDictionaryKey:(id)arg0 ;
-(id)pathForAuxiliaryExecutable:(id)arg0 ;
-(id)pathForResource:(id)arg0 ofType:(id)arg1 ;
-(id)pathForResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
-(id)pathForResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3 ;
-(id)pathForResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3 ;
-(id)pathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 ;
-(id)pathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 forLanguage:(id)arg2 ;
-(id)pathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 forLocalization:(id)arg2 ;
-(struct __CFBundle *)_cfBundle;
-(struct __CFBundle *)_cfBundleIfPresent;
-(void)__static;
-(void)dealloc;
-(void)invalidateResourceCache;
-(void)setPreservationPriority:(CGFloat)arg0 forTag:(id)arg1 ;
-(void)setPreservationPriority:(CGFloat)arg0 forTags:(id)arg1 ;


@end


#endif
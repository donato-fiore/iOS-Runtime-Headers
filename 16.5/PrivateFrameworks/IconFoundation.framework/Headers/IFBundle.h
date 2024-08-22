// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IFBUNDLE_H
#define IFBUNDLE_H

@class NSURL, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IFBundle : NSObject

@property (readonly, copy) NSURL *assetCatalogURL;
@property *__CFBundle bundle; // ivar: _bundle
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, getter=isCoreTypes) BOOL coreTypes; // ivar: _coreTypes
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly, copy) NSDictionary *infoDictionary;


+(id)appIconOverrideBundle;
+(id)bundleWithURL:(id)arg0 ;
+(id)coreGlyphsBundle;
+(id)coreGlyphsPrivateBundle;
+(id)coreTypesBundle;
+(id)frameworkBundle;
+(id)frameworkLocalizedString:(id)arg0 ;
+(id)iconFoundationFrameworkBundle;
+(id)iconsetResourceAssetsCatalogURL;
+(id)iconsetResourceBundle;
+(id)mainBundle;
+(id)mobileIconsFrameworkBundle;
-(id)URLForResource:(id)arg0 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)URLsForResourcesWithExtension:(id)arg0 subdirectory:(id)arg1 ;
-(id)initWithCFBundle:(struct __CFBundle *)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBEXTENSION_H
#define _WKWEBEXTENSION_H

@class NSSet, NSString, NSLocale, NSArray, NSDictionary;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKWebExtension : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebExtension> _webExtension;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) BOOL _backgroundContentIsServiceWorker;
@property (readonly, nonatomic) BOOL _backgroundContentUsesModules;
@property (readonly, nonatomic) *void _webExtension;
@property (readonly, copy, nonatomic) NSSet *allRequestedMatchPatterns;
@property (readonly, nonatomic) BOOL backgroundContentIsPersistent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSLocale *defaultLocale;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayActionLabel;
@property (readonly, copy, nonatomic) NSString *displayDescription;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayShortName;
@property (readonly, copy, nonatomic) NSString *displayVersion;
@property (readonly, copy, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BOOL hasBackgroundContent;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) CGFloat manifestVersion;
@property (readonly, copy, nonatomic) NSSet *optionalPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *optionalPermissions;
@property (readonly, copy, nonatomic) NSSet *requestedPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *requestedPermissions;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *version;


+(id)extensionWithAppExtensionBundle:(id)arg0 ;
+(id)extensionWithResourceBaseURL:(id)arg0 ;
-(BOOL)_hasStaticInjectedContentForURL:(id)arg0 ;
-(BOOL)supportsManifestVersion:(CGFloat)arg0 ;
-(id)_initWithManifestDictionary:(id)arg0 ;
-(id)_initWithManifestDictionary:(id)arg0 resources:(id)arg1 ;
-(id)_initWithResources:(id)arg0 ;
-(id)actionIconForSize:(struct CGSize )arg0 ;
-(id)iconForSize:(struct CGSize )arg0 ;
-(id)initWithAppExtensionBundle:(id)arg0 error:(*id)arg1 ;
-(id)initWithResourceBaseURL:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif
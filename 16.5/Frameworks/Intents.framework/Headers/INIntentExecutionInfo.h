// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ININTENTEXECUTIONINFO_H
#define ININTENTEXECUTIONINFO_H

@class NSArray, NSString;


#import "INExecutionInfo.h"

@interface INIntentExecutionInfo : INExecutionInfo {
    NSArray *_extensions;
    NSArray *_uiExtensions;
}


@property (readonly, nonatomic) BOOL hasCustomUIExtension;
@property (readonly, copy, nonatomic) NSString *intentClassName; // ivar: _intentClassName
@property (readonly, nonatomic) NSInteger preferredCallProvider; // ivar: _preferredCallProvider
@property (readonly, copy, nonatomic) NSString *uiExtensionBundleId; // ivar: _uiExtensionBundleId


+(void)initialize;
-(BOOL)canRunOnLocalDevice;
-(id)_extensionsWithError:(*id)arg0 ;
-(id)_initWithIntentClassName:(id)arg0 preferredCallProvider:(NSInteger)arg1 launchableAppBundleId:(id)arg2 displayableAppBundleId:(id)arg3 extensionBundleId:(id)arg4 uiExtensionBundleId:(id)arg5 containingAppBundleURL:(id)arg6 ;
-(id)_matchingAttributesForExtensionPoint:(id)arg0 error:(*id)arg1 ;
-(id)_uiExtensionsWithError:(*id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithIntentClassName:(id)arg0 extensionBundleId:(id)arg1 ;
-(id)initWithIntentClassName:(id)arg0 launchableAppBundleId:(id)arg1 ;
-(id)initWithIntentTypeName:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INEXECUTIONFRAMEWORKMAPPER_H
#define INEXECUTIONFRAMEWORKMAPPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface INExecutionFrameworkMapper : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *_appToExtensionIdentifiers; // ivar: _appToExtensionIdentifiers
@property (readonly, nonatomic) BOOL _filled; // ivar: _filled
@property (readonly, nonatomic) os_unfair_lock_s _lock; // ivar: _lock


+(void)initialize;
-(id)appBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg0 ;
-(id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg0 ;
-(id)extensionBundleIdentifiersForSystemAppIdentifier:(id)arg0 ;
-(id)init;
-(id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg0 ;
-(void)_addExtensionBundleIdentifier:(id)arg0 forAppBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)installedApplicationsDidChange:(id)arg0 ;
-(void)loadSystemExtensionInformation;
-(void)reset;


@end


#endif
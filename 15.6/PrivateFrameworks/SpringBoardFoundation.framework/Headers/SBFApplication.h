// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFAPPLICATION_H
#define SBFAPPLICATION_H

@class SBSApplicationShortcutService, SBSApplicationShortcutServiceFetchResult, NSNumber, NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface SBFApplication : NSObject {
    SBSApplicationShortcutService *_applicationShortcutService;
    SBSApplicationShortcutServiceFetchResult *_applicationShortcutServiceFetchResult;
    CGFloat _applicationShortcutServiceFetchResultExpirationReferenceTime;
}


@property (readonly, nonatomic) NSNumber *appStoreItemID; // ivar: _appStoreItemID
@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // ivar: _applicationShortcutWidgetBundleIdentifier
@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property (readonly, nonatomic) NSArray *staticApplicationShortcutItems;
@property (readonly, nonatomic, getter=isSystemOrInternalApplication) BOOL systemOrInternalApplication; // ivar: _systemOrInternalApplication


-(id)init;
-(id)initWithApplicationBundleIdentifier:(id)arg0 ;
-(void)_updateApplicationShortcutServiceFetchResult;
-(void)dealloc;


@end


#endif
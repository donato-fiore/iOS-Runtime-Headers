// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INEXECUTIONINFO_H
#define INEXECUTIONINFO_H

@class LSApplicationRecord, NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "INAppInfo.h"

@interface INExecutionInfo : NSObject <NSCopying>



@property (readonly, nonatomic) INAppInfo *_appInfo; // ivar: _appInfo
@property (readonly, nonatomic) LSApplicationRecord *_applicationRecord;
@property (readonly, nonatomic) BOOL canRunOnLocalDevice;
@property (readonly, copy, nonatomic) NSURL *containingAppBundleURL; // ivar: _containingAppBundleURL
@property (readonly, copy, nonatomic) NSString *displayableAppBundleId; // ivar: _displayableAppBundleId
@property (readonly, copy, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (readonly, copy, nonatomic) NSString *launchableAppBundleId; // ivar: _launchableAppBundleId


+(void)initialize;
-(id)_initWithLaunchableAppBundleId:(id)arg0 displayableAppBundleId:(id)arg1 containingAppBundleURL:(id)arg2 extensionBundleId:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
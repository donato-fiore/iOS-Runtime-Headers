// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFAPP_H
#define CSLPRFAPP_H

@class LSApplicationRecord, NSString, NSURL, BBSectionInfo, NSArray;
@protocol CSLPRFApplication;

#import <Foundation/Foundation.h>


@interface CSLPRFApp : NSObject <CSLPRFApplication>

 {
    LSApplicationRecord *_lock_applicationRecord;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *SDKVersion; // ivar: _SDKVersion
@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, weak, nonatomic) LSApplicationRecord *applicationRecord; // ivar: _applicationRecord
@property (readonly, nonatomic) BBSectionInfo *bbSectionInfo; // ivar: _bbSectionInfo
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSArray *counterpartIdentifiers; // ivar: _counterpartIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL defaultsToPrivateAlwaysOnDisplayTreatment; // ivar: _defaultsToPrivateAlwaysOnDisplayTreatment
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBBSourcedApplication; // ivar: _isBBSourcedApplication
@property (readonly, nonatomic) BOOL isRemovedSystemApp; // ivar: _isRemovedSystemApp
@property (readonly, nonatomic, getter=isLocal) BOOL local; // ivar: _local
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sdkVersion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAlwaysOnDisplay; // ivar: _supportsAlwaysOnDisplay


+(id)appWithACXRemoteApplication:(id)arg0 ;
+(id)appWithApplicationRecord:(id)arg0 ;
+(id)appWithBBSectionInfo:(id)arg0 ;
+(id)appWithBundleID:(id)arg0 name:(id)arg1 sdkVersion:(id)arg2 supportsAlwaysOnDisplay:(BOOL)arg3 defaultsToPrivateAlwaysOnDisplayTreatment:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 localizedName:(id)arg1 sdkVersion:(id)arg2 supportsAlwaysOnDisplay:(BOOL)arg3 defaultsToPrivateAlwaysOnDisplayTreatment:(BOOL)arg4 applicationRecord:(id)arg5 bbSectionInfo:(id)arg6 ;


@end


#endif
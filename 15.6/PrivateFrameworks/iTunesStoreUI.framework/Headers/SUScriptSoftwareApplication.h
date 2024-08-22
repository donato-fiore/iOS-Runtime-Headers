// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTSOFTWAREAPPLICATION_H
#define SUSCRIPTSOFTWAREAPPLICATION_H

@class ISSoftwareApplication, NSNumber, NSString;


#import "SUScriptObject.h"

@interface SUScriptSoftwareApplication : SUScriptObject {
    ISSoftwareApplication *_application;
}


@property (readonly) NSNumber *adamID;
@property (readonly) NSString *bundleID;
@property (readonly) NSString *bundleShortVersionString;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSNumber *dsID;
@property (readonly) NSString *environmentProduction;
@property (readonly) NSString *environmentSandbox;
@property (readonly) NSInteger launchResultApplicationDisabled;
@property (readonly) NSInteger launchResultApplicationNotFound;
@property (readonly) NSInteger launchResultInvalidArgument;
@property (readonly) NSInteger launchResultLaunchOrSuspendInProgress;
@property (readonly) NSInteger launchResultLocked;
@property (readonly) NSInteger launchResultLockedOut;
@property (readonly) NSInteger launchResultSecurityPolicy;
@property (readonly) NSInteger launchResultSpringBoardUnavailable;
@property (readonly) NSInteger launchResultSuccess;
@property (readonly) NSInteger launchResultSyncing;
@property (readonly) NSNumber *ratingRank;
@property (readonly) NSString *ratingSystem;
@property (readonly) NSString *softwareType;
@property (readonly) NSString *softwareTypeNewsstand;
@property (readonly) NSString *storeFrontID;
@property (readonly) NSNumber *versionID;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(NSInteger)launchWithURL:(id)arg0 options:(id)arg1 suspended:(id)arg2 ;
-(id)_className;
-(id)attributeKeys;
-(id)initWithApplication:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)checkInAppPurchaseQueueWithAccountID:(id)arg0 environment:(id)arg1 ;
-(void)dealloc;


@end


#endif
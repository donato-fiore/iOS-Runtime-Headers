// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSMSPLATFORM_H
#define MSMSPLATFORM_H

@class ACAccountStore, NSString, NSData;
@protocol MSPlatform;

#import <Foundation/Foundation.h>


@interface MSMSPlatform : NSObject <MSPlatform>



@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPerfLoggingEnabled; // ivar: _isPerfLoggingEnabled
@property (retain, nonatomic) NSData *pushToken; // ivar: _pushToken
@property (readonly) Class superclass;


+(id)thePlatform;
-(BOOL)_mayPerformFileTransfer;
-(BOOL)isPerformanceLoggingEnabled;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg0 ;
-(BOOL)policyMayDownload;
-(BOOL)policyMayUpload;
-(BOOL)shouldEnableNewFeatures;
-(BOOL)shouldLogAtLevel:(int)arg0 ;
-(Class)deletePluginClass;
-(Class)pluginClass;
-(Class)publisherPluginClass;
-(Class)subscriberPluginClass;
-(id)OSString;
-(id)OSVersion;
-(id)UDID;
-(id)_accountForPersonID:(id)arg0 ;
-(id)appBundleInfoString;
-(id)authTokenForPersonID:(id)arg0 ;
-(id)baseURLForPersonID:(id)arg0 ;
-(id)contentURLForPersonID:(id)arg0 ;
-(id)fullNameFromFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)hardwareString;
-(id)init;
-(id)pathMediaStreamDir;
-(id)pushTokenForPersonID:(id)arg0 ;
-(id)socketOptions;
-(id)stringForSysctlKey:(id)arg0 ;
-(id)theDaemon;
-(struct __CFString *)_facilityStringForFacility:(int)arg0 ;
-(void)_rereadDefaults;
-(void)didDetectUnrecoverableCondition;
-(void)logFacility:(int)arg0 level:(int)arg1 format:(id)arg2 args:(char *)arg3 ;
-(void)logFile:(char *)arg0 func:(char *)arg1 line:(int)arg2 facility:(int)arg3 level:(int)arg4 format:(id)arg5 args:(char *)arg6 ;


@end


#endif
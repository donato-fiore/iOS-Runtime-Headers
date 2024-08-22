// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMUSERDEFAULTS_H
#define IMUSERDEFAULTS_H

@class NSString;
@protocol IMUserDefaults;

#import <Foundation/Foundation.h>


@interface IMUserDefaults : NSObject <IMUserDefaults>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isEngramEnabled;
+(BOOL)isLiveDeliveryWarmUpEnabled;
+(BOOL)isWritePushPayloadsToDiskEnabled;
+(BOOL)trustAnyCredential;
+(NSInteger)phoneNumberValidationMode;
+(id)phoneNumberValidationPreflightTestData;
+(id)sharedDefaults;
+(id)writePushPayloadsToDiskPath;
+(void)setEnableEngram:(BOOL)arg0 ;
+(void)setEnableLiveDeliveryWarmUp:(BOOL)arg0 ;
+(void)setPhoneNumberValidationMode:(NSInteger)arg0 ;
+(void)setPhoneNumberValidationPreflightTestData:(id)arg0 ;
-(BOOL)appBoolByHostForKey:(id)arg0 ;
-(BOOL)appBoolForKey:(id)arg0 ;
-(id)appValueForKey:(id)arg0 ;
-(id)copyKeyListForAppID:(id)arg0 ;
-(id)copyKeyListForApplicationID:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 hostName:(struct __CFString *)arg2 ;
-(id)copyMultipleForCurrentKeys:(id)arg0 appID:(id)arg1 ;
-(id)copyMultipleForCurrentKeys:(id)arg0 applicationID:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 hostName:(struct __CFString *)arg3 ;
-(id)copyValueForKey:(id)arg0 appID:(id)arg1 ;
-(id)copyValueForKey:(id)arg0 applicationID:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 hostName:(struct __CFString *)arg3 ;
-(void)removeAppValueForKey:(id)arg0 ;
-(void)setAppBool:(BOOL)arg0 byHostForKey:(id)arg1 ;
-(void)setAppBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setAppValue:(id)arg0 forKey:(id)arg1 ;
-(void)setMultiple:(id)arg0 remove:(id)arg1 appID:(id)arg2 ;
-(void)setMultiple:(id)arg0 remove:(id)arg1 applicationID:(struct __CFString *)arg2 userName:(struct __CFString *)arg3 hostName:(struct __CFString *)arg4 ;
-(void)setValue:(*void)arg0 forKey:(id)arg1 appID:(id)arg2 ;
-(void)setValue:(*void)arg0 forKey:(id)arg1 applicationID:(struct __CFString *)arg2 userName:(struct __CFString *)arg3 hostName:(struct __CFString *)arg4 ;
-(void)synchronizeAppID:(id)arg0 ;
-(void)synchronizeApplicationID:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 hostName:(struct __CFString *)arg2 ;


@end


#endif
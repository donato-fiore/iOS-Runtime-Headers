// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCEDUMODEUTILITIES_H
#define MCEDUMODEUTILITIES_H


#import <Foundation/Foundation.h>


@interface MCEDUModeUtilities : NSObject



+(BOOL)_updateMultiUserDeviceConfigurationFileWithKey:(id)arg0 value:(id)arg1 ;
+(BOOL)configureTemporarySessionOnly:(BOOL)arg0 restoreQuotaSize:(BOOL)arg1 ;
+(BOOL)configureTemporarySessionTimeout:(CGFloat)arg0 ;
+(BOOL)configureUserSessionTimeout:(CGFloat)arg0 ;
+(BOOL)isEphemeralMultiUser;
+(BOOL)isFirstSetupBuddyDone;
+(BOOL)temporarySessionOnly;
+(CGFloat)temporarySessionTimeout;
+(CGFloat)userSessionTimeout;
+(NSUInteger)_getDiskSize;
+(NSUInteger)_previousQuotaSize;
+(NSUInteger)getDiskAvailableSize;
+(id)_configureQuotaSizeForSharedDeviceImmediately:(id)arg0 ;
+(id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)arg0 ;
+(id)configureQuotaSizeForSharedDevice:(id)arg0 ;
+(id)configureResidentUsersNumberForSharedDevice:(id)arg0 ;
+(id)configureToSharedDevice;


@end


#endif
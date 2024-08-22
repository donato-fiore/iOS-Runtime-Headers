// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFATTACHMENTCAPABILITIES_H
#define MFATTACHMENTCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface MFAttachmentCapabilities : NSObject



+(BOOL)_isMailDropDevice;
+(BOOL)mailDropAvailable;
+(BOOL)mailDropAvailableForAccount:(id)arg0 ;
+(BOOL)mailDropConfigured;
+(BOOL)placeholdersAvailable;
+(CGFloat)mailDropExpiration;
+(NSUInteger)_mailDropLimit;
+(NSUInteger)currentDownloadLimit;
+(NSUInteger)currentMessageLimit;
+(NSUInteger)currentPlaceholderThreshold;
+(NSUInteger)currentUploadLimit;
+(NSUInteger)currentUploadLimitForAccount:(id)arg0 ;
+(NSUInteger)mailDropThreshold;
+(id)capabilitiesDictionary;
+(id)mailDropPreferences;


@end


#endif
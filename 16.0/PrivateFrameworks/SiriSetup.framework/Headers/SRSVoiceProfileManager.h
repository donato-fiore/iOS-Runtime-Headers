// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSVOICEPROFILEMANAGER_H
#define SRSVOICEPROFILEMANAGER_H

@class SSRVoiceProfileManager;

#import <Foundation/Foundation.h>


@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager *_voiceProfileManager;
}




-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg0 backupMetaBlob:(id)arg1 ;
-(BOOL)isSATEnrolledForSiriProfileId:(id)arg0 languageCode:(id)arg1 ;
-(id)init;
-(void)deleteUserVoiceProfile:(id)arg0 ;
-(void)markSATEnrollmentSuccessForVoiceProfile:(id)arg0 ;


@end


#endif
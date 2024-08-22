// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENDIFFERENTIALPRIVACYMANAGER_H
#define ENDIFFERENTIALPRIVACYMANAGER_H

@class _DPBitValueRecorder, NSDictionary;

#import <Foundation/Foundation.h>


@interface ENDifferentialPrivacyManager : NSObject {
    _DPBitValueRecorder *_userRiskRecorder;
    _DPBitValueRecorder *_userRiskParametersRecorder;
    _DPBitValueRecorder *_userBeaconCountRecorder;
    _DPBitValueRecorder *_userNotificationRecorder;
    _DPBitValueRecorder *_userNotificationInteractionRecorder;
    _DPBitValueRecorder *_userCodeVerifiedRecorder;
    _DPBitValueRecorder *_userDiagnosedVaccineStatusRecorder;
    _DPBitValueRecorder *_userKeysUploadedRecorder;
    _DPBitValueRecorder *_userDateExposureRecorder;
    _DPBitValueRecorder *_userCodeVerifiedV2Recorder;
    _DPBitValueRecorder *_userKeysUploadedV2Recorder;
    _DPBitValueRecorder *_userSecondaryAttackV2Recorder;
    _DPBitValueRecorder *_userNotificationV2Recorder;
    _DPBitValueRecorder *_userDiagnosedVaccineStatusV2Recorder;
    _DPBitValueRecorder *_userDateExposureV2Recorder;
}


@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata


+(id)hashForServerExposureConfiguration:(id)arg0 ;
+(unsigned short)userRiskScoreForExposureDetectionSummary:(id)arg0 ;
-(BOOL)_submitVectorValue:(id)arg0 toRecorder:(id)arg1 description:(char *)arg2 ;
-(id)initWithServerConfiguration:(id)arg0 serverExposureConfiguration:(id)arg1 ;
-(void)_submitValue:(id)arg0 toRecorder:(id)arg1 description:(char *)arg2 ;
-(void)reportUserBeaconCount:(id)arg0 ;
-(void)reportUserCodeVerified:(unsigned char)arg0 reportType:(unsigned int)arg1 ;
-(void)reportUserDiagnosedVaccineStatus:(id)arg0 ;
-(void)reportUserExposureNotificationTapped:(BOOL)arg0 classificationIndex:(unsigned char)arg1 ;
-(void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)arg0 daysDelay:(unsigned char)arg1 ;
-(void)reportUserKeysUploaded:(unsigned char)arg0 reportType:(unsigned int)arg1 ;
-(void)reportUserRiskParameters:(id)arg0 ;
-(void)reportUserRiskScoreWithSummary:(id)arg0 ;
-(void)updatedServerConfiguration:(id)arg0 serverExposureConfiguration:(id)arg1 ;


@end


#endif
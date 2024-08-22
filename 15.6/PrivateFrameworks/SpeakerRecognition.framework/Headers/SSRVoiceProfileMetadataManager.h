// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRVOICEPROFILEMETADATAMANAGER_H
#define SSRVOICEPROFILEMETADATAMANAGER_H


#import <Foundation/Foundation.h>


@interface SSRVoiceProfileMetadataManager : NSObject



+(BOOL)isUtteranceImplicitlyTrained:(id)arg0 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg0 ;
+(id)getUtteranceEnrollmentType:(id)arg0 ;
+(id)recordedTimeStampFromFileName:(id)arg0 ;
+(id)recordedTimeStampOfFile:(id)arg0 ;
+(void)_writeMetaDict:(id)arg0 forUtterancePath:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg0 enrollmentType:(id)arg1 isHandheldEnrollment:(BOOL)arg2 triggerSource:(id)arg3 audioInput:(id)arg4 otherBiometricResult:(NSUInteger)arg5 containsPayload:(BOOL)arg6 ;


@end


#endif
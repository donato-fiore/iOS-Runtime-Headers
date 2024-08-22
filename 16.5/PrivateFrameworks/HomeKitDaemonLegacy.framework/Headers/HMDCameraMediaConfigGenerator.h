// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAMEDIACONFIGGENERATOR_H
#define HMDCAMERAMEDIACONFIGGENERATOR_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMDCameraMediaConfigGenerator : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_loadAVCAudioStreamConfig:(id)arg0 protocolParameters:(id)arg1 ;
-(BOOL)_loadAVCVideoStreamConfig:(id)arg0 protocolParameters:(id)arg1 ;
-(BOOL)_loadConfig:(id)arg0 cipherCuite:(id)arg1 ;
-(BOOL)extractReselectedConfigFromVideoTier:(id)arg0 videoStreamConfig:(*id)arg1 ;
-(BOOL)extractSelectedConfigFromProtocolParameters:(id)arg0 videoStreamConfig:(*id)arg1 audioStreamConfig:(*id)arg2 ;
-(void)_loadConfig:(id)arg0 sendSrtpParameters:(id)arg1 receiveSrtpParameters:(id)arg2 ;
-(void)_loadMiscConfig:(id)arg0 ;


@end


#endif
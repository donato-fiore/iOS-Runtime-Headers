// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGSESSIONFACTORY_H
#define HMDCAMERARECORDINGSESSIONFACTORY_H

@class HMFObject, NSString;
@protocol HMDCameraRecordingSessionFactory;



@interface HMDCameraRecordingSessionFactory : HMFObject <HMDCameraRecordingSessionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat maximumClipDuration;
@property (readonly) CGFloat recordingExtensionDuration;
@property (readonly) Class superclass;


-(BOOL)isVideoInitData:(id)arg0 combinableWithVideoInitData:(id)arg1 ;
-(id)createSignificantEventManagerWithWorkQueue:(id)arg0 faceClassificationResolver:(id)arg1 logIdentifier:(id)arg2 ;
-(id)createTimelapseFragmentManagerWithLogIdentifier:(id)arg0 ;
-(id)createUploaderWithClipUUID:(id)arg0 startDate:(id)arg1 targetFragmentDuration:(CGFloat)arg2 quality:(NSInteger)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6 ;
-(id)createVideoAnalyzerWithConfiguration:(id)arg0 identifier:(id)arg1 ;


@end


#endif
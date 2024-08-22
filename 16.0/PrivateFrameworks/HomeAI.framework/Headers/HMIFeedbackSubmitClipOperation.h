// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFEEDBACKSUBMITCLIPOPERATION_H
#define HMIFEEDBACKSUBMITCLIPOPERATION_H

@class HMFOperation, NSData, NSUUID, NSString, NSSet, NSDictionary, NSMutableArray;
@protocol HMFLogging;


#import "HMIFeedbackSession.h"

@interface HMIFeedbackSubmitClipOperation : HMFOperation <HMFLogging>



@property (retain) NSData *assetData; // ivar: _assetData
@property (readonly) NSUUID *cameraProfileUUID; // ivar: _cameraProfileUUID
@property (readonly) NSUUID *clipUUID; // ivar: _clipUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *faceCrops; // ivar: _faceCrops
@property (readonly) HMIFeedbackSession *feedbackSession; // ivar: _feedbackSession
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *serviceResult; // ivar: _serviceResult
@property (readonly) Class superclass;
@property (readonly) NSMutableArray *temporaryFileURLs; // ivar: _temporaryFileURLs


+(id)logCategory;
-(BOOL)_attachEncryptedDataUsingKey:(id)arg0 toPayload:(id)arg1 error:(*id)arg2 ;
-(BOOL)_attachFaceCrops:(id)arg0 toPayload:(id)arg1 error:(*id)arg2 ;
-(id)_base64StringFromData:(id)arg0 ;
-(id)_createPayloadWithServiceResult:(id)arg0 error:(*id)arg1 ;
-(id)_temporaryFileURLWithUUID:(id)arg0 extension:(id)arg1 error:(*id)arg2 ;
-(id)feedbackRequestURLForClipWithUUID:(id)arg0 ;
-(id)feedbackServiceHost;
-(id)feedbackServiceURL;
-(id)initWithFeedbackSession:(id)arg0 cameraProfileUUID:(id)arg1 clipUUID:(id)arg2 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)_downloadClipWithCameraProfileUUID:(id)arg0 clipUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_removeTemporaryFiles;
-(void)_requestPreSignedURLWithClipUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_stripAudioTrackAndFacesFromAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)_submitClipWithCameraProfileUUID:(id)arg0 clipUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_uploadPayloadData:(id)arg0 uploadURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)main;


@end


#endif
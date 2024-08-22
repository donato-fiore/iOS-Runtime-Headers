// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMFACEDETECTORNODE_H
#define AXMFACEDETECTORNODE_H

@class VNClassifyFaceAttributesRequest, VNDetectFaceExpressionsRequest, VNDetectFaceLandmarksRequest, VNDetectFacePoseRequest, VNDetectFaceRectanglesRequest, VNCreateFaceprintRequest;


#import "AXMEvaluationNode.h"
#import "AXMVisionFaceNameHelper.h"

@interface AXMFaceDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) VNClassifyFaceAttributesRequest *_faceAttributesRequest; // ivar: __faceAttributesRequest
@property (retain, nonatomic) VNDetectFaceExpressionsRequest *_faceExpressionsRequest; // ivar: __faceExpressionsRequest
@property (retain, nonatomic) VNDetectFaceLandmarksRequest *_faceLandmarksRequest; // ivar: __faceLandmarksRequest
@property (retain, nonatomic) AXMVisionFaceNameHelper *_faceNameHelper; // ivar: __faceNameHelper
@property (retain, nonatomic) VNDetectFacePoseRequest *_facePoseRequest; // ivar: __facePoseRequest
@property (retain, nonatomic) VNDetectFaceRectanglesRequest *_faceRectanglesRequest; // ivar: __faceRectanglesRequest
@property (retain, nonatomic) VNCreateFaceprintRequest *_faceprintRequest; // ivar: __faceprintRequest


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)requiresVisionFramework;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)_createRequestsForContext:(id)arg0 ;
-(id)_faceDetectionResultsForVisionRequests:(id)arg0 canvasSize:(struct CGSize )arg1 ;
-(id)_faceResultForUUID:(id)arg0 inFaceDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHFACECHANGEREQUEST_H
#define PHFACECHANGEREQUEST_H

@class NSMutableArray, NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHFaceprint.h"
#import "PHObjectPlaceholder.h"

@interface PHFaceChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

 {
    PHFaceprint *_faceprint;
    BOOL _didSetFaceprint;
    NSMutableArray *_detectionTraits;
    BOOL _didSetDetectionTraits;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (copy, nonatomic) id *adjustmentVersion;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) CGFloat blurScore;
@property (nonatomic) CGFloat bodyCenterX;
@property (nonatomic) CGFloat bodyCenterY;
@property (nonatomic) CGFloat bodyHeight;
@property (nonatomic) CGFloat bodyWidth;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (nonatomic) NSInteger clusterSequenceNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short detectionType;
@property (nonatomic) unsigned short ethnicityType;
@property (nonatomic) unsigned short eyeMakeupType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) NSInteger faceAlgorithmVersion;
@property (nonatomic) unsigned short faceExpressionType;
@property (retain, nonatomic) PHFaceprint *faceprint;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) CGFloat gazeCenterX;
@property (nonatomic) CGFloat gazeCenterY;
@property (nonatomic) unsigned short gazeType;
@property (nonatomic) unsigned short glassesType;
@property (retain, nonatomic) NSString *groupingIdentifier;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) unsigned short hairType;
@property (nonatomic) BOOL hasFaceMask;
@property (nonatomic) BOOL hasSmile;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short headgearType;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isInTrash) BOOL inTrash;
@property (nonatomic) BOOL isInVIPModel;
@property (readonly) BOOL isNewRequest;
@property (nonatomic, getter=isLeftEyeClosed) BOOL leftEyeClosed;
@property (nonatomic) CGFloat leftEyeX;
@property (nonatomic) CGFloat leftEyeY;
@property (nonatomic) unsigned short lipMakeupType;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (nonatomic) BOOL manual;
@property (nonatomic) CGFloat mouthX;
@property (nonatomic) CGFloat mouthY;
@property (readonly, getter=isMutated) BOOL mutated;
@property (nonatomic) NSInteger nameSource;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFace;
@property (nonatomic) unsigned short poseType;
@property (nonatomic) CGFloat poseYaw;
@property (nonatomic) CGFloat quality;
@property (nonatomic) NSInteger qualityMeasure;
@property (nonatomic, getter=isRightEyeClosed) BOOL rightEyeClosed;
@property (nonatomic) CGFloat rightEyeX;
@property (nonatomic) CGFloat rightEyeY;
@property (nonatomic) CGFloat roll;
@property (nonatomic) unsigned short sexType;
@property (nonatomic) BOOL shouldClearFaceCropGenerationState; // ivar: _shouldClearFaceCropGenerationState
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (nonatomic) CGFloat size;
@property (nonatomic) unsigned short skintoneType;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) NSInteger sourceHeight;
@property (nonatomic) NSInteger sourceWidth;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat yaw;


+(id)changeRequestForFace:(id)arg0 ;
+(id)creationRequestForFace;
+(void)deleteFaces:(id)arg0 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)setDetectionTraits:(id)arg0 ;


@end


#endif
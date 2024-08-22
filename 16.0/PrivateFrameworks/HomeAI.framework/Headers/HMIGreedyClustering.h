// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIGREEDYCLUSTERING_H
#define HMIGREEDYCLUSTERING_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIGreedyClustering : HMFObject <HMFLogging>

 {
    shared_ptr<homeai::clustering::GreedyClusterer> _greedyClusterer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)addFaceObservations:(id)arg0 toFaceDescriptorBuffer:(*void)arg1 error:(*id)arg2 ;
+(float)faceDistanceFromDescriptor:(id)arg0 toDescriptor:(id)arg1 ;
+(id)centermostFaceprintInCluster:(id)arg0 faceObservations:(id)arg1 ;
+(id)logCategory;
-(id)convertToClusters:(*void)arg0 ;
-(id)getClustersWithFaces:(id)arg0 error:(*id)arg1 ;
-(id)initWithError:(*id)arg0 ;
-(id)initWithFaceThreshold:(id)arg0 singleLinkThreshold:(id)arg1 percentConnectionsThreshold:(id)arg2 error:(*id)arg3 ;


@end


#endif
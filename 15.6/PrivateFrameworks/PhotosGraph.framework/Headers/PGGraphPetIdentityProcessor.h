// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPETIDENTITYPROCESSOR_H
#define PGGRAPHPETIDENTITYPROCESSOR_H

@class PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGGraphPetIdentityProcessor : NSObject

@property (nonatomic) short detectionType; // ivar: _detectionType
@property (weak, nonatomic) PGGraph *graph; // ivar: _graph
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (nonatomic) BOOL petPrintClusteringEnabled; // ivar: _petPrintClusteringEnabled
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(CGFloat)petFaceClusteringThreshold;
+(NSUInteger)petFaceClusterMinSize;
+(NSUInteger)petFaceClusteringType;
-(BOOL)updateFacesNameSourceToSourceGraphIfNeeded:(id)arg0 error:(*id)arg1 ;
-(BOOL)updatePetFaceGroupsForFaceClusters:(id)arg0 error:(*id)arg1 ;
-(BOOL)updatePetIdentityWithError:(*id)arg0 progressBlock:(id)arg1 ;
-(BOOL)updatePetPersonsForFaceClusters:(id)arg0 error:(*id)arg1 ;
-(id)_createClustersFromPetFaces:(id)arg0 withErrors:(id)arg1 progressBlock:(id)arg2 ;
-(id)_fetchPetFaceGroups;
-(id)_fetchPetFacesInMomentsForUUIDs:(id)arg0 ;
-(id)fetchPetPersons;
-(id)initWithDetectionType:(short)arg0 photoLibrary:(id)arg1 graph:(id)arg2 loggingConnection:(id)arg3 ;
-(id)momentNodesForFaces:(id)arg0 ;
-(id)petFacesAtHome;
-(id)removeClusterMatchingPetEntityFaceSet:(id)arg0 fromFaceClustersAtHome:(id)arg1 ;
-(void)_sortFaceClusters:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFACEMERGER_H
#define VCPFACEMERGER_H


#import <Foundation/Foundation.h>


@interface VCPFaceMerger : NSObject {
    CGFloat _mergeDistanceThreshold;
}




+(BOOL)_allowANE;
-(id)_alignFaceObservations:(id)arg0 withRequestHandler:(id)arg1 error:(*id)arg2 ;
-(id)_faceObservationsWithBoundingBoxFromFaces:(id)arg0 withFaceHashMapping:(id)arg1 ;
-(id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg0 andCandidateFaces:(id)arg1 ;
-(id)initWithThreshold:(CGFloat)arg0 ;
-(id)mergeExistingFaces:(id)arg0 andDetectedFaces:(id)arg1 withRequestHandler:(id)arg2 orientedWidth:(NSUInteger)arg3 orientedHeight:(NSUInteger)arg4 assetWidth:(NSUInteger)arg5 assetHeight:(NSUInteger)arg6 ;
-(void)_alignBoundingBoxOfFaces:(id)arg0 withRequestHandler:(id)arg1 orientedWidth:(NSUInteger)arg2 orientedHeight:(NSUInteger)arg3 ;


@end


#endif
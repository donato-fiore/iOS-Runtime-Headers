// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPFACEMERGER_H
#define VCPFACEMERGER_H


#import <Foundation/Foundation.h>

#import "VCPPhotosFaceProcessingContext.h"

@interface VCPFaceMerger : NSObject {
    VCPPhotosFaceProcessingContext *_context;
}




+(BOOL)_allowANE;
-(BOOL)_alignBBoxForVCPPhotosFaces:(id)arg0 forImage:(id)arg1 ;
-(id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg0 inImage:(id)arg1 withError:(*id)arg2 ;
-(id)_faceObservationsWithBBoxFromVCPPhotosFaces:(id)arg0 mapping:(id)arg1 ;
-(id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg0 andCandidateFaces:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)mergeExistingFaces:(id)arg0 withDetectedFaces:(id)arg1 forImage:(id)arg2 ;
-(void)_configureRequest:(id)arg0 withRevision:(NSUInteger)arg1 ;


@end


#endif
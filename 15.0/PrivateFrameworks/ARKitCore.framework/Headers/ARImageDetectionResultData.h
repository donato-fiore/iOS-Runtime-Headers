// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARIMAGEDETECTIONRESULTDATA_H
#define ARIMAGEDETECTIONRESULTDATA_H

@class NSString, NSArray, NSDictionary;
@protocol ARResultData, ARQATraceable, NSCopying;

#import <Foundation/Foundation.h>

#import "ARCamera.h"

@interface ARImageDetectionResultData : NSObject <ARResultData, ARQATraceable, NSCopying>



@property (copy, nonatomic) ARCamera *currentCamera; // ivar: _currentCamera
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *detectedImages; // ivar: _detectedImages
@property (nonatomic) BOOL detectionOnly; // ivar: _detectionOnly
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL predicted; // ivar: _predicted
@property (nonatomic) BOOL providesWorldTrackingCameraPose; // ivar: _providesWorldTrackingCameraPose
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *tracingEntry;


-(BOOL)isEqual:(id)arg0 ;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCORERESKELETONRESULTS_H
#define ARCORERESKELETONRESULTS_H

@class NSString, NSArray;
@protocol ARResultData, NSCopying;

#import <Foundation/Foundation.h>


@interface ARCoreRESkeletonResults : NSObject <ARResultData, NSCopying>



@property (nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (copy, nonatomic) NSArray *retargetedSkeletons; // ivar: _retargetedSkeletons
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
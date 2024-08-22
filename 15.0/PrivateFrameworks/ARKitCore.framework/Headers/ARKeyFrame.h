// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARKEYFRAME_H
#define ARKEYFRAME_H


#import <Foundation/Foundation.h>

#import "ARPointCloud.h"

@interface ARKeyFrame : NSObject

@property (nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (readonly, nonatomic) ARPointCloud *featurePoints; // ivar: _featurePoints
@property (readonly, nonatomic) ? transform; // ivar: _transform


-(id)description;
-(id)initWithKeyframeData:(struct ? *)arg0 featurePoints:(id)arg1 referenceOriginTransform:(struct ? )arg2 ;


@end


#endif
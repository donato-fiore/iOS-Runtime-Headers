// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXFACETRACKEDEFFECTTRANSFORM_H
#define JFXFACETRACKEDEFFECTTRANSFORM_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface JFXFaceTrackedEffectTransform : NSObject <NSCopying>



@property (readonly, nonatomic) ? billboardTransform; // ivar: _billboardTransform
@property (readonly, nonatomic) ? cameraProjection; // ivar: _cameraProjection
@property (readonly, nonatomic) ? cameraTransform; // ivar: _cameraTransform
@property (readonly, nonatomic) NSDictionary *effectParametersForOnBillboardTracking; // ivar: _effectParametersForOnBillboardTracking
@property (readonly, nonatomic) NSDictionary *effectParametersForOnFaceTracking; // ivar: _effectParametersForOnFaceTracking
@property (readonly, nonatomic) ? onFaceTransform; // ivar: _onFaceTransform


-(BOOL)isEqual:(id)arg0 forTrackingType:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectParametersForTrackingType:(NSInteger)arg0 ;
-(id)initWithCameraProjection:(struct ? )arg0 cameraTransform:(struct ? )arg1 onFaceTransform:(struct ? )arg2 billboardTransform:(struct ? )arg3 ;
-(struct ? )transformForTrackingType:(NSInteger)arg0 ;


@end


#endif
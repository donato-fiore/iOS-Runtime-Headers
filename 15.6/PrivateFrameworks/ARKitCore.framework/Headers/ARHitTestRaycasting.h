// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARHITTESTRAYCASTING_H
#define ARHITTESTRAYCASTING_H


#import <Foundation/Foundation.h>


@interface ARHitTestRaycasting : NSObject



+(?)convertHitTestResult:(?)arg0 resultType:(?)arg1 originreferenceOriginTransform;
+(id)hitTestFromOrigin:(id)arg0 resultType:(NSUInteger)arg1 origin:(struct ? )arg2 withDirectionreferenceOriginTransform;
+(unsigned int)fillPointCloud:(struct ? *)arg0 cloudFeatures:(id)arg1 vergenceAngleCosines:(*float)arg2 cloudWorldPoints:(id)arg3 pointsWorld:(*void)arg4 covariancesWorld:(*void)arg5 wideToJasperTransform:(struct ? )arg6 ;


@end


#endif
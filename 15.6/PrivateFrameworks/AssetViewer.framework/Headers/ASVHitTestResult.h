// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVHITTESTRESULT_H
#define ASVHITTESTRESULT_H


#import <Foundation/Foundation.h>


@interface ASVHitTestResult : NSObject {
    ? _imagePoint;
    ? _worldPosition;
    ? _assetPosition;
    ? _cameraPosition;
    ? _synthesizedPlaneNormal;
}


@property ? assetPosition;
@property ? cameraPosition;
@property (readonly, nonatomic) float distanceFromAsset;
@property (readonly, nonatomic) float distanceFromCamera;
@property ? imagePoint;
@property (readonly, nonatomic) BOOL isRealPlane;
@property (readonly, nonatomic) BOOL isSynthesizedVeritcalPlane;
@property ? synthesizedPlaneNormal;
@property (nonatomic) NSInteger type; // ivar: _type
@property ? worldPosition;




@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNHITTESTRESULT_H
#define SCNHITTESTRESULT_H


#import <Foundation/Foundation.h>

#import "SCNNode.h"

@interface SCNHitTestResult : NSObject {
    *__C3DHitTestResult _result;
}


@property (readonly, nonatomic) SCNNode *boneNode;
@property (readonly, nonatomic) NSInteger faceIndex;
@property (readonly, nonatomic) NSInteger geometryIndex;
@property (readonly, nonatomic) SCNVector3 localCoordinates;
@property (readonly, nonatomic) SCNVector3 localNormal;
@property (readonly, nonatomic) SCNMatrix4 modelTransform;
@property (readonly, nonatomic) SCNNode *node;
@property ? simdLocalCoordinates;
@property ? simdLocalNormal;
@property (readonly, nonatomic) ? simdModelTransform;
@property ? simdWorldCoordinates;
@property ? simdWorldNormal;
@property (readonly, nonatomic) SCNVector3 worldCoordinates;
@property (readonly, nonatomic) SCNVector3 worldNormal;


+(id)hitTestResultsFromHitTestResultRef:(struct __CFArray *)arg0 ;
-(id)initWithResult:(struct __C3DHitTestResult *)arg0 ;
-(struct CGPoint )textureCoordinatesWithMappingChannel:(NSInteger)arg0 ;


@end


#endif
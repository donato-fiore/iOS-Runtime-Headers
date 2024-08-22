// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNSCENECLASSIFICATIONREQUESTCONFIGURATION_H
#define VNSCENECLASSIFICATIONREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"
#import "VNClassificationCustomHierarchy.h"
#import "VNSceneObservation.h"

@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration

@property (retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy; // ivar: _customHierarchy
@property (nonatomic) NSUInteger maximumHierarchicalObservations; // ivar: _maximumHierarchicalObservations
@property (nonatomic) NSUInteger maximumLeafObservations; // ivar: _maximumLeafObservations
@property (retain, nonatomic) VNSceneObservation *sceneObservation; // ivar: _sceneObservation


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif
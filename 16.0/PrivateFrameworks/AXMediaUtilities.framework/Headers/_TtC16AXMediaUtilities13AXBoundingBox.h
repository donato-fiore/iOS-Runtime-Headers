// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16AXMEDIAUTILITIES13AXBOUNDINGBOX_H
#define _TTC16AXMEDIAUTILITIES13AXBOUNDINGBOX_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC16AXMediaUtilities13AXBoundingBox : NSObject {
    ? id;
    ? heat;
    ? angle;
    ? rect;
    ? classIndex;
    ? heatByClass;
    ? firstSeen;
    ? lastSeen;
    ? depth;
    ? centroid3d;
    ? knownFeaturePoints;
    ? physicalSize;
}


@property (nonatomic, readonly) NSString *description;


+(id)postComputeClickabilityWithDecoded:(id)arg0 nmsThreshold:(float)arg1 filterThresholds:(id)arg2 ;
+(id)postComputeWithDecoded:(id)arg0 nmsThreshold:(float)arg1 filterThresholds:(id)arg2 ;
-(id)init;


@end


#endif
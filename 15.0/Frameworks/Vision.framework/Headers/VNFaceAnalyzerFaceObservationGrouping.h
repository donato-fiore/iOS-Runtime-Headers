// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACEANALYZERFACEOBSERVATIONGROUPING_H
#define VNFACEANALYZERFACEOBSERVATIONGROUPING_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VNFaceAnalyzerFaceObservationGrouping : NSObject {
    NSMutableDictionary *_observationGroupsToRequestMapping;
}




-(id)addToGroupingsRequest:(id)arg0 withFaceObservations:(id)arg1 ;


@end


#endif
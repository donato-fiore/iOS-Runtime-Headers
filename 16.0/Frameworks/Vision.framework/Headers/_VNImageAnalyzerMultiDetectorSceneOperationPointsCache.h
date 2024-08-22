// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VNIMAGEANALYZERMULTIDETECTORSCENEOPERATIONPOINTSCACHE_H
#define _VNIMAGEANALYZERMULTIDETECTORSCENEOPERATIONPOINTSCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject {
    NSUInteger _detectorModel;
    NSMutableDictionary *_originatingRequestSpecifierToOperationPoints;
}




-(id)initWithDetectorModel:(NSUInteger)arg0 ;
-(id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg0 error:(*id)arg1 ;


@end


#endif
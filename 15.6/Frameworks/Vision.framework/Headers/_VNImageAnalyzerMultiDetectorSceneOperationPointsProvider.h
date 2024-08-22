// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _VNIMAGEANALYZERMULTIDETECTORSCENEOPERATIONPOINTSPROVIDER_H
#define _VNIMAGEANALYZERMULTIDETECTORSCENEOPERATIONPOINTSPROVIDER_H

@protocol VNOperationPointsProviding;

#import <Foundation/Foundation.h>

#import "_VNImageAnalyzerMultiDetectorSceneOperationPointsCache.h"
#import "VNRequestSpecifier.h"

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding>

 {
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    VNRequestSpecifier *_originatingRequestSpecifier;
}




-(id)initWithOperationPointsCache:(id)arg0 originatingRequestSpecifier:(id)arg1 ;
-(id)operationPointsAndReturnError:(*id)arg0 ;


@end


#endif
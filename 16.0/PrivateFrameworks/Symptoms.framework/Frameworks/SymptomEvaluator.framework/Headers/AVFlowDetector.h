// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFLOWDETECTOR_H
#define AVFLOWDETECTOR_H


#import <Foundation/Foundation.h>


@interface AVFlowDetector : NSObject



-(id)getState:(BOOL)arg0 ;
-(int)possibleAVFlowScore:(id)arg0 result:(struct AVFlowDetectionResult *)arg1 ;
-(int)setConfiguration:(id)arg0 ;


@end


#endif
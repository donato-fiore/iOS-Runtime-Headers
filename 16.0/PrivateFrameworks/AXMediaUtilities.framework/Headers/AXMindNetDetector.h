// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMINDNETDETECTOR_H
#define AXMINDNETDETECTOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AXMindNetNetwork.h"

@interface AXMindNetDetector : NSObject {
    AXMindNetNetwork *_network;
}


@property (retain, nonatomic) NSArray *filterThreshold; // ivar: _filterThreshold
@property (nonatomic) float nmsThreshold; // ivar: _nmsThreshold
@property (nonatomic) float overlap_threshold; // ivar: _overlap_threshold
@property (nonatomic) float threshold;


+(id)detectorWithModelPath:(id)arg0 configuration:(id)arg1 modelType:(NSInteger)arg2 ;
-(id)detect:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 nmsThreshold:(float)arg1 filterThreshold:(id)arg2 ;
-(id)processBoxes:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;


@end


#endif
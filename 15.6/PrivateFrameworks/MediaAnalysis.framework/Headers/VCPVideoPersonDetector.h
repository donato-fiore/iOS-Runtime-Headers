// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOPERSONDETECTOR_H
#define VCPVIDEOPERSONDETECTOR_H

@class NSMutableArray;


#import "VCPVideoAnalyzer.h"

@interface VCPVideoPersonDetector : VCPVideoAnalyzer {
    NSMutableArray *_persons;
}




-(id)init;
-(id)persons;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)detectPersons:(struct __CVBuffer *)arg0 persons:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWBOXEDOUTPUTDETECTIONTIMINGINFO_H
#define BWBOXEDOUTPUTDETECTIONTIMINGINFO_H


#import <Foundation/Foundation.h>


@interface BWBoxedOutputDetectionTimingInfo : NSObject {
    ? _previousDetectionPTS;
    ? _previousDetectionDuration;
    ? _previousNoDetectionPTS;
    int _lastDetectionCount;
}




-(id)init;


@end


#endif
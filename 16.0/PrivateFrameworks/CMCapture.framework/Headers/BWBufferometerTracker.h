// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWBUFFEROMETERTRACKER_H
#define BWBUFFEROMETERTRACKER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BWBufferometerTracker : NSObject {
    NSInteger _trackedSize;
    NSUInteger _trackingSerialNumber;
    *void _buffer;
    NSString *_tag;
    NSString *_bufferType;
}




-(void)dealloc;


@end


#endif
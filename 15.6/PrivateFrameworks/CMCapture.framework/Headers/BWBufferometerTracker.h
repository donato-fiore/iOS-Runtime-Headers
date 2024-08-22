// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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




+(void)trackBuffer:(*void)arg0 trackedSize:(NSInteger)arg1 ;
+(void)trackBuffer:(*void)arg0 trackedSize:(NSInteger)arg1 tag:(id)arg2 bufferType:(id)arg3 ;
-(id)initWithBuffer:(*void)arg0 trackedSize:(NSInteger)arg1 tag:(id)arg2 bufferType:(id)arg3 ;
-(void)dealloc;


@end


#endif
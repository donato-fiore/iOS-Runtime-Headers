// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBLERECORDER_H
#define SFBLERECORDER_H

@class NSMutableArray;
@protocol SFBLERecorderReplayDelegate;

#import <Foundation/Foundation.h>


@interface SFBLERecorder : NSObject {
    NSMutableArray *_recordings;
    NSUInteger _replayIndex;
}


@property (readonly, nonatomic) NSInteger payloadType; // ivar: _payloadType
@property (weak, nonatomic) NSObject<SFBLERecorderReplayDelegate> *replayDelegate; // ivar: _replayDelegate


-(BOOL)recordDevice:(id)arg0 data:(id)arg1 rssi:(id)arg2 info:(id)arg3 error:(*id)arg4 ;
-(BOOL)replayNextRecording;
-(BOOL)saveToDirectory:(id)arg0 ;
-(id)initWithPayloadType:(NSInteger)arg0 ;
-(id)initWithRecordingURL:(id)arg0 ;


@end


#endif
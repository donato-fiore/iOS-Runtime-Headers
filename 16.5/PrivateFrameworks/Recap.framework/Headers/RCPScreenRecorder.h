// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCPSCREENRECORDER_H
#define RCPSCREENRECORDER_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RCPScreenRecorder : NSObject {
    NSMutableArray *_snapshots;
    BOOL _recording;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}


@property (nonatomic) CGFloat maxDuration; // ivar: _maxDuration
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic) NSArray *snapshots;


+(id)takeScreenshot;
+(id)takeScreenshot:(CGFloat)arg0 ;
-(void)snapshot;
-(void)startRecording;
-(void)stopRecording;


@end


#endif
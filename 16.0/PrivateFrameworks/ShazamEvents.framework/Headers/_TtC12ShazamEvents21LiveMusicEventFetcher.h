// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12SHAZAMEVENTS21LIVEMUSICEVENTFETCHER_H
#define _TTC12SHAZAMEVENTS21LIVEMUSICEVENTFETCHER_H

@protocol SHWorker, SHWorkerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12ShazamEvents21LiveMusicEventFetcher : NSObject <SHWorker>

 {
    ? _isRunning;
    ? urlSession;
    ? $__lazy_storage_$_encoder;
}


@property (nonatomic) BOOL isRunning;
@property (nonatomic, readonly) BOOL managesRecordingSession;
@property (nonatomic, retain) NSObject<SHWorkerDelegate> *workerDelegate; // ivar: workerDelegate


-(CGFloat)timeRequiredToPerformWork;
-(id)init;
-(void)stop;


@end


#endif
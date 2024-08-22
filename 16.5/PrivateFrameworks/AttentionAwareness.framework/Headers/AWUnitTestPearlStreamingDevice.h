// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWUNITTESTPEARLSTREAMINGDEVICE_H
#define AWUNITTESTPEARLSTREAMINGDEVICE_H

@protocol OS_dispatch_queue, BKDevicePearlDelegate;

#import <Foundation/Foundation.h>


@interface AWUnitTestPearlStreamingDevice : NSObject {
    NSObject<OS_dispatch_queue> *_awQueue;
}


@property (weak, nonatomic) NSObject<BKDevicePearlDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedDevice;
-(id)createPresenceDetectOperationWithError:(*id)arg0 ;
-(id)init;


@end


#endif
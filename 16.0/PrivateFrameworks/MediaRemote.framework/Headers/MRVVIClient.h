// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRVVICLIENT_H
#define MRVVICLIENT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRVVIClient : NSObject {
    NSMutableDictionary *_deviceIDToCallbackMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(id)sharedClient;
-(id)init;
-(void)_recordingStateChangedNotification:(id)arg0 ;
-(void)dealloc;
// -(void)setRecordingStateCallback:(id)arg0 forDeviceID:(unk)arg1  ;


@end


#endif
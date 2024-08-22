// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMHEADPHONEMOTIONMANAGERINTERNAL_H
#define CMHEADPHONEMOTIONMANAGERINTERNAL_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RMConnectionClient.h"
#import "CMDeviceMotion.h"
#import "CMAttitude.h"

@interface CMHeadphoneMotionManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    RMConnectionClient *_connectionClient;
    NSOperationQueue *_callbackQueue;
    id *_callbackHandler;
    BOOL _deviceMotionActive;
    BOOL _deviceMotionStreaming;
    BOOL _deviceConnected;
    CGFloat _deviceMotionStartTime;
}


@property (retain) CMDeviceMotion *deviceMotion; // ivar: _deviceMotion
@property (retain, nonatomic) CMAttitude *initialReferenceAttitude; // ivar: _initialReferenceAttitude


-(id)init;
-(void)connect;
-(void)dealloc;
-(void)disconnect;


@end


#endif
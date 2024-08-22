// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDHEALTHSERVICECONNECTIONINFO_H
#define _HDHEALTHSERVICECONNECTIONINFO_H

@class NSData, NSUUID;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _HDHealthServiceConnectionInfo : NSObject {
    BOOL _pairingAttempted;
    NSUInteger _sessionIdentifier;
    id *_sessionHandler;
    id *_dataHandler;
    id *_characteristicsHandler;
    id *_mfaSuccessHandler;
    NSUInteger _connectionOptions;
    NSInteger _mfaStatus;
    NSData *_autoPairData;
    NSUUID *_peripheralUUID;
    NSInteger _connectionState;
    NSInteger _pairingState;
    CGFloat _timeoutInterval;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}






@end


#endif
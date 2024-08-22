// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKTRACETAPMEMO_H
#define DTKTRACETAPMEMO_H

@class NSData;
@protocol DVTInputStream, OS_xpc_object;


#import "DTTapDataMemo.h"

@interface DTKTraceTapMemo : DTTapDataMemo

@property (retain, nonatomic) NSObject<DVTInputStream> *datastream; // ivar: _datastream
@property (nonatomic) BOOL isRawKtraceFile; // ivar: _isRawKtraceFile
@property (nonatomic) BOOL isSession; // ivar: _isSession
@property (retain, nonatomic) NSObject<OS_xpc_object> *stackshot; // ivar: _stackshot
@property (nonatomic) unsigned int triggerCount; // ivar: _triggerCount
@property (retain, nonatomic) NSData *triggerIDs; // ivar: _triggerIDs




@end


#endif
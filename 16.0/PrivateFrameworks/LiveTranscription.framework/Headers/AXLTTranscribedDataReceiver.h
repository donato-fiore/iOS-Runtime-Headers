// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTTRANSCRIBEDDATARECEIVER_H
#define AXLTTRANSCRIBEDDATARECEIVER_H


#import <Foundation/Foundation.h>


@interface AXLTTranscribedDataReceiver : NSObject

@property (readonly) id *audioInfoBlock; // ivar: _audioInfoBlock
@property (readonly) id *callbackBlock; // ivar: _callbackBlock
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType
@property (readonly, nonatomic) int targetPID; // ivar: _targetPID


// -(id)initWithRequestType:(NSInteger)arg0 targetPID:(int)arg1 handler:(id)arg2 audioInfoBlock:(unk)arg3  ;


@end


#endif
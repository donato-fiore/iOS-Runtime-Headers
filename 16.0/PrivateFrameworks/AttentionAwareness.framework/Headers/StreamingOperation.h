// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STREAMINGOPERATION_H
#define STREAMINGOPERATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface StreamingOperation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)isStreamerRunning;
-(id)cancelEventStream;
-(id)initForUnitTest:(BOOL)arg0 withQueue:(id)arg1 ;
// -(id)streamEventWithBlock:(id)arg0 options:(unk)arg1  ;
// -(unk)getStreamerOptions ;
-(void)setNotificationHandler:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPRECORDER_H
#define RCPRECORDER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "RCPEventAction.h"

@interface RCPRecorder : NSObject {
    *__CFRunLoop _ioRunLoop;
    NSMutableSet *_activeRecorders;
}


@property (retain) RCPEventAction *pointerLocationAction; // ivar: _pointerLocationAction
@property BOOL shouldRecordInitialPointerLocation; // ivar: _shouldRecordInitialPointerLocation
@property BOOL shouldRecordSenderProperties; // ivar: _shouldRecordSenderProperties


+(id)sharedRecorder;
+(void)registerEventStreamRecorder:(id)arg0 ;
+(void)unregisterEventStreamRecorder:(id)arg0 ;
-(id)eventPreActions;
-(void)_registerIOHIDClient;
-(void)_unregisterIOHIDClient;


@end


#endif
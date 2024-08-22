// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLSILENTMODECONTROLLER_H
#define TLSILENTMODECONTROLLER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLSilentModeController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    int _ringerSwitchChangedNotifyToken;
    NSInteger _silentModeStatus;
}


@property (readonly) NSInteger silentModeStatus;


+(id)sharedSilentModeController;
-(BOOL)_registerRingerSwitchChangedNotifyToken;
-(NSInteger)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg0 ;
-(id)init;
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)_cancelRingerSwitchChangedNotifyToken;
-(void)_performBlockOnAccessQueue:(id)arg0 ;
-(void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg0 ;
-(void)dealloc;


@end


#endif
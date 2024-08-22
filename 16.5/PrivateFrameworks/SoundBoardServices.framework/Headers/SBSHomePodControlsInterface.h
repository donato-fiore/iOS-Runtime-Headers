// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSHOMEPODCONTROLSINTERFACE_H
#define SBSHOMEPODCONTROLSINTERFACE_H

@class NSXPCConnection;
@protocol SBSHomePodControlsImplementer;

#import <Foundation/Foundation.h>


@interface SBSHomePodControlsInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSHomePodControlsImplementer> *_sbProxy;
}




-(BOOL)isMediaAlarm:(id)arg0 ;
-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)dealloc;
-(void)getAllSyncedAlarmsAndTimers:(id)arg0 ;


@end


#endif
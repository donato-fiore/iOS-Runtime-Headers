// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPPROCESSSTATEMANAGER_H
#define HDSPPROCESSSTATEMANAGER_H

@class RBSProcessMonitor, NSMutableSet;
@protocol HDSPProcessStateManagerDelegate;

#import <Foundation/Foundation.h>


@interface HDSPProcessStateManager : NSObject {
    RBSProcessMonitor *_processStateMonitor;
    NSMutableSet *_processIdentifiers;
    id *_processStateProvider;
}


@property (weak, nonatomic) NSObject<HDSPProcessStateManagerDelegate> *delegate; // ivar: _delegate


-(BOOL)isProcessSuspended:(int)arg0 ;
-(id)init;
-(id)initWithProcessStateProvider:(id)arg0 ;
-(void)_process:(id)arg0 didUpdateFromState:(id)arg1 toState:(id)arg2 ;
-(void)_updateConfiguration;
-(void)dealloc;
-(void)startMonitoringProcessState:(int)arg0 ;
-(void)stopMonitoringProcessState:(int)arg0 ;


@end


#endif
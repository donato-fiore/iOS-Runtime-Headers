// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STUPDATEMONITORSUS_H
#define STUPDATEMONITORSUS_H

@class SUManagerClient, SUDownload, NSString;
@protocol SUManagerClientDelegate;


#import "STUpdateMonitor.h"

@interface STUpdateMonitorSUS : STUpdateMonitor <SUManagerClientDelegate>

 {
    SUManagerClient *_suManager;
    SUDownload *_currentUpdate;
    NSInteger _currentUpdateSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)currentUpdateSize;
-(id)bundleIdentifier;
-(id)currentUpdateName;
-(void)_setUpdate:(id)arg0 ;
-(void)checkForSystemUpdates;
-(void)client:(id)arg0 downloadDidFail:(id)arg1 withError:(id)arg2 ;
-(void)client:(id)arg0 downloadDidFinish:(id)arg1 ;
-(void)client:(id)arg0 downloadDidStart:(id)arg1 ;
-(void)client:(id)arg0 downloadProgressDidChange:(id)arg1 ;
-(void)startMonitor;
-(void)stopMonitor;
-(void)sync;


@end


#endif
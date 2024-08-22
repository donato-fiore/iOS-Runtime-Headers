// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSDIAGNOSTICSTATECOLLECTOR_H
#define WBSDIAGNOSTICSTATECOLLECTOR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSDiagnosticStateCollector : NSObject {
    NSUInteger _stateHandler;
    NSObject<OS_dispatch_queue> *_queue;
    id *_payloadProvider;
}


@property (copy, nonatomic) NSString *logLabel; // ivar: _logLabel
@property (readonly, nonatomic, getter=isRegisteredWithSysdiagnose) BOOL registeredWithSysdiagnose;


+(id)registeredStateCollectorWithLogLabel:(id)arg0 payloadProvider:(id)arg1 ;
-(id)initWithLogLabel:(id)arg0 payloadProvider:(id)arg1 ;
-(id)initWithLogLabel:(id)arg0 queue:(id)arg1 payloadProvider:(id)arg2 ;
-(struct os_state_data_s *)_createOSStateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(struct os_state_data_s *)test_createOSStateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)dealloc;
-(void)registerWithSysdiagnose;
-(void)unregister;


@end


#endif
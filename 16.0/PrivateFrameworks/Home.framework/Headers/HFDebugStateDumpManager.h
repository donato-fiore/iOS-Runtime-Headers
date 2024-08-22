// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFDEBUGSTATEDUMPMANAGER_H
#define HFDEBUGSTATEDUMPMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFDebugStateDumpManager : NSObject

@property (readonly, nonatomic) int logStateDumpNotifyToken; // ivar: _logStateDumpNotifyToken
@property (retain, nonatomic) NSMutableDictionary *stateDumpHandlersByName; // ivar: _stateDumpHandlersByName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateHandlerQueue; // ivar: _stateHandlerQueue


+(id)sharedInstance;
-(id)init;
-(id)performStateDump:(BOOL)arg0 ;
// -(id)registerStateDumpHandler:(id)arg0 withName:(unk)arg1  ;
-(void)dealloc;


@end


#endif
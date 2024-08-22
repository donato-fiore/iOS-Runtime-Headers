// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXDEBUGPLATFORM_H
#define MXDEBUGPLATFORM_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MXDebugPlatform : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *sysdiagnoseBlockQueue; // ivar: _sysdiagnoseBlockQueue
@property (readonly, retain, nonatomic) NSMutableDictionary *sysdiagnoseBlockRegistry; // ivar: _sysdiagnoseBlockRegistry


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)executeSysdiagnoseBlocks;
-(void)installSysdiagnoseBlock:(id)arg0 blockToRun:(id)arg1 ;


@end


#endif
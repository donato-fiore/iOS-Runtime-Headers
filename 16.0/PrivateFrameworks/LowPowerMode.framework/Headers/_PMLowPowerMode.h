// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PMLOWPOWERMODE_H
#define _PMLOWPOWERMODE_H

@class NSXPCConnection;
@protocol _PMLowPowerModeProtocol;

#import <Foundation/Foundation.h>


@interface _PMLowPowerMode : NSObject <_PMLowPowerModeProtocol>

 {
    NSXPCConnection *_connection;
}




+(id)sharedInstance;
-(BOOL)setPowerMode:(NSInteger)arg0 fromSource:(id)arg1 ;
-(BOOL)setPowerMode:(NSInteger)arg0 fromSource:(id)arg1 withParams:(id)arg2 ;
-(NSInteger)getPowerMode;
-(id)init;
-(void)dealloc;
-(void)setPowerMode:(NSInteger)arg0 fromSource:(id)arg1 withCompletion:(id)arg2 ;
-(void)setPowerMode:(NSInteger)arg0 fromSource:(id)arg1 withParams:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif
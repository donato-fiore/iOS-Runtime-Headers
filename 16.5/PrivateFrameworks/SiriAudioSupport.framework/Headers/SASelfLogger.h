// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASELFLOGGER_H
#define SASELFLOGGER_H


#import <Foundation/Foundation.h>


@interface SASelfLogger : NSObject



-(id)collectVMCPUStatsWithStage:(NSInteger)arg0 requestId:(id)arg1 ;
-(id)getSiriRequestUUIDFor:(id)arg0 ;
-(id)init;
-(void)emitMWTCheckPointWithMwtCheckpoint:(NSInteger)arg0 requestId:(id)arg1 ;
-(void)emitMWTCheckPointWithMwtCheckpoint:(NSInteger)arg0 requestId:(id)arg1 timeStamp:(NSUInteger)arg2 ;
-(void)emitMWTMusicMetadata:(id)arg0 requestId:(id)arg1 ;
-(void)emitVMCPUStatsWithStage:(NSInteger)arg0 requestId:(id)arg1 ;
-(void)emitVMCPUStatsWithVmCpuStatsData:(id)arg0 ;


@end


#endif
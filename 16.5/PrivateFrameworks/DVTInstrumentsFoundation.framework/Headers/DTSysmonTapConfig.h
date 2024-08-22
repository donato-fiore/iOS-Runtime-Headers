// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSYSMONTAPCONFIG_H
#define DTSYSMONTAPCONFIG_H

@class NSArray;


#import "DTTapConfig.h"

@interface DTSysmonTapConfig : DTTapConfig

@property (retain) NSArray *coalitionAttributes;
@property (retain) NSArray *processAttributes;
@property BOOL sampleCPUUsage;
@property (nonatomic) NSUInteger sampleInterval;
@property (copy, nonatomic) id *sessionHandler; // ivar: _sessionHandler
@property (retain) NSArray *systemAttributes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)pids;
-(void)addPid:(int)arg0 ;
-(void)setPids:(id)arg0 ;


@end


#endif
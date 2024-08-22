// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTERCEPTCONFIG_H
#define INTERCEPTCONFIG_H


#import <Foundation/Foundation.h>

#import "FigMetalExecutionStatus.h"

@interface InterceptConfig : NSObject

@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus; // ivar: _executionStatus
@property (nonatomic) int interceptLevel; // ivar: _interceptLevel
@property (nonatomic) BOOL waitUntilCompleted; // ivar: _waitUntilCompleted
@property (nonatomic) BOOL waitUntilScheduled; // ivar: _waitUntilScheduled


-(id)initWithLevel:(int)arg0 ;
-(void)loadExperimentsConfig;


@end


#endif
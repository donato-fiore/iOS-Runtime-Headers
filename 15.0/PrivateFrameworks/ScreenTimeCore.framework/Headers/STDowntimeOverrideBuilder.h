// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDOWNTIMEOVERRIDEBUILDER_H
#define STDOWNTIMEOVERRIDEBUILDER_H


#import <Foundation/Foundation.h>


@interface STDowntimeOverrideBuilder : NSObject



+(id)createAutomaticOverrideWithState:(NSInteger)arg0 schedule:(id)arg1 creationDate:(id)arg2 calendar:(id)arg3 ;
+(id)createFixedDurationOverrideWithInterval:(CGFloat)arg0 state:(NSInteger)arg1 creationDate:(id)arg2 calendar:(id)arg3 ;


@end


#endif
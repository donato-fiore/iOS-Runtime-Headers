// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDSIGNALHANDLER_H
#define SDSIGNALHANDLER_H


#import <Foundation/Foundation.h>


@interface SDSignalHandler : NSObject



+(void)addMemoryHandler;
+(void)addSignalHandler;
+(void)setDelegate:(id)arg0 memoryStatusFlags:(NSUInteger)arg1 ;
+(void)setupHandlers;


@end


#endif
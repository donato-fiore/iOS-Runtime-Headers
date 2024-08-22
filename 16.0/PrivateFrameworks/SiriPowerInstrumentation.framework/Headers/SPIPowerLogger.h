// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPIPOWERLOGGER_H
#define SPIPOWERLOGGER_H


#import <Foundation/Foundation.h>


@interface SPIPowerLogger : NSObject

@property (readonly, nonatomic) int pid; // ivar: pid
@property (readonly, nonatomic) unsigned char process; // ivar: process


-(id)captureSnapshot;
-(id)init;
-(id)initWithCurrentProcess;
-(id)initWithProcessIdentifier:(int)arg0 ;


@end


#endif
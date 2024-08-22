// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVIRTUALSCHEDULERJOB_H
#define CNVIRTUALSCHEDULERJOB_H


#import <Foundation/Foundation.h>


@interface CNVirtualSchedulerJob : NSObject

@property (readonly, copy) id *block; // ivar: _block
@property NSUInteger time; // ivar: _time


+(id)jobWithTime:(NSUInteger)arg0 block:(id)arg1 ;
-(id)description;
-(id)initWithTime:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif
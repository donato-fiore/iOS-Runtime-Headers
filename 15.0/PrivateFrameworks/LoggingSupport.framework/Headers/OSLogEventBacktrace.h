// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGEVENTBACKTRACE_H
#define OSLOGEVENTBACKTRACE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface OSLogEventBacktrace : NSObject

@property (readonly, nonatomic) NSArray *frames; // ivar: _frames


-(id)initWithBacktrace:(struct os_log_backtrace_s *)arg0 ;
-(id)initWithFrames:(id)arg0 ;
-(id)initWithSingleFrame:(id)arg0 ;
-(void)dealloc;


@end


#endif
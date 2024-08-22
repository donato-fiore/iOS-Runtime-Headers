// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNTIMEPROFILINGTASKOSLOGGER_H
#define _CNTIMEPROFILINGTASKOSLOGGER_H

@class NSString;
@protocol CNTaskTimeProfileLogging, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNTimeProfilingTaskOSLogger : NSObject <CNTaskTimeProfileLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_os_log> *os_log; // ivar: _os_log
@property (readonly) Class superclass;


-(id)init;
-(id)initWithOSLog:(id)arg0 ;
-(void)task:(id)arg0 didCompleteAfter:(CGFloat)arg1 ;
-(void)task:(id)arg0 didFailWithError:(id)arg1 after:(CGFloat)arg2 ;
-(void)taskWillBegin:(id)arg0 ;


@end


#endif
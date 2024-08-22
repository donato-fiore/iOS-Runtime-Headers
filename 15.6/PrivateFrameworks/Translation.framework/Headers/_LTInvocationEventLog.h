// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTINVOCATIONEVENTLOG_H
#define _LTINVOCATIONEVENTLOG_H


#import <Foundation/Foundation.h>

#import "_LTInvocationEventContext.h"

@interface _LTInvocationEventLog : NSObject

@property (readonly, nonatomic) _LTInvocationEventContext *context; // ivar: _context


-(id)init;
-(void)cancelWithReason:(id)arg0 ;
-(void)endSuccessfully;
-(void)endWithError:(id)arg0 ;
-(void)setLocales:(id)arg0 ;
-(void)setMode:(NSInteger)arg0 ;
-(void)setOnDevice:(BOOL)arg0 ;
-(void)setSessionID:(id)arg0 ;
-(void)setTask:(NSInteger)arg0 ;
-(void)start;


@end


#endif
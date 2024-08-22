// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNTRACEDLOGGER_H
#define CNTRACEDLOGGER_H


#import <Foundation/Foundation.h>


@interface CNTracedLogger : NSObject



-(void)traceKeyValuePairsOnLog:(id)arg0 withMessage:(struct __asl_object_s *)arg1 ;
-(void)traceLog:(id)arg0 ;
-(void)traceLog:(id)arg0 withMessage:(struct __asl_object_s *)arg1 ;
-(void)traceMessageOnLog:(id)arg0 withMessage:(struct __asl_object_s *)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPPOWERASSERTIONTHREAD_H
#define _CPPOWERASSERTIONTHREAD_H

@class NSThread, NSTimer, NSDate;



@interface _CPPowerAssertionThread : NSThread {
    NSTimer *_timer;
    NSDate *_earliest;
}




-(void)addAssertion:(id)arg0 ;
-(void)didTimeOut:(id)arg0 ;
-(void)main;


@end


#endif
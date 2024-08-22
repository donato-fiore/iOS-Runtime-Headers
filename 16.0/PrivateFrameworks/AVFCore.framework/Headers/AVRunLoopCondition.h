// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVRUNLOOPCONDITION_H
#define AVRUNLOOPCONDITION_H

@class NSCondition, NSMutableArray;



@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}




+(void)initialize;
-(BOOL)_waitInMode:(id)arg0 untilDate:(id)arg1 ;
-(BOOL)waitUntilDate:(id)arg0 ;
-(BOOL)waitUntilDate:(id)arg0 inMode:(id)arg1 ;
-(id)init;
-(void)_signalRunLoopWithState:(id)arg0 ;
-(void)broadcast;
-(void)dealloc;
-(void)signal;
-(void)wait;
-(void)waitInMode:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSBACKGROUNDTASK_H
#define VSBACKGROUNDTASK_H

@class BKSProcessAssertion, NSString;
@protocol VSBackgroundTaskDelegate;

#import <Foundation/Foundation.h>


@interface VSBackgroundTask : NSObject

@property (retain, nonatomic) BKSProcessAssertion *assertion; // ivar: _assertion
@property (weak, nonatomic) NSObject<VSBackgroundTaskDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)begin;
-(id)init;
-(void)end;


@end


#endif
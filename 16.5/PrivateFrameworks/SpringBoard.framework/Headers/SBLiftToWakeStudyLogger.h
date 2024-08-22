// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLIFTTOWAKESTUDYLOGGER_H
#define SBLIFTTOWAKESTUDYLOGGER_H

@class SLGLog, NSString;
@protocol SBLiftToWakeObserver;

#import <Foundation/Foundation.h>

#import "SBLiftToWakeController.h"

@interface SBLiftToWakeStudyLogger : NSObject <SBLiftToWakeObserver>

 {
    SLGLog *_logger;
    SBLiftToWakeController *_controller;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithController:(id)arg0 ;
-(void)dealloc;
-(void)liftToWakeController:(id)arg0 didObserveTransition:(NSInteger)arg1 deviceOrientation:(NSInteger)arg2 ;


@end


#endif
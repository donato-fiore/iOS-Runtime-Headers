// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROPPT_H
#define MIROPPT_H

@class NSString, NSDictionary, UIViewController;

#import <Foundation/Foundation.h>


@interface MiroPPT : NSObject

@property (retain, nonatomic) NSString *currentTestName; // ivar: _currentTestName
@property (retain, nonatomic) NSDictionary *currentTestOptions; // ivar: _currentTestOptions
@property (retain, nonatomic) UIViewController *playerViewController; // ivar: _playerViewController


+(id)sharedInstance;
-(BOOL)dismissAllModalViewControllers;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(int)currentTestIterations;
-(int)currentTestLength;
-(int)currentTestOffset;
-(void)failedCurrentTest;
-(void)finishedCurrentTest;
-(void)finishedCurrentTestWithExtraResults:(id)arg0 ;
-(void)startedCurrentTest;


@end


#endif
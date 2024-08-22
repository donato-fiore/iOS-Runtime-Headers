// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNRUNNINGBOARDINHIBITOR_H
#define _CNRUNNINGBOARDINHIBITOR_H

@class RBSAssertion, NSString;


#import "CNInhibitor.h"

@interface _CNRunningBoardInhibitor : CNInhibitor

@property (retain, nonatomic) RBSAssertion *assertion; // ivar: _assertion
@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation


+(id)os_log;
+(id)runningBoardTarget;
-(id)description;
-(id)initWithExplanation:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif
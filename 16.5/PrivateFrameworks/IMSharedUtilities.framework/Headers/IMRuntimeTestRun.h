// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMRUNTIMETESTRUN_H
#define IMRUNTIMETESTRUN_H


#import <Foundation/Foundation.h>

#import "IMRuntimeTest.h"

@interface IMRuntimeTestRun : NSObject

@property (getter=hasSucceeded) BOOL succeeded; // ivar: _succeeded
@property (readonly) IMRuntimeTest *test; // ivar: _test


-(id)initWithTest:(id)arg0 ;
-(void)recordFailureWithDescription:(id)arg0 inFile:(id)arg1 atLine:(NSUInteger)arg2 expected:(BOOL)arg3 ;
-(void)start;
-(void)stop;


@end


#endif
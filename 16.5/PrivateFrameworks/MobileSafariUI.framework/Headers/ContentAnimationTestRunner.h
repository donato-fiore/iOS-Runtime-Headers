// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTENTANIMATIONTESTRUNNER_H
#define CONTENTANIMATIONTESTRUNNER_H

@class NSMutableDictionary;


#import "PurplePageLoadTestRunner.h"

@interface ContentAnimationTestRunner : PurplePageLoadTestRunner {
    NSMutableDictionary *_outputData;
    CGFloat _testDuration;
}




-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(id)finalStatusForPage:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(id)outputDataForPage:(id)arg0 ;
-(void)finishedTestPage:(id)arg0 ;
-(void)finishedTestRunner;
-(void)writeOutputData;


@end


#endif
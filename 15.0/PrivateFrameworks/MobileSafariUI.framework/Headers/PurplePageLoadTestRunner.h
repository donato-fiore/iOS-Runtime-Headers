// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PURPLEPAGELOADTESTRUNNER_H
#define PURPLEPAGELOADTESTRUNNER_H

@class NSMutableDictionary;


#import "PageLoadTestRunner.h"

@interface PurplePageLoadTestRunner : PageLoadTestRunner {
    NSMutableDictionary *_pptResults;
}


@property (nonatomic) BOOL showFirstVisualLayoutTime; // ivar: _showFirstVisualLayoutTime
@property (nonatomic) BOOL showLoadTime; // ivar: _showLoadTime
@property (nonatomic) BOOL showRenderFps; // ivar: _showRenderFps
@property (nonatomic) BOOL showRenderTime; // ivar: _showRenderTime


-(id)initRenderTestWithName:(id)arg0 browserController:(id)arg1 showRenderTime:(BOOL)arg2 showFPS:(BOOL)arg3 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(void)collectPPTResults;
-(void)finishedTestRunner;
-(void)pptResultFor:(id)arg0 measure:(id)arg1 time:(CGFloat)arg2 ;
-(void)pptResultFor:(id)arg0 measure:(id)arg1 value:(CGFloat)arg2 units:(id)arg3 ;
-(void)startingTestRunner;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTENTINTERACTIONTESTRUNNER_H
#define CONTENTINTERACTIONTESTRUNNER_H



#import "PageLoadTestRunner.h"

@interface ContentInteractionTestRunner : PageLoadTestRunner

@property (nonatomic) int iterations; // ivar: _iterations


-(BOOL)startPageAction:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(id)pageWebView;
-(void)endTrackingFrameRate;
-(void)startSubtest:(id)arg0 ;
-(void)startTrackingFrameRate;
-(void)stopSubtest:(id)arg0 ;


@end


#endif
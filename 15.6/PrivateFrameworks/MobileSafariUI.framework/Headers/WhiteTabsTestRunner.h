// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WHITETABSTESTRUNNER_H
#define WHITETABSTESTRUNNER_H



#import "ReplayPagesTestRunner.h"

@interface WhiteTabsTestRunner : ReplayPagesTestRunner {
    NSUInteger _runCount;
    NSUInteger _totalHibernatedTabs;
    NSUInteger _totalLiveTabs;
}




-(id)init;
-(void)collectPPTResults;
-(void)finishedTestPage:(id)arg0 ;


@end


#endif
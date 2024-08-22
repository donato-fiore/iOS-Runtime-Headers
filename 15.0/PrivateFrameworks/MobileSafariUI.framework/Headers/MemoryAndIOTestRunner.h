// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEMORYANDIOTESTRUNNER_H
#define MEMORYANDIOTESTRUNNER_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "BrowserController.h"

@interface MemoryAndIOTestRunner : NSObject {
    BrowserController *_browserController;
    NSString *_testName;
    id *_completionHandler;
    NSUInteger _tabsLoadedCount;
    NSUInteger _liveTabs;
    NSUInteger _type;
    int writesAtStart;
    NSUInteger _totalTabsToLoad;
}


@property (readonly, nonatomic) NSURL *testPageURL;


-(NSUInteger)_collectCurrentLiveTabs;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 type:(NSUInteger)arg2 ;
-(void)_collectIOUsageInfo:(id)arg0 ;
-(void)_collectMemoryUsageInfo:(id)arg0 ;
-(void)_collectTestResults;
-(void)_openNewTabAndLoadTestURL;
-(void)runTestWithCompletion:(id)arg0 ;


@end


#endif
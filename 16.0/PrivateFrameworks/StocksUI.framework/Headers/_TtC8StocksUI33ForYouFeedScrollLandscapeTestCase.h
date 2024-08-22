// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI33FORYOUFEEDSCROLLLANDSCAPETESTCASE_H
#define _TTC8STOCKSUI33FORYOUFEEDSCROLLLANDSCAPETESTCASE_H

@class NSArray, NSString;
@protocol SNTestCaseScroll, SNTestRunOptions;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI33ForYouFeedScrollLandscapeTestCase : NSObject <SNTestCaseScroll, SNTestRunOptions>

 {
    ? testName;
    ? requiredCapabilities;
}


@property (nonatomic, readonly) NSUInteger aggregate; // ivar: aggregate
@property (nonatomic, readonly) NSInteger iterations; // ivar: iterations
@property (nonatomic, readonly) NSInteger numberOfScreens; // ivar: numberOfScreens
@property (nonatomic, readonly) NSInteger offset; // ivar: offset
@property (nonatomic, readonly) NSInteger orientation; // ivar: orientation
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) CGFloat timeoutInSeconds; // ivar: timeoutInSeconds
@property (nonatomic, readonly) BOOL waitForCommitToFinish; // ivar: waitForCommitToFinish


-(id)init;
-(id)scrollViewWithContext:(id)arg0 ;


@end


#endif
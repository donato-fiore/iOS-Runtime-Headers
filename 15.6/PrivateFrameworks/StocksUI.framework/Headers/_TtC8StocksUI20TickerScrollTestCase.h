// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8STOCKSUI20TICKERSCROLLTESTCASE_H
#define _TTC8STOCKSUI20TICKERSCROLLTESTCASE_H

@class NSArray, NSString;
@protocol SNTestCaseScroll;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI20TickerScrollTestCase : NSObject <SNTestCaseScroll>

 {
    ? testName;
    ? requiredCapabilities;
}


@property (nonatomic, readonly) NSUInteger aggregate; // ivar: aggregate
@property (nonatomic, readonly) NSInteger iterations; // ivar: iterations
@property (nonatomic, readonly) NSInteger numberOfScreens; // ivar: numberOfScreens
@property (nonatomic, readonly) NSInteger offset; // ivar: offset
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) NSUInteger scrollDirection; // ivar: scrollDirection
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) CGFloat timeoutInSeconds; // ivar: timeoutInSeconds


-(id)init;
-(id)scrollViewWithContext:(id)arg0 ;


@end


#endif
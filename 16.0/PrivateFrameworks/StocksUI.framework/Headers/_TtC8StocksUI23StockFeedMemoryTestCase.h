// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI23STOCKFEEDMEMORYTESTCASE_H
#define _TTC8STOCKSUI23STOCKFEEDMEMORYTESTCASE_H

@class NSString;
@protocol SNTestCaseRun;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI23StockFeedMemoryTestCase : NSObject <SNTestCaseRun>

 {
    ? testName;
}


@property (nonatomic, readonly) NSUInteger aggregate; // ivar: aggregate
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) CGFloat timeoutInSeconds; // ivar: timeoutInSeconds


-(id)init;
-(void)runTestWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif
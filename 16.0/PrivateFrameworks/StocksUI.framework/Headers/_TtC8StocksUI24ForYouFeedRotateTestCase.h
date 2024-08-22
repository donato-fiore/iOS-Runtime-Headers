// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI24FORYOUFEEDROTATETESTCASE_H
#define _TTC8STOCKSUI24FORYOUFEEDROTATETESTCASE_H

@class NSArray, NSString;
@protocol SNTestCaseRotate;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI24ForYouFeedRotateTestCase : NSObject <SNTestCaseRotate>

 {
    ? testName;
    ? requiredCapabilities;
}


@property (nonatomic, readonly) NSUInteger aggregate; // ivar: aggregate
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) NSInteger rotateOrientation; // ivar: rotateOrientation
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) CGFloat timeoutInSeconds; // ivar: timeoutInSeconds


-(id)init;


@end


#endif
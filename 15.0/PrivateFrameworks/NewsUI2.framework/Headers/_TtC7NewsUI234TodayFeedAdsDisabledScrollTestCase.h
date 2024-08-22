// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI234TODAYFEEDADSDISABLEDSCROLLTESTCASE_H
#define _TTC7NEWSUI234TODAYFEEDADSDISABLEDSCROLLTESTCASE_H

@class NSString;
@protocol SNTestCaseScroll;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI234TodayFeedAdsDisabledScrollTestCase : NSObject <SNTestCaseScroll>

 {
    ? testName;
}


@property (nonatomic, readonly) NSUInteger aggregate; // ivar: aggregate
@property (nonatomic, readonly) NSInteger iterations; // ivar: iterations
@property (nonatomic, readonly) NSInteger numberOfScreens; // ivar: numberOfScreens
@property (nonatomic, readonly) NSInteger offset; // ivar: offset
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) CGFloat timeoutInSeconds; // ivar: timeoutInSeconds


-(id)init;
-(id)scrollViewWithContext:(id)arg0 ;


@end


#endif
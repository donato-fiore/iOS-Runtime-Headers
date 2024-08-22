// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7NEWSUI222OPENWEBARTICLETESTCASE_H
#define _TTC7NEWSUI222OPENWEBARTICLETESTCASE_H

@class NSString;
@protocol SNTestCaseRun;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI222OpenWebArticleTestCase : NSObject <SNTestCaseRun>

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
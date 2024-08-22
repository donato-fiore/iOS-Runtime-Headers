// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PURPLEFLOWMANAGEDPAGELOADTESTRUNNER_H
#define PURPLEFLOWMANAGEDPAGELOADTESTRUNNER_H



#import "PurplePageLoadTestRunner.h"

@interface PurpleFlowManagedPageLoadTestRunner : PurplePageLoadTestRunner {
    int _notifyToken;
}




-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(void)dealloc;
-(void)startNextPage;


@end


#endif
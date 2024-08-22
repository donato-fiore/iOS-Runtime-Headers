// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REPLAYPAGESTESTRUNNER_H
#define REPLAYPAGESTESTRUNNER_H



#import "PurplePageLoadTestRunner.h"

@interface ReplayPagesTestRunner : PurplePageLoadTestRunner {
    *__sFILE _suiteFile;
    NSUInteger _attemptCount;
    NSUInteger _successCount;
}


@property (nonatomic) BOOL eternal; // ivar: _eternal


-(BOOL)loadTestSuiteFile:(id)arg0 ;
-(void)dealloc;
-(void)finishedTestPage:(id)arg0 ;
-(void)startNextPage;


@end


#endif
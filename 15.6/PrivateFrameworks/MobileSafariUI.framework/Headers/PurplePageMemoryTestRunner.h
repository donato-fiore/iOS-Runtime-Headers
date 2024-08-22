// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PURPLEPAGEMEMORYTESTRUNNER_H
#define PURPLEPAGEMEMORYTESTRUNNER_H



#import "PurplePageLoadTestRunner.h"

@interface PurplePageMemoryTestRunner : PurplePageLoadTestRunner



-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(void)_updatePageLoad:(id)arg0 stats:(id)arg1 ;
-(void)collectPPTResults;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCROLLTESTPROCESSOR_H
#define SCROLLTESTPROCESSOR_H



#import "ContentInteractionTestRunner.h"

@interface ScrollTestProcessor : ContentInteractionTestRunner

@property (nonatomic) int scrollDelta; // ivar: _scrollDelta
@property (nonatomic) BOOL startedScrollTest; // ivar: _startedScrollTest


-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;


@end


#endif
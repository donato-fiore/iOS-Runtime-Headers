// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROLLDECELERATIONTESTPROCESSOR_H
#define SCROLLDECELERATIONTESTPROCESSOR_H



#import "ContentInteractionTestRunner.h"

@interface ScrollDecelerationTestProcessor : ContentInteractionTestRunner

@property (nonatomic) int iterationsRemaining; // ivar: _iterationsRemaining
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;


@end


#endif
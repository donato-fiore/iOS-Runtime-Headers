// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ROTATIONTESTPROCESSOR_H
#define ROTATIONTESTPROCESSOR_H



#import "ContentInteractionTestRunner.h"

@interface RotationTestProcessor : ContentInteractionTestRunner

@property (nonatomic) int iterationsRemaining; // ivar: _iterationsRemaining
@property (nonatomic) NSInteger testState; // ivar: _testState


-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(void)startRotation;


@end


#endif
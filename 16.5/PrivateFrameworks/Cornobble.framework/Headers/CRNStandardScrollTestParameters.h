// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRNSTANDARDSCROLLTESTPARAMETERS_H
#define CRNSTANDARDSCROLLTESTPARAMETERS_H

@class NSString;


#import "CRNGroupScrollTestParameters.h"

@interface CRNStandardScrollTestParameters : CRNGroupScrollTestParameters {
    NSString *_testName;
}


@property (nonatomic) CGFloat amplitude; // ivar: _amplitude
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) CGFloat iterationDuration; // ivar: _iterationDuration
@property (nonatomic) NSUInteger iterations; // ivar: _iterations
@property (nonatomic) BOOL preventDismissalGestures; // ivar: _preventDismissalGestures
@property (nonatomic) CGRect scrollingBounds; // ivar: _scrollingBounds
@property (nonatomic) BOOL shouldFlick; // ivar: _shouldFlick


+(id)parametersForTestName:(id)arg0 scrollView:(id)arg1 iterations:(NSUInteger)arg2 amplitude:(CGFloat)arg3 direction:(NSInteger)arg4 preventDismissalGestures:(BOOL)arg5 canUseFlicks:(BOOL)arg6 completionHandler:(id)arg7 ;
+(id)parametersForTestName:(id)arg0 scrollView:(id)arg1 iterations:(NSUInteger)arg2 direction:(NSInteger)arg3 preventDismissalGestures:(BOOL)arg4 canUseFlicks:(BOOL)arg5 ;
+(id)parametersForTestName:(id)arg0 scrollView:(id)arg1 iterations:(NSUInteger)arg2 direction:(NSInteger)arg3 preventDismissalGestures:(BOOL)arg4 canUseFlicks:(BOOL)arg5 completionHandler:(id)arg6 ;
+(id)parametersForTestName:(id)arg0 scrollView:(id)arg1 iterations:(NSUInteger)arg2 preventDismissalGestures:(BOOL)arg3 canUseFlicks:(BOOL)arg4 completionHandler:(id)arg5 ;
-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 iterations:(NSUInteger)arg1 scrollingBounds:(struct CGRect )arg2 amplitude:(CGFloat)arg3 direction:(NSInteger)arg4 preventDismissalGestures:(BOOL)arg5 iterationDuration:(CGFloat)arg6 canUseFlicks:(BOOL)arg7 ;
-(id)initWithTestName:(id)arg0 iterations:(NSUInteger)arg1 scrollingBounds:(struct CGRect )arg2 amplitude:(CGFloat)arg3 direction:(NSInteger)arg4 preventDismissalGestures:(BOOL)arg5 iterationDuration:(CGFloat)arg6 canUseFlicks:(BOOL)arg7 completionHandler:(id)arg8 ;
-(id)testName;
-(void)setTestName:(id)arg0 ;


@end


#endif
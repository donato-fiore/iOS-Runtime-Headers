// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTDIRECTIONALCROWNTESTPARAMETERS_H
#define RPTDIRECTIONALCROWNTESTPARAMETERS_H

@class NSString;
@protocol RPTTestParameters;

#import <Foundation/Foundation.h>


@interface RPTDirectionalCrownTestParameters : NSObject <RPTTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) id *composerBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (nonatomic) CGFloat rotationDuration; // ivar: _rotationDuration
@property (nonatomic) CGFloat screenSpaceMultiplier; // ivar: _screenSpaceMultiplier
@property (nonatomic) CGSize scrollingSize; // ivar: _scrollingSize
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)initWithTestName:(id)arg0 scrollView:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTestName:(id)arg0 scrollingSize:(struct CGSize )arg1 screenSpaceMultiplier:(CGFloat)arg2 rotationDuration:(CGFloat)arg3 direction:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)prepareWithComposer:(id)arg0 ;


@end


#endif
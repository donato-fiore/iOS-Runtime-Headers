// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPTPAGINGSCROLLTESTPARAMETERS_H
#define RPTPAGINGSCROLLTESTPARAMETERS_H

@class NSString;
@protocol _RPTCoordinateSpaces, RPTTestParameters;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTPagingScrollTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>



@property (nonatomic) CGFloat amplitude; // ivar: _amplitude
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat iterationDuration; // ivar: _iterationDuration
@property (nonatomic) NSUInteger iterations; // ivar: _iterations
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly, nonatomic) NSInteger realDirection; // ivar: _realDirection
@property (nonatomic) CGRect scrollingBounds; // ivar: _scrollingBounds
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName
@property (nonatomic) BOOL useFlicks; // ivar: _useFlicks


-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 iterations:(NSUInteger)arg1 scrollingBounds:(struct CGRect )arg2 amplitude:(CGFloat)arg3 direction:(NSInteger)arg4 iterationDuration:(CGFloat)arg5 useFlicks:(BOOL)arg6 completionHandler:(id)arg7 ;
-(struct pair<CGPoint, CGPoint> )initialAndFinalPositions;
-(void)prepareWithComposer:(id)arg0 ;
-(void)scrollWithComposer:(id)arg0 fromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 duration:(CGFloat)arg3 ;


@end


#endif
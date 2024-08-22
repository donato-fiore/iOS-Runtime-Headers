// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPTDIRECTIONALSWIPETESTPARAMETERS_H
#define RPTDIRECTIONALSWIPETESTPARAMETERS_H

@class NSString, NSNumber;
@protocol RPTTestParameters;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTDirectionalSwipeTestParameters : NSObject <RPTTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) id *composerBlock;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (nonatomic) CGRect scrollingBounds; // ivar: _scrollingBounds
@property (nonatomic) BOOL shouldFlick; // ivar: _shouldFlick
@property (readonly) Class superclass;
@property (nonatomic) NSInteger swipeCount; // ivar: _swipeCount
@property (retain, nonatomic) NSNumber *swipeSpeedFactor; // ivar: _swipeSpeedFactor
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)initWithTestName:(id)arg0 scrollView:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTestName:(id)arg0 scrollingBounds:(struct CGRect )arg1 swipeCount:(NSInteger)arg2 direction:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)prepareWithComposer:(id)arg0 ;
-(void)scrollWithComposer:(id)arg0 fromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 speedFactor:(id)arg3 ;


@end


#endif
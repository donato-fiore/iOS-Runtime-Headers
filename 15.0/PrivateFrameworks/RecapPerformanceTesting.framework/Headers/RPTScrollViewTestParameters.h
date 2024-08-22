// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPTSCROLLVIEWTESTPARAMETERS_H
#define RPTSCROLLVIEWTESTPARAMETERS_H

@class NSString;
@protocol _RPTCoordinateSpaces, RPTTestParameters;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTScrollViewTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>



@property (nonatomic) CGFloat amplitude; // ivar: _amplitude
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) id *composerBlock;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat iterationDurationFactor; // ivar: _iterationDurationFactor
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (nonatomic) BOOL preventSheetDismissal; // ivar: _preventSheetDismissal
@property (nonatomic) CGRect scrollingBounds; // ivar: _scrollingBounds
@property (nonatomic) BOOL shouldFlick; // ivar: _shouldFlick
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName


+(id)newWithTestName:(id)arg0 scrollBounds:(struct CGRect )arg1 amplitude:(CGFloat)arg2 direction:(NSInteger)arg3 completionHandler:(id)arg4 ;
+(id)newWithTestName:(id)arg0 scrollView:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithTestName:(id)arg0 scrollBounds:(struct CGRect )arg1 amplitude:(CGFloat)arg2 direction:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(id)initWithTestName:(id)arg0 scrollView:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareWithComposer:(id)arg0 ;


@end


#endif
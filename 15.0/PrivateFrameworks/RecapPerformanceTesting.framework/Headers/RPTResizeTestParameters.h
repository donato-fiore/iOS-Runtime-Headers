// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPTRESIZETESTPARAMETERS_H
#define RPTRESIZETESTPARAMETERS_H

@class NSString, UIWindow;
@protocol _RPTCoordinateSpaces, RPTTestParameters;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTResizeTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (nonatomic) CGSize maximumWindowSize; // ivar: _maximumWindowSize
@property (nonatomic) CGSize minimumWindowSize; // ivar: _minimumWindowSize
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 window:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareWithComposer:(id)arg0 ;


@end


#endif
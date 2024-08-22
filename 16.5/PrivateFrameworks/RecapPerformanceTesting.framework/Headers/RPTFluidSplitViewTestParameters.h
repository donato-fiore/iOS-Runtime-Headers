// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTFLUIDSPLITVIEWTESTPARAMETERS_H
#define RPTFLUIDSPLITVIEWTESTPARAMETERS_H

@class UISplitViewController, UIViewController, NSString;
@protocol _RPTCoordinateSpaces, RPTTestParameters;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTFluidSplitViewTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>

 {
    UISplitViewController *_splitViewController;
    UIViewController *_supplementalController;
    UIViewController *_primaryController;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) id *composerBlock;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)initWithTestName:(id)arg0 splitViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareWithComposer:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTDRAGTESTPARAMETERS_H
#define RPTDRAGTESTPARAMETERS_H

@class NSString, UIWindow;
@protocol _RPTCoordinateSpaces, RPTTestParameters;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTDragTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 window:(id)arg1 completionHandler:(id)arg2 ;
-(void)_makeDraggableVectors:(struct CGVector *)arg0 forWindow:(id)arg1 ;
-(void)prepareWithComposer:(id)arg0 ;


@end


#endif
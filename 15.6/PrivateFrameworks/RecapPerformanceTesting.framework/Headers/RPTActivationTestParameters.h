// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPTACTIVATIONTESTPARAMETERS_H
#define RPTACTIVATIONTESTPARAMETERS_H

@class NSString, UIWindow;
@protocol RPTTestParameters;

#import <Foundation/Foundation.h>


@interface RPTActivationTestParameters : NSObject <RPTTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 window:(id)arg1 completionHandler:(id)arg2 ;
-(void)_doTest;
-(void)prepareWithComposer:(id)arg0 ;


@end


#endif
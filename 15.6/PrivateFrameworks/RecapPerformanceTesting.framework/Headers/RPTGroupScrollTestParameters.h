// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPTGROUPSCROLLTESTPARAMETERS_H
#define RPTGROUPSCROLLTESTPARAMETERS_H

@class NSString, NSArray;
@protocol RPTBlockBasedScrollTestParameters, RPTTestParameters;

#import <Foundation/Foundation.h>


@interface RPTGroupScrollTestParameters : NSObject <RPTBlockBasedScrollTestParameters, RPTTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (retain, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: testName


+(id)newWithTestName:(id)arg0 parameters:(id)arg1 completionHandler:(id)arg2 ;
-(id)composerBlock:(SEL)arg0 ;
-(void)prepareWithComposer:(id)arg0 ;


@end


#endif
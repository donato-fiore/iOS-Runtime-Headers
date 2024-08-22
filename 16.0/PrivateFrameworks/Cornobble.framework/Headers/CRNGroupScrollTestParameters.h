// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRNGROUPSCROLLTESTPARAMETERS_H
#define CRNGROUPSCROLLTESTPARAMETERS_H

@class NSString, RCPSyntheticEventStream, NSArray;
@protocol CRNScrollTestParameters, CRNBlockBasedScrollTestParameters;

#import <Foundation/Foundation.h>


@interface CRNGroupScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: testName


+(id)parametersByCombining:(id)arg0 testName:(id)arg1 completionHandler:(id)arg2 ;
-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 withParameters:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRNBLOCKSCROLLTESTPARAMETERS_H
#define CRNBLOCKSCROLLTESTPARAMETERS_H

@class NSString, RCPSyntheticEventStream;
@protocol CRNScrollTestParameters, CRNBlockBasedScrollTestParameters;

#import <Foundation/Foundation.h>


@interface CRNBlockScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *composerBlock; // ivar: _composerBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)initWithTestName:(id)arg0 withComposerBlock:(id)arg1 ;
// -(id)initWithTestName:(id)arg0 withComposerBlock:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif
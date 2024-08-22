// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTESTSERVICE_H
#define PLTESTSERVICE_H

@class PLService, PLXPCResponderOperatorComposition;



@interface PLTestService : PLService

@property (retain) PLXPCResponderOperatorComposition *presubmissionTestResponder; // ivar: _presubmissionTestResponder


+(void)load;
-(id)init;
-(id)presubmissionTest_testEPLMode:(id)arg0 withParam:(id)arg1 ;
-(void)initOperatorDependancies;


@end


#endif
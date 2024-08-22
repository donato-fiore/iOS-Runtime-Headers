// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKPPT_H
#define HKPPT_H

@class NSMutableDictionary;
@protocol HKPPTController, HKPPTInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKPPT : NSObject <HKPPTController>

 {
    id<HKPPTInterface> *_pptInterface;
    NSObject<OS_dispatch_queue> *_pptQueue;
    NSMutableDictionary *_activeTestsByName;
}




-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(id)_testNameForDriver:(id)arg0 ;
-(id)builtinTests;
-(id)init;
-(id)initWithHKPPTInterface:(id)arg0 usingQueue:(id)arg1 ;
-(void)_failedTest:(id)arg0 ;
-(void)_failedTest:(id)arg0 withResults:(id)arg1 ;
-(void)_finishedTest:(id)arg0 ;
-(void)_finishedTest:(id)arg0 extraResults:(id)arg1 ;
-(void)_startedTest:(id)arg0 ;
-(void)dealloc;
-(void)failedTest:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(void)finishedTest:(id)arg0 extraResults:(id)arg1 ;
-(void)invalidConfigurationForTest:(id)arg0 error:(id)arg1 ;
-(void)startedTest:(id)arg0 ;


@end


#endif
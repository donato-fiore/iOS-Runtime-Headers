// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMENSTRUALCYCLESDIAGNOSTICS_H
#define HKMENSTRUALCYCLESDIAGNOSTICS_H

@class HKTaskServerProxyProvider, NSString, HKHealthStore;
@protocol HKMenstrualCyclesDiagnosticsInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKMenstrualCyclesDiagnostics : NSObject <HKMenstrualCyclesDiagnosticsInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;


-(id)_actionCompletionOnClientQueue:(SEL)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)triggerAnalysisForDiagnosticsWithCompletion:(id)arg0 ;


@end


#endif
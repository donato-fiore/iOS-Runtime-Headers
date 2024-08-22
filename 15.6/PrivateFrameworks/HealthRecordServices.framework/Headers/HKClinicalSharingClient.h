// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALSHARINGCLIENT_H
#define HKCLINICALSHARINGCLIENT_H

@class HKProxyProvider, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKClinicalSharingClient : NSObject <_HKXPCExportable>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteInterface;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInvalidated;
-(void)gatherQueryDiagnosticsWithOptions:(NSUInteger)arg0 date:(id)arg1 completion:(id)arg2 ;
-(void)scheduleSharingHealthDataWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)shareHealthDataWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)shareHealthDataWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 date:(id)arg2 completion:(id)arg3 ;
-(void)submitDailyAnalyticsWithCompletion:(id)arg0 ;
-(void)submitOnboardingAnalyticsForStepIdentifier:(id)arg0 context:(id)arg1 completion:(id)arg2 ;


@end


#endif
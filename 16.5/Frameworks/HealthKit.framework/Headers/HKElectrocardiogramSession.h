// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKELECTROCARDIOGRAMSESSION_H
#define HKELECTROCARDIOGRAMSESSION_H

@class NSString;
@protocol _HKXPCExportable, HKElectrocardiogramSessionClientInterface, HKElectrocardiogramSessionDelegate;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"
#import "HKElectrocardiogramSessionConfiguration.h"

@interface HKElectrocardiogramSession : NSObject <_HKXPCExportable, HKElectrocardiogramSessionClientInterface>

 {
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKElectrocardiogramSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKElectrocardiogramSessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration
@property (readonly) Class superclass;


+(BOOL)isElectrocardiogramSessionAvailable;
+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 configuration:(id)arg1 ;
-(id)remoteInterface;
-(void)abortWithCompletion:(id)arg0 ;
-(void)clientRemote_didDetectContactAtDate:(id)arg0 ;
-(void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)arg0 ;
-(void)clientRemote_didEndWithReason:(NSInteger)arg0 error:(id)arg1 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif
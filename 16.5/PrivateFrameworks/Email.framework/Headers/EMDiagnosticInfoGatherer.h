// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMDIAGNOSTICINFOGATHERER_H
#define EMDIAGNOSTICINFOGATHERER_H

@class NSString, EFLocked;
@protocol EFLoggable, EMDiagnosticInfoProvidingXPC, EFCancelable, EFScheduler;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoProvidingXPC>

 {
    os_unfair_lock_s _providerCancelableLock;
    uint8_t _hasRegisteredAsDiagnosticProvider;
}


@property (retain, nonatomic) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<EFCancelable> *providerCancelable; // ivar: _providerCancelable
@property (retain, nonatomic) NSObject<EFScheduler> *providerQueue; // ivar: _providerQueue
@property (retain, nonatomic) EFLocked *providers; // ivar: _providers
@property (readonly) Class superclass;


+(id)localDiagnosticsDirectoryURL;
+(id)log;
+(id)remoteInterface;
-(id)_moveLocalDiagnosticsTo:(id)arg0 ;
-(id)initWithRemoteConnection:(id)arg0 ;
-(id)registerDiagnosticInfoProvider:(id)arg0 ;
-(void)_registerSelfAsProviderIfRequired;
-(void)databaseStatisticsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)fetchControllerStatusWithCompletionHandler:(id)arg0 ;
-(void)gatherDiagnosticsWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)provideDiagnosticsAt:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif
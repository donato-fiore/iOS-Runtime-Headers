// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUBMANAGER_H
#define SUBMANAGER_H

@protocol SUBManagerDelegate, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SUBManager : NSObject {
    uint8_t _hasQueriedStateOnceFlag;
}


@property (weak, nonatomic) NSObject<SUBManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_xpc_object> *serverConnection; // ivar: _serverConnection


+(void)initialize;
-(id)initWithDelegate:(id)arg0 ;
-(void)_forwardDownloadProgress:(id)arg0 ;
-(void)_forwardInstallResult:(id)arg0 ;
-(void)_forwardInstallationAwaitingUserInteraction:(id)arg0 ;
-(void)_forwardInstallationCanProceed:(id)arg0 ;
-(void)_forwardInstallationWillProceed:(id)arg0 ;
-(void)_forwardScanResult:(id)arg0 ;
-(void)_forwardUserDidAcceptTermsAndConditionsChanged:(id)arg0 ;
-(void)_forwardUserInstallRequestTypeChanged:(id)arg0 ;
-(void)dealloc;
-(void)getCloudDescriptors:(id)arg0 ;
-(void)installUpdate:(id)arg0 ;
-(void)installUpdate:(id)arg0 passcode:(id)arg1 ;
-(void)managerState:(id)arg0 ;
-(void)performMigration;
-(void)purgeUpdate:(id)arg0 completion:(id)arg1 ;
-(void)removeCloudDescriptor:(id)arg0 ;
-(void)scanForUpdates;
-(void)sendTermsRequest:(id)arg0 ;
-(void)setUserInstallRequestTypeForUpdate:(id)arg0 userInstallRequestType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)startDownload:(id)arg0 ;
-(void)startDownload:(id)arg0 passcode:(id)arg1 ;
-(void)supportsInstallTonightWithCompletion:(id)arg0 ;
-(void)userDidAcceptTermsAndConditionsForUpdate:(id)arg0 ;
-(void)userDidAcceptTermsAndConditionsForUpdate:(id)arg0 completion:(id)arg1 ;


@end


#endif
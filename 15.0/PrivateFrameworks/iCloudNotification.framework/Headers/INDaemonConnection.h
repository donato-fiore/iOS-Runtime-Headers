// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INDAEMONCONNECTION_H
#define INDAEMONCONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface INDaemonConnection : NSObject {
    NSXPCConnection *_connection;
}




-(BOOL)clearAllRegistrationDigestsWithError:(*id)arg0 ;
-(BOOL)registerAccount:(id)arg0 foriCloudNotificationsWithReason:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)unregisterAccount:(id)arg0 fromiCloudNotificationsWithError:(*id)arg1 ;
-(id)diagnosticReport;
-(id)iCloudServerOfferForAccount:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)commonHeadersForRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)iCloudServerOfferForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)notifyDeviceStorageLevel:(NSInteger)arg0 completion:(id)arg1 ;
-(void)presentHiddenFreshmintWithContext:(id)arg0 completion:(id)arg1 ;
-(void)registerAccount:(id)arg0 foriCloudNotificationsWithReason:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)renewCredentialsWithCompletion:(id)arg0 ;
-(void)unregisterAccount:(id)arg0 fromiCloudNotificationsWithCompletion:(id)arg1 ;
-(void)updateOfferForAccount:(id)arg0 offerId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(id)arg4 ;


@end


#endif
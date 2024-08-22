// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APREQUESTHANDLER_H
#define APREQUESTHANDLER_H


#import <Foundation/Foundation.h>


@interface APRequestHandler : NSObject



+(void)addRequestWithURL:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
+(void)checkDownloadQueueWithContentType:(NSInteger)arg0 ;
+(void)didReceiveStorePushNotificationWithPayload:(id)arg0 ;
+(void)getCachedRequestsWithCompletion:(id)arg0 ;
+(void)getRequestWithIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)localApproveRequestWithItemIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)presentApprovalSheetWithRequestIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)presentProductPageWithTitle:(id)arg0 body:(id)arg1 approve:(id)arg2 decline:(id)arg3 itemIdentifier:(id)arg4 previewURL:(id)arg5 ;
+(void)resetAccountWithType:(NSInteger)arg0 ;
+(void)startDaemon;
+(void)updateRequestWithIdentifier:(id)arg0 action:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif
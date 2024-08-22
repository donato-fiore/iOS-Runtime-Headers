// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSMINITIPCONTENTMANAGER_H
#define TPSMINITIPCONTENTMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSServiceConnection.h"

@interface TPSMiniTipContentManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) TPSServiceConnection *serviceProxy; // ivar: _serviceProxy


-(id)_actionCompletionOnClientQueue:(SEL)arg0 ;
-(id)_contentWithContentIDCompletionOnClientQueue:(SEL)arg0 ;
-(id)init;
// -(void)_performSyncWithProxyHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_performWithProxyHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)contentWithContentIdentifiers:(id)arg0 bundleID:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)hintDismissedForIdentifier:(id)arg0 bundleID:(id)arg1 context:(id)arg2 reason:(NSInteger)arg3 ;
-(void)hintDisplayedForIdentifier:(id)arg0 correlationID:(id)arg1 context:(id)arg2 ;
-(void)invalidate;
-(void)personalizationFailedForContentID:(id)arg0 bundleID:(id)arg1 context:(id)arg2 ;
-(void)restartTrackingForContentIdentifiers:(id)arg0 ;
-(void)validateAndPrepareContentForDisplay:(id)arg0 bundleID:(id)arg1 context:(id)arg2 synchronous:(BOOL)arg3 skipUsageCheck:(BOOL)arg4 completionHandler:(id)arg5 ;


@end


#endif
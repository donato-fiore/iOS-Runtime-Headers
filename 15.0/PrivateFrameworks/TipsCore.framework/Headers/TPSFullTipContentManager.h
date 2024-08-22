// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSFULLTIPCONTENTMANAGER_H
#define TPSFULLTIPCONTENTMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSServiceConnection.h"

@interface TPSFullTipContentManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) TPSServiceConnection *serviceProxy; // ivar: _serviceProxy


-(id)_objectCompletionOnClientQueue:(SEL)arg0 ;
-(id)init;
// -(void)_performWithProxyHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)contentWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)markTipIdentifierViewed:(id)arg0 ;
-(void)removeNotificationForIdentifier:(id)arg0 ;
-(void)tipsAppActive;


@end


#endif
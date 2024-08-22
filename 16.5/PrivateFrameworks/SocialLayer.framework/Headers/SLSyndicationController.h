// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSYNDICATIONCONTROLLER_H
#define SLSYNDICATIONCONTROLLER_H

@class NSMutableSet;
@protocol SLDServiceProxyDelegate;

#import <Foundation/Foundation.h>

#import "SLDServiceProxy.h"

@interface SLSyndicationController : NSObject <SLDServiceProxyDelegate>



@property (retain, nonatomic) NSMutableSet *pendingmessageGUIDsToRemove; // ivar: _pendingmessageGUIDsToRemove
@property (retain, nonatomic) SLDServiceProxy *syndicationServiceProxy; // ivar: _syndicationServiceProxy


+(id)sharedController;
+(id)syndicationProcessingQueue;
-(void)_disconnectSyndicationServiceConnectionIfNecessary;
-(void)_sendCurrentRemovalsToDaemonAndDisconnect;
-(void)removeMessageGUIDFromSyndication:(id)arg0 ;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif
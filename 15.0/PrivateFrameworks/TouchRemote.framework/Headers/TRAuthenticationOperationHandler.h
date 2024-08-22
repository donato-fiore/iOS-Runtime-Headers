// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRAUTHENTICATIONOPERATIONHANDLER_H
#define TRAUTHENTICATIONOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>

#import "TRCompanionAuthOperationHandler.h"
#import "TRProxyAuthOperationHandler.h"

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler>



@property (retain, nonatomic) TRCompanionAuthOperationHandler *companionAuthHandler; // ivar: _companionAuthHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TRProxyAuthOperationHandler *proxyAuthHandler; // ivar: _proxyAuthHandler
@property (readonly) Class superclass;


// -(id)initWithCompanionAuthHandler:(id)arg0 proxyAuthHandler:(unk)arg1  ;
// -(id)initWithCompanionAuthHandlerWithError:(id)arg0 proxyAuthHandler:(unk)arg1  ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif
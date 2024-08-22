// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKTOKENSESSIONCONNECTION_H
#define TKTOKENSESSIONCONNECTION_H

@class NSString, NSMutableDictionary;
@protocol TKClientTokenProtocol;

#import <Foundation/Foundation.h>

#import "TKTokenConnection.h"

@interface TKTokenSessionConnection : NSObject <TKClientTokenProtocol>

 {
    NSInteger _sessionIDCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *initialKeepAlives; // ivar: _initialKeepAlives
@property (readonly, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions
@property (readonly) Class superclass;
@property (readonly, nonatomic) TKTokenConnection *tokenConnection; // ivar: _tokenConnection


-(id)initWithTokenConnection:(id)arg0 ;
-(void)endSession:(id)arg0 reply:(id)arg1 ;
-(void)session:(id)arg0 createObjectWithAttributes:(id)arg1 reply:(id)arg2 ;
-(void)session:(id)arg0 deleteObjectWithObjectID:(id)arg1 reply:(id)arg2 ;
-(void)session:(id)arg0 evaluateAccessControl:(id)arg1 forOperation:(id)arg2 reply:(id)arg3 ;
-(void)session:(id)arg0 getAdvertisedItemsWithReply:(id)arg1 ;
-(void)session:(id)arg0 getAttributesOfObjectID:(id)arg1 reply:(id)arg2 ;
-(void)session:(id)arg0 objectID:(id)arg1 operation:(NSInteger)arg2 data:(id)arg3 algorithms:(id)arg4 parameters:(id)arg5 reply:(id)arg6 ;
-(void)startSessionWithLAContext:(id)arg0 parameters:(id)arg1 reply:(id)arg2 ;
-(void)withSessionID:(id)arg0 invoke:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENDRIVER_H
#define TKTOKENDRIVER_H

@class NSString, NSDictionary, NSMutableDictionary, NSArray;
@protocol TKTokenDriverDelegate;

#import <Foundation/Foundation.h>

#import "TKTokenDriverContext.h"
#import "TKSharedResourceSlot.h"

@interface TKTokenDriver : NSObject {
    id *_keepAlive;
}


@property (readonly) NSString *classID;
@property (weak, nonatomic) TKTokenDriverContext *context; // ivar: _context
@property (weak) NSObject<TKTokenDriverDelegate> *delegate; // ivar: _delegate
@property (retain) NSDictionary *extensionAttributes; // ivar: _extensionAttributes
@property (retain, nonatomic) id *keepAlive;
@property (retain, nonatomic) TKSharedResourceSlot *keepAliveResourceSlot; // ivar: _keepAliveResourceSlot
@property (readonly, nonatomic) NSMutableDictionary *tokenConnections; // ivar: _tokenConnections
@property (readonly, nonatomic) NSArray *tokenSessions;


+(id)createDriver;
-(id)createTokenWithSlot:(id)arg0 AID:(id)arg1 error:(*id)arg2 ;
-(id)endpointForToken:(id)arg0 ;
-(id)init;
-(void)acquireTokenWithInstanceID:(id)arg0 reply:(id)arg1 ;
-(void)acquireTokenWithSlot:(id)arg0 AID:(id)arg1 reply:(id)arg2 ;
-(void)auditAuthOperation:(id)arg0 auditToken:(struct ? )arg1 success:(BOOL)arg2 ;
-(void)configureWithReply:(id)arg0 ;
-(void)dealloc;
-(void)getTokenWithAttributes:(id)arg0 reply:(id)arg1 ;
-(void)releaseTokenWithInstanceID:(id)arg0 ;
-(void)terminate;


@end


#endif
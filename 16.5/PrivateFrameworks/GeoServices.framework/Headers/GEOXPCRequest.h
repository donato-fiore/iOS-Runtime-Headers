// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOXPCREQUEST_H
#define GEOXPCREQUEST_H

@class NSError, NSProgress, NSString;
@protocol GEOXPCSerializable, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "GEOPeer.h"
#import "GEOApplicationAuditToken.h"
#import "GEODataRequestThrottlerToken.h"
#import "GEOMapServiceTraits.h"

@interface GEOXPCRequest : NSObject <GEOXPCSerializable>

 {
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    NSError *_error;
    NSProgress *_progressToMirrorOverXPC;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *method; // ivar: _method
@property (retain, nonatomic) GEOPeer *peer; // ivar: _peer
@property (retain, nonatomic) GEOApplicationAuditToken *preferredAuditToken; // ivar: _auditToken
@property (retain, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken; // ivar: _throttleToken
@property (readonly, nonatomic) GEOMapServiceTraits *traits; // ivar: _traits


+(BOOL)reportsProgress;
-(id)init;
-(id)initWithMessage:(id)arg0 traits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(id)sendSync:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;
-(void)send:(id)arg0 ;
-(void)send:(id)arg0 withReply:(id)arg1 handler:(id)arg2 ;


@end


#endif
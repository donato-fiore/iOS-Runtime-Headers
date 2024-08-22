// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPROTOBUFSESSION_H
#define GEOPROTOBUFSESSION_H

@protocol GEODataSession;

#import <Foundation/Foundation.h>


@interface GEOProtobufSession : NSObject

@property (readonly, nonatomic) NSObject<GEODataSession> *dataSession; // ivar: _dataSession


+(id)sharedDelegateQueue;
+(id)sharedProtobufSession;
-(id)init;
-(id)initWithDataSession:(id)arg0 ;
-(id)taskWithRequest:(id)arg0 requestTypeCode:(unsigned int)arg1 responseClass:(Class)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)taskWithRequestKind:(struct ? )arg0 protobufRequest:(id)arg1 URL:(id)arg2 additionalHTTPHeaders:(id)arg3 needsProxy:(BOOL)arg4 auditToken:(id)arg5 traits:(id)arg6 delegate:(id)arg7 delegateQueue:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(NSUInteger)arg10 multipathAlternatePort:(NSUInteger)arg11 throttleToken:(id)arg12 ;


@end


#endif
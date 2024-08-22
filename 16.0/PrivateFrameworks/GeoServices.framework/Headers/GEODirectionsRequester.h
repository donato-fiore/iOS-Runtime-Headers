// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODIRECTIONSREQUESTER_H
#define GEODIRECTIONSREQUESTER_H

@protocol _GEODirectionsRequesterServerProxy;

#import <Foundation/Foundation.h>


@interface GEODirectionsRequester : NSObject {
    id<_GEODirectionsRequesterServerProxy> *_serverProxy;
}




+(id)sharedRequester;
+(void)useLocalProxy;
+(void)useProxy:(Class)arg0 ;
+(void)useRemoteProxy;
-(id)init;
-(id)initWithProxy:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)finalizeRequest:(id)arg0 ;
// -(void)startRequest:(id)arg0 auditToken:(id)arg1 callbackQueue:(id)arg2 finished:(id)arg3 networkActivity:(unk)arg4 error:(id)arg5  ;
// -(void)startRequest:(id)arg0 auditToken:(id)arg1 skipFinalize:(BOOL)arg2 useBackgroundURL:(BOOL)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(id)arg6 networkActivity:(unk)arg7 error:(id)arg8  ;
// -(void)startRequest:(id)arg0 auditToken:(id)arg1 skipFinalize:(BOOL)arg2 useBackgroundURL:(BOOL)arg3 requestPriority:(id)arg4 finished:(id)arg5 networkActivity:(unk)arg6 error:(id)arg7  ;
// -(void)startRequest:(id)arg0 auditToken:(id)arg1 useBackgroundURL:(BOOL)arg2 callbackQueue:(id)arg3 finished:(id)arg4 networkActivity:(unk)arg5 error:(id)arg6  ;
// -(void)startRequest:(id)arg0 callbackQueue:(id)arg1 finished:(id)arg2 networkActivity:(unk)arg3 error:(id)arg4  ;
// -(void)startRequest:(id)arg0 finished:(id)arg1 networkActivity:(unk)arg2 error:(id)arg3  ;


@end


#endif
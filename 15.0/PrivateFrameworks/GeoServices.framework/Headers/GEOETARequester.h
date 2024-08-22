// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOETAREQUESTER_H
#define GEOETAREQUESTER_H

@class geo_isolater, NSHashTable, NSMapTable;

#import <Foundation/Foundation.h>


@interface GEOETARequester : NSObject {
    geo_isolater *_isolater;
    NSHashTable *_pendingSimpleRequests;
    NSMapTable *_pendingRequests;
}




+(id)sharedRequester;
-(BOOL)_finishRequest:(id)arg0 ;
-(BOOL)_finishSimpleRequest:(id)arg0 ;
-(id)init;
-(void)cancelRequest:(id)arg0 ;
-(void)cancelSimpleETARequest:(id)arg0 ;
-(void)dealloc;
// -(void)startRequest:(id)arg0 connectionProperties:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 callbackQueue:(id)arg4 willSendRequest:(id)arg5 finished:(unk)arg6 networkActivity:(id)arg7 error:(unk)arg8  ;
// -(void)startSimpleETARequest:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 callbackQueue:(id)arg3 finished:(id)arg4 networkActivity:(unk)arg5 error:(id)arg6  ;
// -(void)updateRequest:(id)arg0 callbackQueue:(id)arg1 finished:(id)arg2 networkActivity:(unk)arg3 error:(id)arg4  ;


@end


#endif
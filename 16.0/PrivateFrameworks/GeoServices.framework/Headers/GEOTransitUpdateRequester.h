// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITUPDATEREQUESTER_H
#define GEOTRANSITUPDATEREQUESTER_H

@class geo_isolater, NSHashTable;

#import <Foundation/Foundation.h>


@interface GEOTransitUpdateRequester : NSObject {
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
}




+(id)sharedRequester;
-(BOOL)_finishRequest:(id)arg0 ;
-(id)init;
-(void)cancelTransitRouteUpdateRequest:(id)arg0 ;
// -(void)startTransitRouteUpdateRequest:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 queue:(id)arg3 networkActivity:(id)arg4 completion:(unk)arg5  ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOIMAGESERVICEREQUESTER_H
#define GEOIMAGESERVICEREQUESTER_H

@class geo_isolater, NSHashTable, NSMapTable;

#import <Foundation/Foundation.h>


@interface GEOImageServiceRequester : NSObject {
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
    NSMapTable *_requestToIdentifier;
}




+(id)sharedRequester;
-(BOOL)_finishRequest:(id)arg0 ;
-(NSUInteger)calculateFreeableSize;
-(NSUInteger)shrinkDiskCacheToSize:(NSUInteger)arg0 ;
-(id)init;
-(void)cancelImageServiceRequest:(id)arg0 ;
// -(void)startImageServiceRequest:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 queue:(id)arg3 finished:(id)arg4 networkActivity:(unk)arg5 error:(id)arg6  ;


@end


#endif
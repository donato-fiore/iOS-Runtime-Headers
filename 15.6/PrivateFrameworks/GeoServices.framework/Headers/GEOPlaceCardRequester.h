// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLACECARDREQUESTER_H
#define GEOPLACECARDREQUESTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOPlaceCardRequester : NSObject {
    NSObject<OS_dispatch_queue> *_requestQ;
}




+(id)sharedRequester;
-(NSUInteger)calculateFreeableSpaceSync;
-(NSUInteger)shrinkBySizeSync:(NSUInteger)arg0 ;
-(id)_createServerConnection;
-(id)init;
// -(id)performPlaceDataRequest:(id)arg0 traits:(id)arg1 cachePolicy:(NSUInteger)arg2 timeout:(CGFloat)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 networkActivity:(id)arg6 requesterHandler:(unk)arg7  ;
// -(id)requestIdentifiers:(id)arg0 resultProviderID:(int)arg1 traits:(id)arg2 options:(NSUInteger)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 networkActivity:(id)arg6 requesterHandler:(unk)arg7  ;
// -(id)requestPhoneNumbers:(id)arg0 allowCellularDataForLookup:(BOOL)arg1 traits:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 networkActivity:(id)arg5 requesterHandler:(unk)arg6  ;
-(void)calculateFreeableSpaceWithHandler:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)clearCache;
-(void)fetchAllCacheEntriesWithRequesterHandler:(id)arg0 ;
-(void)shrinkBySize:(NSUInteger)arg0 finished:(id)arg1 ;
-(void)trackPlaceData:(id)arg0 ;


@end


#endif
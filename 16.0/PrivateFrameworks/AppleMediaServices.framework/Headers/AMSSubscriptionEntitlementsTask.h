// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSUBSCRIPTIONENTITLEMENTSTASK_H
#define AMSSUBSCRIPTIONENTITLEMENTSTASK_H



#import "AMSTask.h"

@interface AMSSubscriptionEntitlementsTask : AMSTask

@property (nonatomic) NSInteger cachePolicy; // ivar: _cachePolicy
@property (nonatomic) BOOL extendedCarrierCheck; // ivar: _extendedCarrierCheck
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType


+(NSUInteger)_segmentForMediaType:(NSInteger)arg0 error:(*id)arg1 ;
+(id)updateCacheForMediaType:(NSInteger)arg0 account:(id)arg1 data:(id)arg2 ;
-(BOOL)_shouldIgnoreCaches;
-(BOOL)_shouldIgnoreRemoteData;
-(id)_fetchEntitlementsFromASD;
-(id)_fetchEntitlementsFromIC;
-(id)_queryCachedASDSubscriptionForSegment:(NSUInteger)arg0 controller:(id)arg1 reloadIfNeeded:(BOOL)arg2 ;
-(id)_reloadASDSubscriptionForSegment:(NSUInteger)arg0 controller:(id)arg1 ;
-(id)_resultFromASDEntitlements:(id)arg0 ;
-(id)_resultFromICResponse:(id)arg0 ;
-(id)initWithMediaType:(NSInteger)arg0 ;
-(id)performExternalLookup;


@end


#endif
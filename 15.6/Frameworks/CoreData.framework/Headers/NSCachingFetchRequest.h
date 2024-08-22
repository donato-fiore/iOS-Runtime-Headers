// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCACHINGFETCHREQUEST_H
#define NSCACHINGFETCHREQUEST_H

@class NSDictionary;


#import "NSFetchRequest.h"

@interface NSCachingFetchRequest : NSFetchRequest {
    NSDictionary *_substitutionVariables;
    id *_cachedInfo;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) id *_identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *substitutionVariables;


+(id)_generateIdentifier;
-(BOOL)_isCachingFetchRequest;
-(id)_cachedInfoForRequestor:(id)arg0 ;
-(id)_copyForDirtyContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_cacheInfo:(id)arg0 forRequestor:(id)arg1 ;
-(void)_disableSQLStatementCaching;
-(void)dealloc;


@end


#endif
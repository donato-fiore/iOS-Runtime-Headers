// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STATTRIBUTEDENTITYRESOLVER_H
#define STATTRIBUTEDENTITYRESOLVER_H

@class NSArray;
@protocol STAttributedEntityResolving;

#import <Foundation/Foundation.h>

#import "STExecutableIdentityResolver.h"
#import "STReferenceCountedCache.h"

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving>

 {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}


@property (copy, nonatomic) NSArray *dynamicAttributions; // ivar: _dynamicAttributions


-(id)beginBatchResolutionSession;
-(id)init;
-(id)resolveEntity:(id)arg0 ;


@end


#endif
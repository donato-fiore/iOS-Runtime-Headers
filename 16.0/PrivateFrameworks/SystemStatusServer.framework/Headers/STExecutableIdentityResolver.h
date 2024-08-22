// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STEXECUTABLEIDENTITYRESOLVER_H
#define STEXECUTABLEIDENTITYRESOLVER_H

@protocol STExecutableIdentityResolving;

#import <Foundation/Foundation.h>

#import "STReferenceCountedCache.h"

@interface STExecutableIdentityResolver : NSObject <STExecutableIdentityResolving>

 {
    STReferenceCountedCache *_cache;
}




-(id)beginBatchResolutionSession;
-(id)init;
-(id)resolvedIdentityForIdentity:(id)arg0 ;


@end


#endif
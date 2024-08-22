// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPUBLICIDENTITYLOOKUPSERVICE_H
#define CKDPUBLICIDENTITYLOOKUPSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDKeyValueDiskCache.h"
#import "CKDContainer.h"

@interface CKDPublicIdentityLookupService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) CKDKeyValueDiskCache *cache; // ivar: _cache
@property (weak, nonatomic) CKDContainer *container; // ivar: _container


-(id)initWithContainer:(id)arg0 ;
-(void)configureRequest:(id)arg0 parentOperation:(id)arg1 ;
-(void)removeCacheForLookupInfos:(id)arg0 ;
-(void)scheduleRequest:(id)arg0 forOperation:(id)arg1 ;


@end


#endif
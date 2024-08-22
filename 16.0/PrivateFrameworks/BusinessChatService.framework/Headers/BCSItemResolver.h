// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSITEMRESOLVER_H
#define BCSITEMRESOLVER_H

@class NSString;
@protocol BCSItemResolving, BCSItemCaching, BCSItemCacheSkipping, BCSItemRemoteFetching, BCSMetricFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSItemResolver : NSObject <BCSItemResolving>

 {
    id<BCSItemCaching> *_itemCache;
    id<BCSItemCacheSkipping> *_itemCacheSkipper;
    id<BCSItemRemoteFetching> *_itemRemoteFetcher;
    id<BCSMetricFactoryProtocol> *_metricFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cachedItemMatching:(id)arg0 ;
-(void)itemMatching:(id)arg0 config:(id)arg1 clientBundleID:(id)arg2 metric:(id)arg3 completion:(id)arg4 ;


@end


#endif
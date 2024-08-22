// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSOURCESTORE_H
#define HKSOURCESTORE_H

@class NSString;
@protocol _HKXPCExportable, HKSourceStoreClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKSourceStore : NSObject <_HKXPCExportable, HKSourceStoreClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)deleteSourceWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllSourcesWithCompletion:(id)arg0 ;
-(void)fetchHasSampleWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchOrderedSourcesForObjectType:(id)arg0 completion:(id)arg1 ;
-(void)updateOrderedSources:(id)arg0 forObjectType:(id)arg1 completion:(id)arg2 ;


@end


#endif
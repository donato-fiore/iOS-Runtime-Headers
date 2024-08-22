// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFMCATALOGSERVICEBRIDGE_H
#define BFMCATALOGSERVICEBRIDGE_H


#import <Foundation/Foundation.h>

#import "BFMCatalogService.h"

@interface BFMCatalogServiceBridge : NSObject

@property (retain, nonatomic) BFMCatalogService *service; // ivar: _service


-(id)initWithBridgedConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(void)fetchMixedAssetsWithBookIds:(id)arg0 audiobookIds:(id)arg1 relationships:(id)arg2 views:(id)arg3 additionalParameters:(id)arg4 batchSize:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)fetchMixedSeriesWithBookSeriesIds:(id)arg0 audiobookSeriesIds:(id)arg1 relationships:(id)arg2 views:(id)arg3 additionalParameters:(id)arg4 batchSize:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)fetchResourcesWithAdamIDs:(id)arg0 relationships:(id)arg1 views:(id)arg2 additionalParameters:(id)arg3 batchSize:(NSInteger)arg4 completionHandler:(id)arg5 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SULOADSECTIONSOPERATION_H
#define SULOADSECTIONSOPERATION_H

@class ISOperation, NSString, NSNumber;
@protocol ISURLOperationDelegate;


#import "SUClientInterface.h"
#import "SUSectionsResponse.h"

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate>

 {
    NSString *_activeSectionVersionString;
    SUClientInterface *_clientInterface;
    SUSectionsResponse *_sectionsResponse;
    BOOL _shouldUseCache;
}


@property (copy) NSString *activeSectionVersionString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) SUSectionsResponse *sectionsResponse;
@property BOOL shouldUseCache;
@property (readonly) Class superclass;


-(BOOL)_loadSectionsFromCacheForVersion:(id)arg0 ;
-(BOOL)_loadSectionsFromNetworkWithDictionary:(id)arg0 ;
-(id)_cachePathForVersion:(id)arg0 create:(BOOL)arg1 ;
-(id)init;
-(id)initWithClientInterface:(id)arg0 ;
-(void)_writeSectionsResponseToCache:(id)arg0 forVersion:(id)arg1 ;
-(void)dealloc;
-(void)run;


@end


#endif
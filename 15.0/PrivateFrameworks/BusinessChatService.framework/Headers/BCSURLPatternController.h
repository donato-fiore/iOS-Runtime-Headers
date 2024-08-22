// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSURLPATTERNCONTROLLER_H
#define BCSURLPATTERNCONTROLLER_H

@class NSString;
@protocol BCSURLPatternControllerProtocol, BCSDomainItemCaching, BCSMetricFactoryProtocol;

#import <Foundation/Foundation.h>

#import "BCSURLPatternMatchResult.h"

@interface BCSURLPatternController : NSObject <BCSURLPatternControllerProtocol>



@property (readonly, nonatomic) NSObject<BCSDomainItemCaching> *cacheManager; // ivar: _cacheManager
@property (retain, nonatomic) BCSURLPatternMatchResult *cachedPatternMatchingResult; // ivar: _cachedPatternMatchingResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BCSMetricFactoryProtocol> *metricFactory; // ivar: _metricFactory
@property (readonly) Class superclass;


-(id)initWithCacheManager:(id)arg0 metricFactory:(id)arg1 ;
-(id)mostExplicitMatchingResultFromResults:(id)arg0 ;
-(void)matchPatternForURL:(id)arg0 forClientBundleID:(id)arg1 completion:(id)arg2 ;


@end


#endif
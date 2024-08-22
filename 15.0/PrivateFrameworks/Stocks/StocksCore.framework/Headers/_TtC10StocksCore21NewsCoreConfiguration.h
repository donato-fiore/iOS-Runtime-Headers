// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10STOCKSCORE21NEWSCORECONFIGURATION_H
#define _TTC10STOCKSCORE21NEWSCORECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC10StocksCore21NewsCoreConfiguration : NSObject {
    ? experimentalizableFieldPostfix;
    ? appConfiguration;
    ? topStoriesConfiguration;
    ? newsUIConfiguration;
    ? newsPersonalizationTreatment;
    ? endpointConfigurations;
    ? paidBundleConfiguration;
    ? lazyPaidBundleConfig;
    ? lazyPersonalizationTreatment;
}


@property (nonatomic, readonly) NSInteger analyticsEndpointMaxPayloadSize; // ivar: analyticsEndpointMaxPayloadSize
@property (nonatomic, readonly) CGFloat delayBeforeRetryingDroppedFeeds; // ivar: delayBeforeRetryingDroppedFeeds
@property (nonatomic, readonly) BOOL enableCacheFallbackForArticleRecirculation; // ivar: enableCacheFallbackForArticleRecirculation
@property (nonatomic, readonly) NSString *experimentalizableFieldPostfix;
@property (nonatomic, readonly) NSInteger maxRetriesForDroppedFeeds; // ivar: maxRetriesForDroppedFeeds
@property (nonatomic, readonly) CGFloat prerollLoadingTimeout; // ivar: prerollLoadingTimeout
@property (nonatomic, readonly) BOOL privateDataEncryptionRequired; // ivar: isPrivateDataEncryptionRequired


-(BOOL)isPrivateDataEncryptionRequired;
-(id)init;


@end


#endif
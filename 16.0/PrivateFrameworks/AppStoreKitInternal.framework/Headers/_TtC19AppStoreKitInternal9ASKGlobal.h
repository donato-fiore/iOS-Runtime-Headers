// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL9ASKGLOBAL_H
#define _TTC19APPSTOREKITINTERNAL9ASKGLOBAL_H

@class NSDictionary;
@protocol _TtP19AppStoreKitInternal16ASKGlobalExports_, _TtP19AppStoreKitInternal20LocalizationProtocol_;

#import <Foundation/Foundation.h>

#import "_TtC19AppStoreKitInternal11JSAdsObject.h"
#import "_TtC19AppStoreKitInternal12AppleSilicon.h"
#import "_TtC19AppStoreKitInternal14JSArcadeObject.h"
#import "ASKClient.h"
#import "_TtC19AppStoreKitInternal21ClientOrderingWrapper.h"
#import "_TtC19AppStoreKitInternal14JSFeatureFlags.h"
#import "_TtC19AppStoreKitInternal12JSGameCenter.h"
#import "_TtC19AppStoreKitInternal38AppStoreOnDeviceRecommendationsManager.h"
#import "_TtC19AppStoreKitInternal28JSPersonalizationStoreObject.h"
#import "_TtC19AppStoreKitInternal20JSResilientDeepLinks.h"
#import "_TtC19AppStoreKitInternal25JSSearchLandingPageObject.h"
#import "_TtC19AppStoreKitInternal15JSStorageObject.h"
#import "_TtC19AppStoreKitInternal20JSStoreMetricsObject.h"
#import "_TtC19AppStoreKitInternal12JSUserObject.h"

@interface _TtC19AppStoreKitInternal9ASKGlobal : NSObject <_TtP19AppStoreKitInternal16ASKGlobalExports_>

 {
    ? props;
}


@property (nonatomic, readonly) _TtC19AppStoreKitInternal11JSAdsObject *ads; // ivar: ads
@property (nonatomic, readonly) _TtC19AppStoreKitInternal12AppleSilicon *appleSilicon; // ivar: appleSilicon
@property (nonatomic, readonly) _TtC19AppStoreKitInternal14JSArcadeObject *arcade; // ivar: arcade
@property (nonatomic, readonly) ASKClient *client; // ivar: client
@property (nonatomic, readonly) _TtC19AppStoreKitInternal21ClientOrderingWrapper *clientOrdering; // ivar: clientOrdering
@property (nonatomic, readonly) _TtC19AppStoreKitInternal14JSFeatureFlags *featureFlags; // ivar: featureFlags
@property (nonatomic, readonly) _TtC19AppStoreKitInternal12JSGameCenter *gameCenter; // ivar: gameCenter
@property (nonatomic, readonly) NSObject<_TtP19AppStoreKitInternal20LocalizationProtocol_> *loc; // ivar: loc
@property (nonatomic, readonly) _TtC19AppStoreKitInternal38AppStoreOnDeviceRecommendationsManager *onDeviceRecommendationsManager; // ivar: onDeviceRecommendationsManager
@property (nonatomic, readonly) _TtC19AppStoreKitInternal28JSPersonalizationStoreObject *personalizationStore; // ivar: personalizationStore
@property (nonatomic, readonly) NSDictionary *props;
@property (nonatomic, readonly) _TtC19AppStoreKitInternal20JSResilientDeepLinks *resilientDeepLinks; // ivar: resilientDeepLinks
@property (nonatomic, readonly) _TtC19AppStoreKitInternal25JSSearchLandingPageObject *searchLandingPage; // ivar: searchLandingPage
@property (nonatomic, readonly) _TtC19AppStoreKitInternal15JSStorageObject *storage; // ivar: storage
@property (nonatomic, readonly) _TtC19AppStoreKitInternal20JSStoreMetricsObject *storeMetrics; // ivar: storeMetrics
@property (nonatomic, readonly) _TtC19AppStoreKitInternal12JSUserObject *user; // ivar: user


-(id)init;


@end


#endif
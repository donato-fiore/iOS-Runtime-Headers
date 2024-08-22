// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI20APPSTOREDATAPROVIDER_H
#define _TTC17PROMOTEDCONTENTUI20APPSTOREDATAPROVIDER_H

@class SwiftObject;
@protocol APClientInfoDelegate;



@interface _TtC17PromotedContentUI20AppStoreDataProvider : SwiftObject <APClientInfoDelegate>

 {
    ? metadataExpirationTimer;
    ? storeFront;
    ? storeFrontLocale;
    ? subsequentRequestsDisabled;
    ? session;
    ? fetchingSession;
    ? theLock;
    ? lastFetch;
    ? searchAdsFacade;
    ? sessionPersistence;
    ? firstInitializeCall;
    ? greenTeaLogger;
    ? nextRequestContextId;
    ? initializedAt;
    ? previousGetAdAt;
}




-(void)activeClientInfoUpdated:(id)arg0 ;


@end


#endif
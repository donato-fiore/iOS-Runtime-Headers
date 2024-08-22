// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL24DEVICEAPPSTATEDATASOURCE_H
#define _TTC19APPSTOREKITINTERNAL24DEVICEAPPSTATEDATASOURCE_H

@protocol ASDAppQueryResultsObserver;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal24DeviceAppStateDataSource : NSObject <ASDAppQueryResultsObserver>

 {
    ? logger;
    ? appQuery;
    ? store;
    ? isBetaAppsDataSource;
    ? delegate;
    ? accessQueue;
    ? expectedAppStates;
    ? previouslyInstalledLibraryItems;
    ? availableUpdatesCache;
    ? greenTeaLogger;
    ? adamIdsByBundleId;
    ? betaAppBundleVersions;
}




-(id)init;
-(void)appQuery:(id)arg0 resultsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveUpdateFromProductPage:(id)arg0 ;


@end


#endif
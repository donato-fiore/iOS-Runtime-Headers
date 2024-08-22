// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCBUNDLECHANNELPROVIDER_H
#define FCBUNDLECHANNELPROVIDER_H

@class NFUnfairLock, NSArray, NSString;
@protocol FCAppActivityObserving, FCBundleChannelProviderType, FCCoreConfigurationManager, FCBundleChannelProviderDelegate;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"
#import "FCPurchaseLookupRecordSource.h"

@interface FCBundleChannelProvider : NSObject <FCAppActivityObserving, FCBundleChannelProviderType>

 {
    FCKeyValueStore *_localStore;
    NFUnfairLock *_accessLock;
    id<FCCoreConfigurationManager> *_configurationManager;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
}


@property (copy, nonatomic) NSArray *bundleChannelIDs; // ivar: _bundleChannelIDs
@property (copy, nonatomic) NSString *bundleChannelIDsVersion; // ivar: _bundleChannelIDsVersion
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCBundleChannelProviderDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)activityObservingApplicationWindowWillBecomeForeground;
-(void)loadInitialBundleChannelIDsWithCompletion:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCHANNELDETAILS_H
#define WLKCHANNELDETAILS_H

@class NSArray, NSString, NSURL, NSDictionary;
@protocol WLKInstallable;

#import <Foundation/Foundation.h>

#import "WLKArtworkVariantListing.h"

@interface WLKChannelDetails : NSObject <WLKInstallable>



@property (readonly, nonatomic, getter=isApSubscription) BOOL apSubscription; // ivar: _apSubscription
@property (readonly, copy, nonatomic) NSArray *appAdamIDs;
@property (readonly, copy, nonatomic) NSArray *appAdamIDs; // ivar: _appAdamIDs
@property (readonly, copy, nonatomic) NSArray *appBundleIDs;
@property (readonly, copy, nonatomic) NSArray *appBundleIDs; // ivar: _appBundleIDs
@property (readonly, nonatomic, getter=isAppInstalled) BOOL appInstalled; // ivar: _appInstalled
@property (readonly, copy, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (copy, nonatomic) NSString *appStoreURLString; // ivar: _appStoreURLString
@property (readonly, copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) NSUInteger channelType; // ivar: _channelType
@property (readonly, nonatomic, getter=isConsented) BOOL consented; // ivar: _consented
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFirstParty) BOOL firstParty; // ivar: _firstParty
@property (readonly, nonatomic) BOOL forceDSIDlessInstall;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WLKArtworkVariantListing *images; // ivar: _images
@property (readonly, nonatomic, getter=isiTunes) BOOL itunes; // ivar: _itunes
@property (readonly, nonatomic) NSString *minRequiredAppVersion; // ivar: _minRequiredAppVersion
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *rateLimit; // ivar: _rateLimit
@property (readonly, nonatomic) BOOL shouldTrackPlayActivity; // ivar: _shouldTrackPlayActivity
@property (readonly, nonatomic, getter=isSubscribed) BOOL subscribed; // ivar: _subscribed
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isWatchListEnabled) BOOL watchListEnabled; // ivar: _watchListEnabled


+(void)sui_fetchSeasonTitlesSettingWithCompletionHandler:(id)arg0 ;
-(id)appIconURLForSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)sui_channelName;
-(id)sui_seasonEpisodeLabel:(BOOL)arg0 seasonTitleAvailable:(BOOL)arg1 seasonNumber:(id)arg2 episodeNumber:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBALLOONPLUGINATTRIBUTIONCONTROLLER_H
#define IMBALLOONPLUGINATTRIBUTIONCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMBalloonPluginAttributionController : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundleIDsDisplayingAttribution; // ivar: _bundleIDsDisplayingAttribution
@property (retain, nonatomic) NSMutableDictionary *expiredBundleIDToTimestampMap; // ivar: _expiredBundleIDToTimestampMap
@property (nonatomic) BOOL hasPerformedFirstAppExtensionLoad; // ivar: _hasPerformedFirstAppExtensionLoad


+(id)sharedInstance;
-(BOOL)shouldShowAttributionForBundleID:(id)arg0 ;
-(CGFloat)_expiryTimeout;
-(id)_currentTimestamp;
-(id)init;
-(void)_handleInstalledPluginsChanged;
-(void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
-(void)_saveToFile;
-(void)didShowAttributionForBundleIDs:(id)arg0 ;
-(void)startExpiryTimer;


@end


#endif
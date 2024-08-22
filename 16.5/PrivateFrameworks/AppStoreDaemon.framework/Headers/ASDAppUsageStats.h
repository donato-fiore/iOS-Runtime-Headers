// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDAPPUSAGESTATS_H
#define ASDAPPUSAGESTATS_H

@class NSString, NSURL, NSDate, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASDAppUsageStats : NSObject <NSCopying>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *clipBundleID; // ivar: _clipBundleID
@property (copy, nonatomic) NSURL *clipFullURL; // ivar: _clipFullURL
@property (copy, nonatomic) NSString *clipLaunchReason; // ivar: _clipLaunchReason
@property (copy, nonatomic) NSString *clipReferrerBundleID; // ivar: _clipReferrerBundleID
@property (copy, nonatomic) NSString *clipReferrerURL; // ivar: _clipReferrerURL
@property (copy, nonatomic) NSString *clipWebAppBundleID; // ivar: _clipWebAppBundleID
@property (copy, nonatomic) NSString *containingBundleID; // ivar: _containingBundleID
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSInteger eventTime; // ivar: _eventTime
@property (copy, nonatomic) NSNumber *evid; // ivar: _evid
@property (nonatomic) BOOL isClip; // ivar: _isClip
@property (nonatomic) BOOL isClipLaunch; // ivar: _isClipLaunch
@property (nonatomic) BOOL isExtensionUsage; // ivar: _isExtensionUsage
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (copy, nonatomic) NSDate *lastEventEndDate; // ivar: _lastEventEndDate
@property (copy, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (copy, nonatomic) NSString *sourceStream; // ivar: _sourceStream
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSInteger usageCount; // ivar: _usageCount
@property (nonatomic) NSInteger usageTime; // ivar: _usageTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
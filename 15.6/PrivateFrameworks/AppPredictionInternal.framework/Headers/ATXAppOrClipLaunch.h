// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPORCLIPLAUNCH_H
#define ATXAPPORCLIPLAUNCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXAppOrClipLaunch : NSObject

@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL isClip; // ivar: _isClip
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) int launchReason; // ivar: _launchReason
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) NSString *urlHash; // ivar: _urlHash


-(id)initAppClipLaunchWithBundleId:(id)arg0 urlHash:(id)arg1 launchReason:(int)arg2 ;
-(id)initAppClipLaunchWithBundleId:(id)arg0 urlHash:(id)arg1 launchReason:(int)arg2 latitude:(CGFloat)arg3 longitude:(CGFloat)arg4 ;
-(id)initAppLaunchWithBundleId:(id)arg0 ;
-(id)initAppLaunchWithBundleId:(id)arg0 launchReason:(int)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 ;


@end


#endif
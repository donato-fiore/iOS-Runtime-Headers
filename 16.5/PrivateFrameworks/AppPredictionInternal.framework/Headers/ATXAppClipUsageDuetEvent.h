// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPCLIPUSAGEDUETEVENT_H
#define ATXAPPCLIPUSAGEDUETEVENT_H

@class NSString, NSDate;


#import "ATXDuetEvent.h"

@interface ATXAppClipUsageDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSString *clipBundleId; // ivar: _clipBundleId
@property (readonly, nonatomic) NSDate *launchDate; // ivar: _launchDate
@property (readonly, nonatomic) int launchReason; // ivar: _launchReason
@property (readonly, nonatomic) NSString *parentAppBundleId; // ivar: _parentAppBundleId
@property (readonly, nonatomic) CGFloat timeSinceDownload; // ivar: _timeSinceDownload
@property (readonly, nonatomic) NSString *urlHash; // ivar: _urlHash
@property (readonly, nonatomic) NSString *webClipBundleId; // ivar: _webClipBundleId


-(id)identifier;
-(id)initWithContext:(id)arg0 modifiedDate:(id)arg1 ;
-(id)initWithContextValue:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithCurrentContextStoreValues:(id)arg0 ;
-(id)initWithDKEvent:(id)arg0 ;
-(id)initWithLaunchDate:(id)arg0 timeSinceDownload:(CGFloat)arg1 urlHash:(id)arg2 clipBundleId:(id)arg3 parentAppBundleId:(id)arg4 webClipBundleId:(id)arg5 launchReason:(int)arg6 ;
-(id)loadNumberFromMetadata:(id)arg0 key:(id)arg1 ;
-(id)loadStringFromMetadata:(id)arg0 key:(id)arg1 ;
-(int)launchReasonFromString:(id)arg0 ;


@end


#endif
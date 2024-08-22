// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSHARESHEETINVOKEDEVENT_H
#define SFSHARESHEETINVOKEDEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFShareSheetInvokedEvent : NSObject <SFCoreAnalyticsEvent>



@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (copy, nonatomic) NSDictionary *cacheAccessInfo; // ivar: _cacheAccessInfo
@property (nonatomic) NSInteger cacheFileCount; // ivar: _cacheFileCount
@property (nonatomic) int daemonPID; // ivar: _daemonPID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger durationInMS; // ivar: _durationInMS
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCollaborative; // ivar: _isCollaborative
@property (nonatomic) BOOL isDarkMode; // ivar: _isDarkMode
@property (nonatomic) NSInteger numberOfSuggestions; // ivar: _numberOfSuggestions
@property (copy, nonatomic) NSString *suggestionsHash; // ivar: _suggestionsHash
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalCacheAccessCount; // ivar: _totalCacheAccessCount


+(id)eventName;
-(void)submitEvent;


@end


#endif
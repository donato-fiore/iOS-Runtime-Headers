// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESUPPORTNOTIFICATIONPRESENTATIONEVENT_H
#define NTKFACESUPPORTNOTIFICATIONPRESENTATIONEVENT_H

@class NSString, NSDictionary;
@protocol NTKFaceSupportAnalyticsRepresentable;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportNotificationPresentationEvent : NSObject <NTKFaceSupportAnalyticsRepresentable>



@property (readonly, nonatomic) NSInteger artworkUsed; // ivar: _artworkUsed
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delayFromBundleUnlock; // ivar: _delayFromBundleUnlock
@property (readonly, nonatomic) CGFloat delayFromServerPush; // ivar: _delayFromServerPush
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *ntkfs_analyticsEventName;
@property (readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly, nonatomic) NSInteger optOutSources; // ivar: _optOutSources
@property (readonly, nonatomic) NSInteger schedulingErrorCode; // ivar: _schedulingErrorCode
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(id)initWithBundleIdentifier:(id)arg0 status:(NSInteger)arg1 artworkUsed:(NSInteger)arg2 delayFromServerPush:(CGFloat)arg3 delayFromBundleUnlock:(CGFloat)arg4 schedulingErrorCode:(NSInteger)arg5 optOutSources:(NSInteger)arg6 ;


@end


#endif
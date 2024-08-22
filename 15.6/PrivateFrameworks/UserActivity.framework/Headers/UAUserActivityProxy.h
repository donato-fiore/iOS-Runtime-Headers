// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UAUSERACTIVITYPROXY_H
#define UAUSERACTIVITYPROXY_H

@class NSString, NSUserActivity, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UABestAppSuggestion.h"

@interface UAUserActivityProxy : NSObject <NSSecureCoding>



@property (readonly) NSString *activityType; // ivar: _activityType
@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSString *dynamicActivityType; // ivar: _dynamicActivityType
@property (retain) NSUserActivity *internalActivity; // ivar: _internalActivity
@property (readonly) BOOL isRemoteActivity; // ivar: _isRemoteActivity
@property (retain) UABestAppSuggestion *suggestedActivity; // ivar: _suggestedActivity
@property (copy) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)activityIfAvailible;
-(id)activitySubTitle;
-(id)activityTitle;
-(id)contentAttributeSet;
-(id)description;
-(id)initWithActivity:(id)arg0 bundleId:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestion:(id)arg0 ;
-(id)initWithUUID:(id)arg0 activityType:(id)arg1 bundleID:(id)arg2 ;
-(id)initWithUUID:(id)arg0 activityType:(id)arg1 dynamicActivityType:(id)arg2 bundleID:(id)arg3 ;
-(void)accessActivity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)launchActivityWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
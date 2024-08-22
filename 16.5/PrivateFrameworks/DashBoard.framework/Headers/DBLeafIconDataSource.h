// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBLEAFICONDATASOURCE_H
#define DBLEAFICONDATASOURCE_H

@class NSString, FBSApplicationDataStore, CARSessionConfiguration;
@protocol SBLeafIconDataSource;

#import <Foundation/Foundation.h>

#import "DBApplicationInfo.h"

@interface DBLeafIconDataSource : NSObject <SBLeafIconDataSource>



@property (retain, nonatomic) DBApplicationInfo *applicationInfo; // ivar: _applicationInfo
@property (copy, nonatomic) NSString *cachedBadgeValue; // ivar: _cachedBadgeValue
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (retain, nonatomic) FBSApplicationDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) CARSessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


+(id)dataSourceForApplicationInfo:(id)arg0 ;
+(id)dataSourceForNowPlayingIcon;
+(id)dataSourceForOEMIconWithSessionConfiguration:(id)arg0 ;
-(BOOL)_stringIsDigits:(id)arg0 ;
-(BOOL)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(BOOL)iconAllowsLaunch:(id)arg0 ;
-(BOOL)iconCanTightenLabel:(id)arg0 ;
-(BOOL)iconCanTruncateLabel:(id)arg0 ;
-(BOOL)iconCompleteUninstall:(id)arg0 ;
-(BOOL)iconDisallowsLaunchForObscuredReason:(id)arg0 ;
-(BOOL)iconSupportsUninstall:(id)arg0 ;
-(BOOL)isProgressPausedForIcon:(id)arg0 ;
-(CGFloat)progressPercentForIcon:(id)arg0 ;
-(NSInteger)accessoryTypeForIcon:(id)arg0 ;
-(NSInteger)labelAccessoryTypeForIcon:(id)arg0 ;
-(NSInteger)progressStateForIcon:(id)arg0 ;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 applicationInfo:(id)arg1 sessionConfiguration:(id)arg2 ;
-(id)badgeNumberOrStringForIcon:(id)arg0 ;
-(id)formattedAccessoryStringForIcon:(id)arg0 ;
-(id)icon:(id)arg0 defaultImageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)icon:(id)arg0 unmaskedImageWithInfo:(struct SBIconImageInfo )arg1 ;
-(void)invalidateBadgeValue;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSHAREDWITHYOUMANAGER_H
#define IMSHAREDWITHYOUMANAGER_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface IMSharedWithYouManager : NSObject

@property (copy, nonatomic) NSNumber *cachedSharedWithYouEnabledValue; // ivar: _cachedSharedWithYouEnabledValue
@property (nonatomic) int settingHasChangedNotificationToken; // ivar: _settingHasChangedNotificationToken
@property (readonly, copy, nonatomic) NSArray *sharedWithYouApplicationBundleIDs;
@property (nonatomic, getter=isSharedWithYouEnabled) BOOL sharedWithYouEnabled;
@property (readonly, nonatomic) BOOL sharedWithYouKeyExists;


+(BOOL)_isBundleIDAllowed:(id)arg0 ;
+(id)defaultAppBundleIDs;
+(id)sharedManager;
+(id)sharedWithYouApps;
+(id)tvAppBundleID;
-(BOOL)__im_ff_isInterstellarEnabled;
-(BOOL)isSharedWithYouEnabledForApplicationWithBundleID:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif
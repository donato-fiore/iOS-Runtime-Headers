// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSAPPCLIPRECORD_H
#define CPSAPPCLIPRECORD_H

@class NSString, NSURL, NSNumber;

#import <Foundation/Foundation.h>


@interface CPSAppClipRecord : NSObject

@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic, setter=debug_setFullApplicationIcon:) id *debug_fullApplicationIcon; // ivar: _debug_fullApplicationIcon
@property (copy, nonatomic) NSString *fullApplicationCaption; // ivar: _fullApplicationCaption
@property (copy, nonatomic) NSString *fullApplicationName; // ivar: _fullApplicationName
@property (retain, nonatomic) NSURL *fullApplicationStoreURL; // ivar: _fullApplicationStoreURL
@property (nonatomic) CGFloat lastInstallTime; // ivar: _lastInstallTime
@property (nonatomic) CGFloat lastProxCardLaunchTime; // ivar: _lastProxCardLaunchTime
@property (nonatomic) CGFloat lastVersionCheckTime; // ivar: _lastVersionCheckTime
@property (copy, nonatomic) NSNumber *locationConfirmationGranted; // ivar: _locationConfirmationGranted
@property (nonatomic) NSInteger locationConfirmationState; // ivar: _locationConfirmationState
@property (copy, nonatomic) NSNumber *userNotificationGranted; // ivar: _userNotificationGranted


-(id)initWithBundleID:(id)arg0 ;
-(id)initWithSQLiteRow:(id)arg0 bundleID:(id)arg1 ;


@end


#endif
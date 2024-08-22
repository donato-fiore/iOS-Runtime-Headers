// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASKRESTRICTIONS_H
#define ASKRESTRICTIONS_H

@class ACAccountStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASKRestrictions : NSObject {
    NSInteger _maximumAppContentRating;
    BOOL _isAppInstallationAllowed;
    BOOL _isAppUninstallationAllowed;
    BOOL _isRunningInStoreDemoMode;
    BOOL _hasManagedAppleID;
    BOOL _isAccountModificationRestricted;
}


@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) BOOL hasManagedAppleID;
@property (readonly, nonatomic) BOOL isAccountModificationRestricted;
@property (readonly, nonatomic) BOOL isAppInstallationAllowed;
@property (readonly, nonatomic) BOOL isAppUninstallationAllowed;
@property (readonly, nonatomic) BOOL isRunningInStoreDemoMode;
@property (readonly, nonatomic) NSInteger maximumAppContentRating;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithAccountStore:(id)arg0 ;
-(void)dealloc;
-(void)updateRestrictionsAndNotifyIfNeeded;
-(void)updateRestrictionsWithCompletionBlock:(id)arg0 ;


@end


#endif
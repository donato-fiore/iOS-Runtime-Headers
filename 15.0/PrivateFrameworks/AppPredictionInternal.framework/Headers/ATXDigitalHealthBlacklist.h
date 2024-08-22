// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDIGITALHEALTHBLACKLIST_H
#define ATXDIGITALHEALTHBLACKLIST_H

@class _PASLock, NSString;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface ATXDigitalHealthBlacklist : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_updateBlacklistWithNewBlacklistedBundleIds:(id)arg0 whitelistedBundleIds:(id)arg1 ;
-(id)blacklistedBundleIds;
-(id)init;
-(void)dealloc;
-(void)deviceManagementPolicyDidChange:(id)arg0 ;


@end


#endif
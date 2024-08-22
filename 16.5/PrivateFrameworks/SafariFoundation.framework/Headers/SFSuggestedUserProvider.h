// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSUGGESTEDUSERPROVIDER_H
#define SFSUGGESTEDUSERPROVIDER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFSuggestedUserProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedEmails;
    NSArray *_suggestedNonEmails;
}




+(id)sharedProvider;
-(id)_allCachedSuggestedUsersWithType:(NSInteger)arg0 ;
-(id)_cachedSuggestedUsersWithType:(NSInteger)arg0 matchingText:(id)arg1 ;
-(id)init;
-(void)_accountStoreChangedNotification:(id)arg0 ;
-(void)_getSuggestedUsersFromSavedAccounts:(id)arg0 suggestedEmails:(*id)arg1 suggestedNonEmails:(*id)arg2 ;
-(void)suggestedUsersOfType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)suggestedUsersOfType:(NSInteger)arg0 matchingText:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif
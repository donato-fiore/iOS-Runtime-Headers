// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOUSERACCOUNTINFO_H
#define GEOUSERACCOUNTINFO_H

@class geo_isolater, ACAccountStore, ACAccount;

#import <Foundation/Foundation.h>


@interface GEOUserAccountInfo : NSObject {
    geo_isolater *_isolation;
    ACAccountStore *_accountStore;
    BOOL _hasCheckedPrimaryAccount;
    ACAccount *_primaryICloudAccount;
    BOOL _hasCheckedPrimaryAuthKitAccount;
    ACAccount *_primaryAuthKitAccount;
}




+(BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+(BOOL)isAccountInfoAvailable;
+(BOOL)isCurrentICloudAccountChinaBased;
+(BOOL)isCurrentICloudAccountManaged;
+(BOOL)isCurrentICloudAccountUnderage;
+(id)primaryICloudAccount;
+(id)sharedInstance;
-(BOOL)isCurrentICloudAccountChinaBased;
-(BOOL)isCurrentICloudAccountManaged;
-(BOOL)isCurrentICloudAccountUnderage;
-(id)_primaryICloudAccountIsolated;
-(id)init;
-(id)primaryICloudAccount;
-(void)_accountStoreDidChange:(id)arg0 ;


@end


#endif
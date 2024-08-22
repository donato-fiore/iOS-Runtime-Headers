// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFACTIONABLESECURITYRECOMMENDATIONDATA_H
#define SFACTIONABLESECURITYRECOMMENDATIONDATA_H

@class NSExtension, NSArray, WBSPasswordWarning;
@protocol SFActionableSecurityRecommendationDataDelegate;

#import <Foundation/Foundation.h>

#import "SFAccountCellData.h"

@interface SFActionableSecurityRecommendationData : NSObject

@property (readonly, nonatomic) SFAccountCellData *accountCellData; // ivar: _accountCellData
@property (weak, nonatomic) NSObject<SFActionableSecurityRecommendationDataDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didUpgradeToSignInWithApple; // ivar: _didUpgradeToSignInWithApple
@property (nonatomic) BOOL didUpgradeToStrongPassword; // ivar: _didUpgradeToStrongPassword
@property (readonly, nonatomic) NSUInteger eligibleAccountModificationActions; // ivar: _eligibleAccountModificationActions
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) BOOL isUpgradeToSignInWithAppleAvailable; // ivar: _isUpgradeToSignInWithAppleAvailable
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) WBSPasswordWarning *warning; // ivar: _warning


-(id)cellForTableView:(id)arg0 forCellType:(id)arg1 ;
-(id)initWithAccountCellData:(id)arg0 warning:(id)arg1 delegate:(id)arg2 ;
-(void)_fetchEligibleAccountModificationActionsForSavedAccount:(id)arg0 ;


@end


#endif
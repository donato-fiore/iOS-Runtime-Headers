// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFHIGHPRIORITYRECOMMENDATIONDATA_H
#define SFHIGHPRIORITYRECOMMENDATIONDATA_H

@class NSExtension, NSArray, WBSPasswordWarning;
@protocol SFHighPriorityRecommendationDataDelegate;

#import <Foundation/Foundation.h>

#import "SFPasswordCellData.h"

@interface SFHighPriorityRecommendationData : NSObject

@property (weak, nonatomic) NSObject<SFHighPriorityRecommendationDataDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didUpgradeToSignInWithApple; // ivar: _didUpgradeToSignInWithApple
@property (nonatomic) BOOL didUpgradeToStrongPassword; // ivar: _didUpgradeToStrongPassword
@property (readonly, nonatomic) NSUInteger eligibleAccountModificationActions; // ivar: _eligibleAccountModificationActions
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) BOOL isUpgradeToSignInWithAppleAvailable; // ivar: _isUpgradeToSignInWithAppleAvailable
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) SFPasswordCellData *passwordCellData; // ivar: _passwordCellData
@property (readonly, nonatomic) WBSPasswordWarning *warning; // ivar: _warning


-(id)cellForTableView:(id)arg0 forCellType:(id)arg1 ;
-(id)initWithPasswordCellData:(id)arg0 warning:(id)arg1 delegate:(id)arg2 ;
-(void)_fetchEligibleAccountModificationActionsForSavedPassword:(id)arg0 ;


@end


#endif
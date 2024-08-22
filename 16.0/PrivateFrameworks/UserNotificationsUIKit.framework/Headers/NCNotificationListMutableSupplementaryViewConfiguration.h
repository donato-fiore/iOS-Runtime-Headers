// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTMUTABLESUPPLEMENTARYVIEWCONFIGURATION_H
#define NCNOTIFICATIONLISTMUTABLESUPPLEMENTARYVIEWCONFIGURATION_H

@class NSArray, NSString, UIAction, UIColor;


#import "NCNotificationListSupplementaryViewConfiguration.h"

@interface NCNotificationListMutableSupplementaryViewConfiguration : NCNotificationListSupplementaryViewConfiguration

@property (copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic) BOOL containsUnmanagedContent;
@property (copy, nonatomic) UIAction *defaultAction;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (nonatomic) NSInteger materialRecipe;
@property (nonatomic) BOOL preventsUserDismissal;
@property (copy, nonatomic) NSArray *supplementaryActions;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *tintColor;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
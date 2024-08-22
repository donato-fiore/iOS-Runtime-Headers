// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOAPPSTORESETTINGSGROUP_H
#define MOAPPSTORESETTINGSGROUP_H

@class NSNumber;


#import "MOSettingsGroup.h"

@interface MOAppStoreSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *denyInAppPurchases;
@property (retain, nonatomic) NSNumber *maximumRating;
@property (retain, nonatomic) NSNumber *requirePasswordForPurchases;


+(id)groupName;


@end


#endif
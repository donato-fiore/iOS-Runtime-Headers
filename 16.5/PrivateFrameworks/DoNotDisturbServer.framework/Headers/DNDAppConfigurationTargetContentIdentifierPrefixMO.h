// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDAPPCONFIGURATIONTARGETCONTENTIDENTIFIERPREFIXMO_H
#define DNDAPPCONFIGURATIONTARGETCONTENTIDENTIFIERPREFIXMO_H

@class NSString;


#import "DNDPerAppSettingsMO.h"

@interface DNDAppConfigurationTargetContentIdentifierPrefixMO : DNDPerAppSettingsMO

@property (copy, nonatomic) NSString *targetContentIdentifierPrefix;


+(id)fetchRequest;


@end


#endif
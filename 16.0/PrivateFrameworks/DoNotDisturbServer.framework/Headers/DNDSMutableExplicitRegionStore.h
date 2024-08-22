// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMUTABLEEXPLICITREGIONSTORE_H
#define DNDSMUTABLEEXPLICITREGIONSTORE_H

@class NSSet;


#import "DNDSExplicitRegionStore.h"

@interface DNDSMutableExplicitRegionStore : DNDSExplicitRegionStore

@property (copy, nonatomic) NSSet *enteredRegionIdentifiersPendingExit;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
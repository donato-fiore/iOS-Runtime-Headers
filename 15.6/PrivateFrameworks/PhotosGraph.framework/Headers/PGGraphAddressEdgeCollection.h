// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHADDRESSEDGECOLLECTION_H
#define PGGRAPHADDRESSEDGECOLLECTION_H

@class NSDate;


#import "PGGraphEdgeCollection.h"

@interface PGGraphAddressEdgeCollection : PGGraphEdgeCollection

@property (readonly, nonatomic) NSUInteger numberOfAssets;
@property (readonly, nonatomic) NSDate *universalStartDate;


+(Class)edgeClass;


@end


#endif
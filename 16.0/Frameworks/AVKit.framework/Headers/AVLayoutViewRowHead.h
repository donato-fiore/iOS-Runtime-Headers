// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVLAYOUTVIEWROWHEAD_H
#define AVLAYOUTVIEWROWHEAD_H


#import <Foundation/Foundation.h>

#import "AVLayoutItemAttributes.h"

@interface AVLayoutViewRowHead : NSObject

@property (readonly, nonatomic) AVLayoutItemAttributes *firstAttributesInLayoutOrder; // ivar: _firstAttributesInLayoutOrder
@property (readonly, weak, nonatomic) AVLayoutItemAttributes *firstAttributesInPriorityOrder; // ivar: _firstAttributesInPriorityOrder


-(id)initWithFirstAttributesInLayoutOrder:(id)arg0 firstAttributesInPriorityOrder:(id)arg1 ;


@end


#endif
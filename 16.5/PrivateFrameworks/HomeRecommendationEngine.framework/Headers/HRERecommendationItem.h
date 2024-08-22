// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRERECOMMENDATIONITEM_H
#define HRERECOMMENDATIONITEM_H

@class HFItem;


#import "HRERecommendation.h"

@interface HRERecommendationItem : HFItem

@property (nonatomic) NSUInteger accessoryCountType; // ivar: _accessoryCountType
@property (retain, nonatomic) HRERecommendation *recommendation; // ivar: _recommendation
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithRecommendation:(id)arg0 ;


@end


#endif
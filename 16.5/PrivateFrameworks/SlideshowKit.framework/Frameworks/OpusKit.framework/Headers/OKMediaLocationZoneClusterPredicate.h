// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIALOCATIONZONECLUSTERPREDICATE_H
#define OKMEDIALOCATIONZONECLUSTERPREDICATE_H



#import "OKMediaClusterPredicate.h"

@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate

@property (readonly) CGFloat distance; // ivar: _distance


-(float)efficiencyForItems:(id)arg0 ;
-(id)_containsInSet:(id)arg0 withinItems:(id)arg1 distance:(CGFloat)arg2 ;
-(id)_titleWithPlacemark:(id)arg0 ;
-(id)evaluateItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithDistance:(CGFloat)arg0 ;
-(id)title;
-(void)dealloc;


@end


#endif
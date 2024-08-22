// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKMEDIALOCATIONCLUSTERPREDICATE_H
#define OKMEDIALOCATIONCLUSTERPREDICATE_H



#import "OKMediaClusterPredicate.h"

@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate

@property (readonly) NSUInteger type; // ivar: _type


-(float)efficiencyForItems:(id)arg0 ;
-(id)evaluateItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)title;
-(void)dealloc;


@end


#endif
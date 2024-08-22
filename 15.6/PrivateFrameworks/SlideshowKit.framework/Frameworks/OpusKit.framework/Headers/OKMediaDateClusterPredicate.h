// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKMEDIADATECLUSTERPREDICATE_H
#define OKMEDIADATECLUSTERPREDICATE_H



#import "OKMediaClusterPredicate.h"

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate

@property (readonly) NSUInteger type; // ivar: _type


-(NSInteger)hourInGMT:(id)arg0 ;
-(NSUInteger)timeOfDay:(id)arg0 ;
-(float)efficiencyForItems:(id)arg0 ;
-(id)evaluateItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)timeOfDayAsString:(NSUInteger)arg0 ;
-(id)title;
-(void)dealloc;


@end


#endif
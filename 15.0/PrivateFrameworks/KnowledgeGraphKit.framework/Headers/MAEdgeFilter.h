// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAEDGEFILTER_H
#define MAEDGEFILTER_H



#import "MAElementFilter.h"
#import "MARelation.h"
#import "KGEdgeFilter.h"

@interface MAEdgeFilter : MAElementFilter

@property (readonly, nonatomic) MARelation *anyDirectionRelation;
@property (readonly, nonatomic) MARelation *inRelation;
@property (readonly, nonatomic) KGEdgeFilter *kgEdgeFilter;
@property (readonly, nonatomic) MARelation *outRelation;


+(BOOL)scanInstance:(*id)arg0 withScanner:(id)arg1 ;
+(id)edgeFilterWithVisualString:(id)arg0 ;
-(BOOL)matchesEdge:(id)arg0 ;
-(id)relationWithType:(NSUInteger)arg0 ;
-(void)appendVisualStringToString:(id)arg0 ;


@end


#endif
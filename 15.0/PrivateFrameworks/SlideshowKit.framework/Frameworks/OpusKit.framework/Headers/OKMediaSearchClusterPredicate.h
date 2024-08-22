// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKMEDIASEARCHCLUSTERPREDICATE_H
#define OKMEDIASEARCHCLUSTERPREDICATE_H

@class NSString;


#import "OKMediaClusterPredicate.h"

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate {
    NSString *_searchString;
    NSUInteger _type;
    NSUInteger _options;
}




-(float)efficiencyForItems:(id)arg0 ;
-(id)evaluateItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithString:(id)arg0 type:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)title;
-(void)dealloc;


@end


#endif
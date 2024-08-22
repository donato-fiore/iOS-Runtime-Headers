// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCATEGORICALATTRIBUTEBREAKDOWN_H
#define ATXCATEGORICALATTRIBUTEBREAKDOWN_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXCategoricalAttributeBreakdown : NSObject {
    NSMutableDictionary *_counts;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXDeviceLevelMetricsCategoricalAttributeBreakdown:(id)arg0 ;
-(CGFloat)normalizedCountForCategory:(id)arg0 ;
-(NSUInteger)countForCategory:(id)arg0 ;
-(NSUInteger)hash;
-(id)allCategories;
-(id)init;
-(void)incrementCountForCategory:(id)arg0 by:(NSUInteger)arg1 ;


@end


#endif
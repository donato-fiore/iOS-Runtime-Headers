// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMTEXTSPECIALCASE_H
#define AXMTEXTSPECIALCASE_H


#import <Foundation/Foundation.h>


@interface AXMTextSpecialCase : NSObject



-(BOOL)detectNutritionLabel:(id)arg0 ;
-(NSInteger)nutritionLabelKeywordCountMinimum;
-(id)detectSpecialCase:(id)arg0 preferredLocales:(id)arg1 ;
-(id)nutritionLabelKeywords;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHARETEMPLATEVIEWELEMENT_H
#define SKUISHARETEMPLATEVIEWELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"

@interface SKUIShareTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *activities;


-(id)activityForShareSheetActivityType:(id)arg0 ;
-(id)activityForUIActivityType:(id)arg0 ;


@end


#endif
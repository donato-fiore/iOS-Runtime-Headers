// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREVIEWLISTPAGECOMPONENT_H
#define SKUIREVIEWLISTPAGECOMPONENT_H



#import "SKUIPageComponent.h"
#import "SKUIReviewListViewElement.h"

@interface SKUIReviewListPageComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIReviewListViewElement *viewElement;


-(NSInteger)componentType;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif
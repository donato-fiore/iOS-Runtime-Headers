// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISHELFPAGECOMPONENT_H
#define SKUISHELFPAGECOMPONENT_H



#import "SKUIPageComponent.h"
#import "SKUIShelfViewElement.h"

@interface SKUIShelfPageComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIShelfViewElement *viewElement;


-(NSInteger)componentType;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif
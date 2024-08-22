// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIACCOUNTBUTTONSCOMPONENT_H
#define SKUIACCOUNTBUTTONSCOMPONENT_H



#import "SKUIPageComponent.h"
#import "SKUILink.h"
#import "SKUIAccountButtonsViewElement.h"

@interface SKUIAccountButtonsComponent : SKUIPageComponent

@property (retain, nonatomic) SKUILink *ECommerceLink; // ivar: _ecommerceLink
@property (nonatomic) BOOL hidesTermsAndConditions; // ivar: _hidesTermsAndConditions
@property (readonly, nonatomic) SKUIAccountButtonsViewElement *viewElement;


-(NSInteger)componentType;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithFeaturedContentContext:(id)arg0 kind:(NSInteger)arg1 ;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif
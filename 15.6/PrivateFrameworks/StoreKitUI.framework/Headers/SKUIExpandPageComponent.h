// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIEXPANDPAGECOMPONENT_H
#define SKUIEXPANDPAGECOMPONENT_H

@class NSMutableArray;


#import "SKUIPageComponent.h"
#import "SKUIExpandViewElement.h"

@interface SKUIExpandPageComponent : SKUIPageComponent {
    NSMutableArray *_childComponents;
}


@property (readonly, nonatomic) SKUIExpandViewElement *viewElement; // ivar: _viewElement


-(NSInteger)componentType;
-(id)childComponentForIndex:(NSInteger)arg0 ;
-(id)childComponents;
-(id)initWithViewElement:(id)arg0 ;
-(id)metricsElementName;


@end


#endif
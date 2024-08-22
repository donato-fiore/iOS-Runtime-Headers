// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDYNAMICSHELFMENUBARVIEWELEMENT_H
#define SKUIDYNAMICSHELFMENUBARVIEWELEMENT_H

@class NSString;
@protocol SKUIDynamicShelfViewElement, SKUIEntityProviding;


#import "SKUIShelfMenuBarViewElement.h"
#import "SKUIViewElement.h"

@interface SKUIDynamicShelfMenuBarViewElement : SKUIShelfMenuBarViewElement <SKUIDynamicShelfViewElement>

 {
    SKUIViewElement *_cellTemplateViewElement;
}


@property (readonly, nonatomic) SKUIViewElement *cellTemplateViewElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SKUIEntityProviding> *entityProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDynamicContainer;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(void)setShelfItemViewElementValidator:(id)arg0 ;


@end


#endif
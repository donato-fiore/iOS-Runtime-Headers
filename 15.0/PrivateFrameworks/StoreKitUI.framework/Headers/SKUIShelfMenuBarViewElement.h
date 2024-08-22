// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHELFMENUBARVIEWELEMENT_H
#define SKUISHELFMENUBARVIEWELEMENT_H

@class NSArray, NSString;
@protocol _SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement;


#import "SKUIShelfViewElement.h"
#import "SKUIMenuBarViewElementConfiguration.h"

@interface SKUIShelfMenuBarViewElement : SKUIShelfViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement>

 {
    NSArray *_focusedViewElements;
    NSArray *_regularViewElements;
}


@property (retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedFeatures;
-(NSUInteger)elementType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)focusedViewElementForMenuItemAtIndex:(NSUInteger)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)regularViewElementForMenuItemAtIndex:(NSUInteger)arg0 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg0 ;
-(void)_reloadMenuItems;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif
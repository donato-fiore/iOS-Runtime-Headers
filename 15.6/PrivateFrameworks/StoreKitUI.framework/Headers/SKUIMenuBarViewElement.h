// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMENUBARVIEWELEMENT_H
#define SKUIMENUBARVIEWELEMENT_H

@class NSArray, NSString;
@protocol _SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement;


#import "SKUIViewElement.h"
#import "SKUIMenuBarViewElementConfiguration.h"

@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement>

 {
    NSArray *_titleViewElements;
}


@property (retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_shelfMenuBarViewElementClass;
+(Class)_titlesMenuBarViewElementClass;
+(id)supportedFeatures;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)titleForMenuItemAtIndex:(NSUInteger)arg0 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg0 ;
-(void)_reloadMenuItems;


@end


#endif
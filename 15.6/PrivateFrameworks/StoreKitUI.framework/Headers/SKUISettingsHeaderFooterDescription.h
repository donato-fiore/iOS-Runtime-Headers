// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISETTINGSHEADERFOOTERDESCRIPTION_H
#define SKUISETTINGSHEADERFOOTERDESCRIPTION_H


#import <Foundation/Foundation.h>

#import "SKUIViewElement.h"

@interface SKUISettingsHeaderFooterDescription : NSObject {
    SKUIViewElement *_viewElement;
}




+(Class)viewClassForSettingsHeaderFooterDescription:(id)arg0 ;
+(id)_settingsHeaderFooterDescriptionWithFooterElement:(id)arg0 ;
+(id)_settingsHeaderFooterDescriptionWithHeaderElement:(id)arg0 ;
+(id)settingsHeaderFooterDescriptionWithViewElement:(id)arg0 ;
-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 ;
-(id)viewElement;


@end


#endif
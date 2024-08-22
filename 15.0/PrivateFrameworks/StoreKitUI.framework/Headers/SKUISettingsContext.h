// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISETTINGSCONTEXT_H
#define SKUISETTINGSCONTEXT_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUISettingsContext : NSObject {
    NSMutableDictionary *_elementTypeClass;
    NSMutableArray *_descriptionReusePool;
    NSMutableArray *_viewReusePool;
}


@property (weak, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext


-(id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg0 forViewElement:(id)arg1 parent:(id)arg2 ;
-(id)dequeueReusableSettingDescriptionForViewElement:(id)arg0 parent:(id)arg1 ;
-(id)initWithClientContext:(id)arg0 ;
-(void)_registerClass:(Class)arg0 forReuseIdentifier:(id)arg1 ;
-(void)_registerReuseClasses;
-(void)recycleSettingDescriptions:(id)arg0 ;


@end


#endif
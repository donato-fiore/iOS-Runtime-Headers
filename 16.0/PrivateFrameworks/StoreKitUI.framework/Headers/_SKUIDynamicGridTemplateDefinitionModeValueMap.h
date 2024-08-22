// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SKUIDYNAMICGRIDTEMPLATEDEFINITIONMODEVALUEMAP_H
#define _SKUIDYNAMICGRIDTEMPLATEDEFINITIONMODEVALUEMAP_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _SKUIDynamicGridTemplateDefinitionModeValueMap : NSObject {
    NSMutableArray *_defaultTemplateDefinitionViewElements;
    NSMutableDictionary *_modeToTemplateDefinitionViewElements;
}




-(id)templateDefinitionViewElementsForMode:(id)arg0 ;
-(void)addTemplateDefinitionViewElement:(id)arg0 forMode:(id)arg1 ;


@end


#endif
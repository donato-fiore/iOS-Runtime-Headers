// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDYNAMICGRIDVIEWELEMENT_H
#define SKUIDYNAMICGRIDVIEWELEMENT_H

@class NSMutableDictionary;


#import "SKUIGridViewElement.h"

@interface SKUIDynamicGridViewElement : SKUIGridViewElement {
    BOOL _hasValidTemplateDefinitionMap;
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;
}


@property (readonly, nonatomic) BOOL hasSectionHeaders;
@property (readonly, nonatomic, getter=isMalformed) BOOL malformed;
@property (readonly, nonatomic) NSInteger minimumEntityCountForSections; // ivar: _minimumEntityCountForSections


-(BOOL)allowsMultipleSelectionDuringEditing;
-(BOOL)isDynamicContainer;
-(NSInteger)pageComponentType;
-(id)_templateDefinitionTypeToModeValueMap;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg0 entityValueProvider:(id)arg1 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)templateDefinitionViewElementsForType:(id)arg0 mode:(id)arg1 ;
-(void)_unfilteredEnumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif
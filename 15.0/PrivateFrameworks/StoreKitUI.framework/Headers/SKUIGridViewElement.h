// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGRIDVIEWELEMENT_H
#define SKUIGRIDVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUICollectionDOMFeature.h"

@interface SKUIGridViewElement : SKUIViewElement {
    id *_persistenceKey;
}


@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (readonly, nonatomic) SKUICollectionDOMFeature *collectionFeature;
@property (readonly, nonatomic) BOOL showsEditMode; // ivar: _showsEditMode


+(id)supportedFeatures;
-(NSInteger)_countOfInputCheckboxesWithBaseElement:(id)arg0 limit:(NSInteger)arg1 ;
-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)persistenceKey;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif
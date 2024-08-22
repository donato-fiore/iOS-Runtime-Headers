// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMELEMENT_H
#define IKDOMELEMENT_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, _IKJSDOMElementProxy, _IKJSDOMElement, IKJSDOMParentNode;


#import "IKDOMNode.h"
#import "IKDOMElement.h"
#import "IKDOMNamedNodeMap.h"
#import "IKDOMHTMLCollection.h"
#import "IKViewElementStyleComposer.h"

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, _IKJSDOMElementProxy, _IKJSDOMElement, IKJSDOMParentNode>

 {
    NSMutableDictionary *_metadataDict;
    NSArray *_cachedChildElements;
    NSDictionary *_cachedAttributes;
}


@property (weak, nonatomic, setter=_setAliasOf:) IKDOMElement *_aliasOf; // ivar: __aliasOf
@property (readonly, nonatomic) BOOL _isPartOfPrototypeElement;
@property (readonly, nonatomic) BOOL _isPrototypeElement;
@property (readonly, copy, nonatomic) IKDOMNamedNodeMap *attributes;
@property (readonly, nonatomic) NSUInteger childElementCount;
@property (readonly, nonatomic) IKDOMHTMLCollection *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, nonatomic) IKDOMElement *firstElementChild;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *innerHTML;
@property (readonly, nonatomic) IKDOMElement *lastElementChild;
@property (retain, nonatomic) NSString *outerHTML;
@property (readonly, weak, nonatomic) NSObject<IKStyleableElement> *parentStyleableElement;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer; // ivar: styleComposer
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSString *tagName;


+(id)_filteredAttributes;
-(BOOL)hasAttribute:(id)arg0 ;
-(BOOL)hasAttributes;
-(NSInteger)nodeType;
-(id)asPrivateIKJSDOMElement;
-(id)childElementByTagName:(id)arg0 ;
-(id)childElements;
-(id)childElementsByTagName:(id)arg0 ;
-(id)domb_boundCSSRule;
-(id)domb_dataBinding;
-(id)domb_domBindingController;
-(id)domb_mutationRuleSet;
-(id)dombs_items;
-(id)domib_appDataSet;
-(id)domib_itemsChangeSet;
-(id)domp_derivativeDOMElementsBySelector;
-(id)domp_prototype;
-(id)getAttribute:(id)arg0 ;
-(id)getElementsByTagName:(id)arg0 ;
-(id)ik_templateElementCSSSelectorList;
-(id)ik_templateName;
-(id)ikve_prototypesID;
-(id)ikve_rulesID;
-(id)nodeName;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)textContent;
-(struct _NSRange )domib_visibleIndexRange;
-(void)_markUpdatedForChangeInAttribute:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
-(void)childrenUpdatedWithUpdatedChildNodes:(id)arg0 notify:(BOOL)arg1 ;
-(void)domb_setBoundCSSRule:(id)arg0 ;
-(void)domb_setDOMBindingController:(id)arg0 ;
-(void)domb_setDataBinding:(id)arg0 ;
-(void)domb_setMutationRuleSet:(id)arg0 ;
-(void)dombs_setItems:(id)arg0 ;
-(void)domib_setAppDataSet:(id)arg0 ;
-(void)domib_setItemsChangeSet:(id)arg0 ;
-(void)domib_setVisibleIndexRange:(struct _NSRange )arg0 ;
-(void)domp_setDerivativeDOMElementsBySelector:(id)arg0 ;
-(void)domp_setPrototype:(id)arg0 ;
-(void)ikve_setPrototypesID:(id)arg0 ;
-(void)ikve_setRulesID:(id)arg0 ;
-(void)insertAdjacentHTML:(id)arg0 ;
-(void)removeAttribute:(id)arg0 ;
-(void)setAttribute:(id)arg0 ;
-(void)setAttributeValue:(id)arg0 withName:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setTextContent:(id)arg0 ;


@end


#endif
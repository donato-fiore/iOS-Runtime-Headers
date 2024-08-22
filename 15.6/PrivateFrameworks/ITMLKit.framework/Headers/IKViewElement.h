// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKVIEWELEMENT_H
#define IKVIEWELEMENT_H

@class NSArray, NSString, NSMutableSet, NSDictionary, NSMutableDictionary;
@protocol IKStyleableElement;

#import <Foundation/Foundation.h>

#import "IKAppDocument.h"
#import "IKDataBinding.h"
#import "IKDOMBindingController.h"
#import "IKViewElement.h"
#import "IKViewElementStyle.h"
#import "IKViewElementStyleComposer.h"
#import "IKChangeSet.h"

@interface IKViewElement : NSObject <IKStyleableElement>

 {
    NSArray *_visibleChildren;
}


@property (readonly, copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (retain, nonatomic) NSMutableSet *activeSingularEvents; // ivar: _activeSingularEvents
@property (readonly, copy, nonatomic) NSArray *aliases; // ivar: _aliases
@property (weak, nonatomic) IKAppDocument *appDocument; // ivar: _appDocument
@property (readonly, nonatomic) BOOL areChildrenBound; // ivar: _areChildrenBound
@property (readonly, retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *autoHighlightIdentifier; // ivar: _autoHighlightIdentifier
@property (readonly, nonatomic) IKDataBinding *binding; // ivar: _binding
@property (readonly, nonatomic) IKDOMBindingController *bindingController; // ivar: _bindingController
@property (readonly, retain, nonatomic) NSArray *children;
@property (readonly, copy, nonatomic) NSString *classSelector; // ivar: _classSelector
@property (retain, nonatomic) NSDictionary *dataDictionary; // ivar: _dataDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didUpdateAutoHighlightIdentifier; // ivar: _didUpdateAutoHighlightIdentifier
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly, copy, nonatomic) NSString *elementID; // ivar: _elementID
@property (readonly, copy, nonatomic) NSString *elementName; // ivar: _elementName
@property (readonly, nonatomic) NSUInteger elementType; // ivar: _elementType
@property (readonly, copy, nonatomic) NSArray *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSUInteger implicitUpdateType; // ivar: _implicitUpdateType
@property (nonatomic, getter=isImpressionable) BOOL impressionable; // ivar: _impressionable
@property (readonly, nonatomic) NSDictionary *impressionableAttributes; // ivar: _impressionableAttributes
@property (readonly, nonatomic) BOOL isPartOfPrototypeElement; // ivar: _isPartOfPrototypeElement
@property (readonly, nonatomic) BOOL isProxyElement; // ivar: _isProxyElement
@property (readonly, retain, nonatomic) NSString *itmlID; // ivar: _itmlID
@property (retain, nonatomic) NSMutableDictionary *metadataDict; // ivar: _metadataDict
@property (weak, nonatomic) IKViewElement *parent; // ivar: _parent
@property (readonly, weak, nonatomic) NSObject<IKStyleableElement> *parentStyleableElement; // ivar: _parentStyleableElement
@property (readonly, nonatomic) BOOL prototypesUpdated; // ivar: _prototypesUpdated
@property (readonly, retain, nonatomic) IKViewElementStyle *style; // ivar: _style
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer; // ivar: _styleComposer
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSArray *unfilteredChildren; // ivar: _unfilteredChildren
@property (readonly, nonatomic) IKChangeSet *unfilteredChildrenChangeSet; // ivar: _unfilteredChildrenChangeSet
@property (nonatomic) NSUInteger updateType; // ivar: _updateType


+(BOOL)shouldParseChildDOMElement:(id)arg0 ;
+(BOOL)shouldParseChildDOMElements;
+(NSUInteger)evaluateElementUpdateType:(id)arg0 ;
+(NSUInteger)updateTypeForChangeInAttribute:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
+(id)DOMEventTypeNameMap;
+(id)_eventXMLNameMap;
+(id)effectiveChildDOMElementsForDOMElement:(id)arg0 ;
+(id)supportedFeatures;
+(id)supportedFeaturesForElementName:(id)arg0 ;
+(void)willParseDOMElement:(id)arg0 ;
-(BOOL)_elevateToImplicitUpdateType:(NSUInteger)arg0 ;
-(BOOL)canProxyUnloadedChildElement:(id)arg0 ;
-(NSUInteger)_updateSubtreeWithElement:(id)arg0 ;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)childElementWithType:(NSUInteger)arg0 ;
-(id)childElementsWithType:(NSUInteger)arg0 ;
-(id)childImageElementWithType:(NSUInteger)arg0 ;
-(id)childTextElementWithStyle:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)initWithOriginalElement:(id)arg0 ;
-(id)initWithPrototypeElement:(id)arg0 parent:(id)arg1 appDataItem:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)proxyElementForLoadedChildElement:(id)arg0 ;
-(void)adoptElement:(id)arg0 ;
-(void)configureUpdatesWithElement:(id)arg0 ;
-(void)dealloc;
-(void)dispatchEvent:(id)arg0 eventAttribute:(id)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(id)arg5 ;
-(void)dispatchEventOfType:(NSUInteger)arg0 canBubble:(BOOL)arg1 isCancelable:(BOOL)arg2 extraInfo:(id)arg3 completionBlock:(id)arg4 ;
-(void)disperseUpdateType:(NSUInteger)arg0 ;
-(void)performImplicitUpdates:(id)arg0 ;
-(void)resetImplicitUpdates;
-(void)resetProperty:(NSUInteger)arg0 ;
-(void)resetUpdates;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)updateWithActualElement:(id)arg0 ;


@end


#endif
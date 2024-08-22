// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIVIEWELEMENT_H
#define SKUIVIEWELEMENT_H

@class IKViewElement, NSMutableArray, NSSet, NSArray, NSString;
@protocol SKUIEntityProviding, IKEntityValueProviding, NSCopying;



@interface SKUIViewElement : IKViewElement {
    id<SKUIEntityProviding> *_entityProvider;
    NSMutableArray *_flattenedChildren;
    BOOL _hasValidEntityProvider;
}


@property (readonly, nonatomic, getter=isDynamicContainer) BOOL dynamicContainer;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSObject<SKUIEntityProviding> *entityProvider;
@property (readonly, nonatomic) NSSet *entityValueProperties;
@property (retain, nonatomic) NSObject<IKEntityValueProviding> *entityValueProvider; // ivar: _entityValueProvider
@property (readonly, nonatomic) NSObject<SKUIEntityProviding> *explicitEntityProvider;
@property (retain, nonatomic) NSObject<IKEntityValueProviding> *explicitEntityValueProvider; // ivar: _explicitEntityValueProvider
@property (readonly, nonatomic) NSArray *flattenedChildren;
@property (readonly, copy, nonatomic) NSString *indexBarEntryID;
@property (readonly, retain, nonatomic) NSString *itmlID;
@property (readonly, nonatomic) NSInteger pageComponentType;
@property (readonly, nonatomic) NSSet *personalizationLibraryItems;
@property (readonly, nonatomic) NSInteger pinGroup; // ivar: _pinGroup
@property (readonly, nonatomic) NSInteger pinStyle; // ivar: _pinStyle
@property (readonly, nonatomic) BOOL rendersWithParallax;
@property (readonly, nonatomic) BOOL rendersWithPerspective;
@property (readonly, nonatomic) NSObject<NSCopying> *uniquingMapKey;


-(BOOL)canMoveWithinCollection;
-(BOOL)descendsFromElementWithType:(NSUInteger)arg0 ;
-(BOOL)handlesBackgroundColorDirectly;
-(BOOL)isDescendentFromViewElement:(id)arg0 ;
-(id)ancestorElementMatchingPredicate:(id)arg0 ;
-(id)ancestorElementOfType:(NSUInteger)arg0 ;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)elementWithIdentifier:(id)arg0 ;
-(id)expandableLabelElementForWidth:(CGFloat)arg0 context:(id)arg1 ;
-(id)featureWithName:(id)arg0 ;
-(id)firstChildForElementName:(id)arg0 ;
-(id)firstChildForElementType:(NSUInteger)arg0 ;
-(id)firstDescendentWithIndexBarEntryID:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)persistenceKey;
-(void)_entityProviderDidInvalidateNotification:(id)arg0 ;
-(void)_registerForNotificationsForEntityProvider:(id)arg0 ;
-(void)_unregisterForNotificationsForEntityProvider:(id)arg0 ;
-(void)dealloc;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;
-(void)enumerateViewElementsWithDictionary:(id)arg0 factory:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif
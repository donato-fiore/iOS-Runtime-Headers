// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCHAINABLEMODIFIER_H
#define SBCHAINABLEMODIFIER_H

@class NSString;
@protocol BSDescriptionProviding, SBChainableModifierQuery, SBChainableModifierContext, NSCopying, SBChainableModifierDelegate;

#import <Foundation/Foundation.h>

#import "SBChainableModifierMethodCache.h"
#import "SBModifierCacheCoordinator.h"
#import "SBChainableModifier.h"

@interface SBChainableModifier : NSObject <BSDescriptionProviding, SBChainableModifierQuery, SBChainableModifierContext, NSCopying>

 {
    BOOL _hasNotifiedChildrenDidMoveToParent;
    SBChainableModifierMethodCache *_queryCache;
    SBChainableModifierMethodCache *_contextCache;
}


@property (retain, nonatomic) SBModifierCacheCoordinator *contextCacheCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBChainableModifierDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSInteger modifierLevel; // ivar: _modifierLevel
@property (retain, nonatomic) SBChainableModifier *nextQueryModifier; // ivar: _nextQueryModifier
@property (nonatomic) SBChainableModifier *parentModifier; // ivar: _parentModifier
@property (nonatomic) SBChainableModifier *previousContextModifier; // ivar: _previousContextModifier
@property (retain, nonatomic) SBModifierCacheCoordinator *queryCacheCoordinator;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)modifierUnderTest:(id)arg0 containsChildModifierKindOfClass:(Class)arg1 ;
+(Class)makeDynamicSubclassWithDescriptor:(id)arg0 implementation:(id)arg1 forSelector:(SEL)arg2 ofProtocol:(id)arg3 ;
+(id)baseClassForQueryProtocol;
+(id)contextProtocol;
+(id)contextSelectors;
+(id)newCacheWithSelectorList:(id)arg0 subsequentMethodCacheFunc:(*unk)arg1 cachingDictionary:(id)arg2 ;
+(id)newContextCache;
+(id)newEventResponse;
+(id)newQueryCache;
+(id)queryProtocol;
+(id)querySelectors;
+(void)_initalizeIMPCaching;
+(void)initialize;
+(void)verifyModifierImplements:(BOOL)arg0 methodsOfProtocol:(id)arg1 ;
-(BOOL)_anyDescendentImplementsAnyContextMethod;
-(BOOL)_anyDescendentImplementsAnyQueryMethod;
-(BOOL)completesWhenChildrenComplete;
-(BOOL)containsChildModifier:(id)arg0 ;
-(BOOL)runsInternalVerificationAfterEventDispatch;
-(NSUInteger)childModifierCount;
-(id)_forwardEvent:(id)arg0 toChildModifier:(id)arg1 ;
-(id)_handleEvent:(id)arg0 ;
-(id)_lastDeepChildModifier;
-(id)childModifierByKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugPotentialChildModifiers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)init;
-(id)loggingCategory;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addChildModifier:(id)arg0 atLevel:(NSInteger)arg1 key:(id)arg2 queryResponse:(NSUInteger)arg3 contextResponse:(NSUInteger)arg4 ;
-(void)_insertModifier:(id)arg0 afterModifier:(id)arg1 queryResponse:(NSUInteger)arg2 contextResponse:(NSUInteger)arg3 ;
-(void)_notifyChildrenDidMoveToParentIfNeeded;
-(void)_removeChildModifier:(id)arg0 queryResponse:(NSUInteger)arg1 contextResponse:(NSUInteger)arg2 ;
-(void)addChildModifier:(id)arg0 ;
-(void)addChildModifier:(id)arg0 atLevel:(NSInteger)arg1 key:(id)arg2 ;
-(void)dealloc;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)enumerateChildModifiersWithBlock:(id)arg0 ;
-(void)performTransactionWithTemporaryChildModifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)provideNextQueryImplementation:(id)arg0 forSelector:(SEL)arg1 ;
-(void)providePreviousContextImplementation:(id)arg0 forSelector:(SEL)arg1 ;
-(void)removeChildModifier:(id)arg0 ;
-(void)verifyInternalIntegrityAfterHandlingEvent:(id)arg0 ;


@end


#endif
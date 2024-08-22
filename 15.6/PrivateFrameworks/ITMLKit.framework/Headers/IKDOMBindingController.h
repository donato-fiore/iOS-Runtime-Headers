// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDOMBINDINGCONTROLLER_H
#define IKDOMBINDINGCONTROLLER_H

@class NSDictionary, NSMutableArray, NSString;
@protocol IKJSDataObserving, IKDOMBindingStrategy;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"
#import "IKDataBinding.h"
#import "IKJSDataItem.h"
#import "IKDOMElement.h"
#import "_IKDOMMutationRuleSet.h"
#import "IKDOMBindingController.h"

@interface IKDOMBindingController : NSObject <IKJSDataObserving>

 {
    NSDictionary *_bindingKeysByPathString;
    ? _strategyFlags;
    NSMutableArray *_scheduledUpdaters;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, nonatomic) IKDataBinding *binding; // ivar: _binding
@property (readonly, weak, nonatomic) IKJSDataItem *dataItem; // ivar: _dataItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) IKDOMElement *domElement; // ivar: _domElement
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _IKDOMMutationRuleSet *mutationRuleSet; // ivar: _mutationRuleSet
@property (readonly, weak, nonatomic) IKDOMBindingController *parent; // ivar: _parent
@property (readonly, nonatomic) NSDictionary *prototypeGroupsByType; // ivar: _prototypeGroupsByType
@property (readonly, nonatomic) NSUInteger resolutionTarget; // ivar: _resolutionTarget
@property (readonly, nonatomic) NSObject<IKDOMBindingStrategy> *strategy; // ivar: _strategy
@property (readonly) Class superclass;


+(id)_parsedMutationRulesForDOMElement:(id)arg0 ;
+(id)_prototypeGroupsByTypeForDOMElement:(id)arg0 ;
+(id)domBindingControllerForDOMElement:(id)arg0 ;
+(id)instantiateDOMElementForItem:(id)arg0 withPrototype:(id)arg1 parentDOMElement:(id)arg2 existingDOMElement:(id)arg3 ;
+(id)parsedBindingForDOMElement:(id)arg0 ;
+(void)prepareForDOMElement:(id)arg0 ;
-(BOOL)_canBeReused;
-(id)findPrototypeForDataItem:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 ;
-(void)_evaluateMutationRules;
-(void)_resolveBinding;
-(void)dataObservable:(id)arg0 didChangePropertyPathWithString:(id)arg1 extraInfo:(id)arg2 ;
-(void)dealloc;
// -(void)scheduleUpdateUsingPreUpdate:(id)arg0 update:(unk)arg1  ;


@end


#endif
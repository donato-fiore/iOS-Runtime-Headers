// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDODGINGRESOLVERVIEWCONTROLLER_H
#define SBDODGINGRESOLVERVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol SBChainableModifierDelegate;


#import "SBDodgingModel.h"
#import "SBRootDodgingLayerModifier.h"

@interface SBDodgingResolverViewController : UIViewController <SBChainableModifierDelegate>



@property (nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *debugOverlay; // ivar: _debugOverlay
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDispatchingEvent) BOOL dispatchingEvent; // ivar: _dispatchingEvent
@property (retain, nonatomic) NSMutableArray *eventQueue; // ivar: _eventQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *itemsForIdentifiers; // ivar: _itemsForIdentifiers
@property (retain, nonatomic) NSMutableSet *itemsNeedingNonAnimatedUpdate; // ivar: _itemsNeedingNonAnimatedUpdate
@property (retain, nonatomic) NSMutableSet *itemsNeedingUpdate; // ivar: _itemsNeedingUpdate
@property (nonatomic) NSUInteger lastUpdateTimeNS; // ivar: _lastUpdateTimeNS
@property (retain, nonatomic) SBDodgingModel *model; // ivar: _model
@property (nonatomic) BOOL needsLayout; // ivar: _needsLayout
@property (nonatomic) BOOL needsModelUpdate; // ivar: _needsModelUpdate
@property (retain, nonatomic) SBRootDodgingLayerModifier *rootModifier; // ivar: _rootModifier
@property (readonly) Class superclass;


-(CGFloat)spaceBetweenIdentifiers;
-(NSInteger)interfaceOrientation;
-(id)addItemWithIdentifier:(id)arg0 view:(id)arg1 initialCenter:(struct CGPoint )arg2 initialSize:(struct CGSize )arg3 delegate:(id)arg4 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)invalidateItem:(id)arg0 ;
-(id)preferenceForIdentifier:(id)arg0 ;
-(struct CGRect )contentViewBounds;
-(void)_dispatchNextEventIfNeededAndHandleResponse;
-(void)_dispatchOrAppendEvent:(id)arg0 ;
-(void)_handleEventResponse:(id)arg0 ;
-(void)_performEventResponse:(id)arg0 ;
-(void)_performInvalidationResponse:(id)arg0 ;
-(void)_performScheduleEventResponse:(id)arg0 ;
-(void)_setAllItemsNeedUpdate;
-(void)_setItemNeedsUpdate:(id)arg0 ;
-(void)_updateItemIfNeeded:(id)arg0 ;
-(void)_updateItemsIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updateLayoutWithItemIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_updateModelIfNeeded;
-(void)loadView;
-(void)performTransitionFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 animated:(BOOL)arg2 mutationBlock:(id)arg3 ;
-(void)setItemNeedsUpdate:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGADGETPROVIDER_H
#define PXGADGETPROVIDER_H

@class NSString, NSArray;
@protocol PXMutableGadgetProvider, PXGadgetDelegate, PXGadgetProviderDelegate, PXGadgetTransition;

#import <Foundation/Foundation.h>

#import "PXGadgetNavigationHelper.h"

@interface PXGadgetProvider : NSObject <PXMutableGadgetProvider, PXGadgetDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (copy) NSArray *gadgets; // ivar: _gadgets
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL invalidGadgets; // ivar: _invalidGadgets
@property (nonatomic) BOOL isPerformingChanges; // ivar: _isPerformingChanges
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder; // ivar: _nextGadgetResponder
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;


-(BOOL)gadget:(id)arg0 transitionToViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)gadgetViewControllerHostingGadget:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)presentationEnvironmentForGadget:(id)arg0 ;
-(void)_teardownGadget:(id)arg0 ;
-(void)_updateIfNeeded;
-(void)addGadgets:(id)arg0 ;
-(void)dismissGadgetViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)gadget:(id)arg0 animateChanges:(id)arg1 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)generateGadgets;
-(void)insertGadgets:(id)arg0 atIndexes:(id)arg1 ;
-(void)loadDataForGadgets;
-(void)loadDataForPriority;
-(void)pauseLoadingRemainingData;
-(void)performChanges:(id)arg0 ;
-(void)presentGadgetViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeAllGadgets;
-(void)removeGadgets:(id)arg0 ;
-(void)removeGadgetsAtIndexes:(id)arg0 ;
-(void)startLoadingRemainingData;


@end


#endif
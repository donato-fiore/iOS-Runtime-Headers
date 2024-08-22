// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTVISUALSTYLINGPROVIDER_H
#define MTVISUALSTYLINGPROVIDER_H

@class MTCoreMaterialVisualStylingProvider, NSString, NSPointerArray, NSMutableDictionary, NSMapTable;
@protocol MTCoreMaterialVisualStylingProviderObserving;

#import <Foundation/Foundation.h>


@interface MTVisualStylingProvider : NSObject <MTCoreMaterialVisualStylingProviderObserving>



@property (readonly, nonatomic, getter=_coreMaterialVisualStylingProvider) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider;
@property (retain, nonatomic, getter=_coreMaterialVisualStylingProvider) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider; // ivar: _coreMaterialVisualStylingProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_privateObservers) NSPointerArray *privateObservers; // ivar: _privateObservers
@property (retain, nonatomic, getter=_styleNamesToVisualStylings) NSMutableDictionary *styleNamesToVisualStylings; // ivar: _styleNamesToVisualStylings
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_viewsAndLayersToCoreMaterialVisualStyles) NSMapTable *viewsAndLayersToCoreMaterialVisualStyles; // ivar: _viewsAndLayersToCoreMaterialVisualStyles
@property (retain, nonatomic, getter=_viewsAndLayersToObserverBlocks) NSMapTable *viewsAndLayersToObserverBlocks; // ivar: _viewsAndLayersToObserverBlocks


+(Class)_visualStylingClass;
+(id)_visualStylingProviderForRecipe:(NSInteger)arg0 andCategory:(NSInteger)arg1 ;
+(id)_visualStylingProviderForRecipe:(NSInteger)arg0 category:(NSInteger)arg1 andUserInterfaceStyle:(NSInteger)arg2 ;
+(id)_visualStylingProviderForRecipeNamed:(id)arg0 andCategory:(NSInteger)arg1 ;
+(id)_visualStylingProviderForStyleSetNamed:(id)arg0 inBundle:(id)arg1 ;
-(BOOL)_isAutomaticallyUpdatingViewOrLayer:(id)arg0 ;
-(BOOL)isAutomaticallyUpdatingLayer:(id)arg0 ;
-(BOOL)isAutomaticallyUpdatingView:(id)arg0 ;
-(id)_visualStylingForContinuallyUpdatedView:(id)arg0 ;
-(id)_visualStylingForStyle:(NSInteger)arg0 ;
-(id)_visualStylingForStyleNamed:(id)arg0 ;
-(id)initWithCoreMaterialVisualStylingProvider:(id)arg0 ;
-(id)newAutomaticallyUpdatingViewWithStyle:(NSInteger)arg0 ;
-(void)_addObserver:(id)arg0 ;
-(void)_automaticallyUpdateView:(id)arg0 withStyleNamed:(id)arg1 andObserverBlock:(id)arg2 ;
-(void)_automaticallyUpdateViewOrLayer:(id)arg0 withStyleNamed:(id)arg1 andObserverBlock:(id)arg2 ;
-(void)_removeObserver:(id)arg0 ;
-(void)_stopAutomaticallyUpdatingViewOrLayer:(id)arg0 ;
-(void)_updateVisualStyleOfViewOrLayer:(id)arg0 ;
-(void)automaticallyUpdateLayer:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)automaticallyUpdateLayer:(id)arg0 withStyle:(NSInteger)arg1 andObserverBlock:(id)arg2 ;
-(void)automaticallyUpdateView:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)automaticallyUpdateView:(id)arg0 withStyle:(NSInteger)arg1 andObserverBlock:(id)arg2 ;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)stopAutomaticallyUpdatingLayer:(id)arg0 ;
-(void)stopAutomaticallyUpdatingView:(id)arg0 ;


@end


#endif
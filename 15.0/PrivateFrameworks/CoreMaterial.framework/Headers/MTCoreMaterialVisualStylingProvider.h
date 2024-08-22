// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCOREMATERIALVISUALSTYLINGPROVIDER_H
#define MTCOREMATERIALVISUALSTYLINGPROVIDER_H

@class NSPointerArray, NSString;
@protocol MTVisualStyleSetProviding;

#import <Foundation/Foundation.h>


@interface MTCoreMaterialVisualStylingProvider : NSObject

@property (retain, nonatomic, getter=_observers) NSPointerArray *observers; // ivar: _observers
@property (retain, nonatomic, getter=_visualStyleSet, setter=_setVisualStyleSet:) NSObject<MTVisualStyleSetProviding> *visualStyleSet; // ivar: _visualStyleSet
@property (readonly, copy, nonatomic) NSString *visualStyleSetName;


+(BOOL)canGenerateVisualStyleSetFromRecipe:(id)arg0 ;
+(id)coreMaterialVisualStylingProviderForRecipe:(id)arg0 andCategory:(id)arg1 ;
+(id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg0 inBundle:(id)arg1 ;
-(BOOL)updateVisualStyleSetFromRecipe:(id)arg0 andCategory:(id)arg1 ;
-(BOOL)updateVisualStyleSetGeneratedFromRecipe:(id)arg0 ;
-(id)description;
-(id)visualStylingForStyle:(id)arg0 ;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUVIEWCONTROLLERSPEC_H
#define PUVIEWCONTROLLERSPEC_H

@class NSHashTable, UITraitCollection;

#import <Foundation/Foundation.h>

#import "PUViewControllerSpecChange.h"

@interface PUViewControllerSpec : NSObject

@property (nonatomic, setter=_setChangeCount:) NSInteger _changeCount; // ivar: __changeCount
@property (readonly, nonatomic) NSHashTable *_changeObservers; // ivar: __changeObservers
@property (nonatomic, setter=_setNeedsUpdateLayoutStyle:) BOOL _needsUpdateLayoutStyle; // ivar: __needsUpdateLayoutStyle
@property (readonly, nonatomic) PUViewControllerSpecChange *currentChange; // ivar: _currentChange
@property (readonly, nonatomic) NSInteger currentLayoutStyle; // ivar: _currentLayoutStyle
@property (nonatomic) CGSize layoutReferenceSize; // ivar: _layoutReferenceSize
@property (nonatomic) BOOL prefersCompactLayoutForSplitScreen; // ivar: _prefersCompactLayoutForSplitScreen
@property (nonatomic, getter=isPresentedForSecondScreen) BOOL presentedForSecondScreen; // ivar: _presentedForSecondScreen
@property (nonatomic) CGSize secondScreenSize; // ivar: _secondScreenSize
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)init;
-(id)newSpecChange;
-(struct CGSize )_portraitOrientedSizeForSize:(struct CGSize )arg0 ;
-(void)_didChange;
-(void)_invalidateLayoutStyle;
-(void)_publishChange:(id)arg0 ;
-(void)_updateCurrentLayoutStyleIfNeeded;
-(void)_willChange;
-(void)assertInsideChangesBlock;
-(void)performChanges:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)updateIfNeeded;


@end


#endif
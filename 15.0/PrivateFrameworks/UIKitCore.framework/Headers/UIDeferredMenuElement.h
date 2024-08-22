// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDEFERREDMENUELEMENT_H
#define UIDEFERREDMENUELEMENT_H

@class NSString, NSArray;
@protocol _UIMenuLeaf, UIDeferredMenuElementDelegate;


#import "UIMenuElement.h"
#import "UIImage.h"

@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf>

 {
    BOOL _cacheItems;
    BOOL _isSignalingFulfillment;
}


@property (nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDeferredMenuElementDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *discoverabilityTitle; // ivar: _discoverabilityTitle
@property (copy, nonatomic) id *elementProvider; // ivar: _elementProvider
@property (readonly, nonatomic) BOOL fulfilled; // ivar: _fulfilled
@property (readonly, copy, nonatomic) NSArray *fulfilledElements; // ivar: _fulfilledElements
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (retain, nonatomic) id *metadata; // ivar: _metadata
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput; // ivar: _requiresAuthenticatedInput
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)_elementCachingItems:(BOOL)arg0 provider:(id)arg1 ;
+(id)elementWithProvider:(id)arg0 ;
+(id)elementWithUncachedProvider:(id)arg0 ;
-(BOOL)_isDefaultCommand;
-(BOOL)isLeaf;
-(BOOL)isLoadingPlaceholder;
-(NSInteger)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(id)_resolvedTargetFromFirstTarget:(id)arg0 ;
-(id)_validatedLeafWithAlternate:(id)arg0 target:(id)arg1 validation:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(void)_acceptMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2 deferredElementVisit:(unk)arg3  ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_fulfillIfNecessary;
-(void)_performWithTarget:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
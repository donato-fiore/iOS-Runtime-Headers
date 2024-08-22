// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOMMAND_H
#define UICOMMAND_H

@class NSArray, NSString, NSPointerArray;
@protocol _UIMenuLeaf, _UIMenuStateObserverableLeaf;


#import "UIMenuElement.h"
#import "UIImage.h"

@interface UICommand : UIMenuElement <_UIMenuLeaf, _UIMenuStateObserverableLeaf>



@property (readonly, nonatomic) id *_target; // ivar: __target
@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, nonatomic) NSArray *alternates; // ivar: _alternates
@property (nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *discoverabilityTitle; // ivar: _discoverabilityTitle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (readonly, nonatomic) id *propertyList; // ivar: _propertyList
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic, getter=_getStateObservers, setter=_setStateObservers:) NSPointerArray *stateObservers; // ivar: stateObservers
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
+(id)_defaultCommandForAction:(SEL)arg0 ;
+(id)_defaultCommands;
+(id)commandWithTitle:(id)arg0 image:(id)arg1 action:(SEL)arg2 propertyList:(id)arg3 ;
+(id)commandWithTitle:(id)arg0 image:(id)arg1 action:(SEL)arg2 propertyList:(id)arg3 alternates:(id)arg4 ;
+(id)commandWithTitle:(id)arg0 imageName:(id)arg1 action:(SEL)arg2 ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2  ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(BOOL)_isDefaultCommand;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLeaf;
-(NSInteger)_leafKeyModifierFlags;
-(id)_alternateForModifierFlags:(NSInteger)arg0 ;
-(id)_identifier;
-(id)_immutableCopy;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(id)_resolvedTargetFromFirstTarget:(id)arg0 ;
-(id)_validatedLeafWithAlternate:(id)arg0 target:(id)arg1 validation:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommand:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageName:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(NSUInteger)arg7 state:(NSInteger)arg8 ;
// -(void)_acceptMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2 deferredElementVisit:(unk)arg3  ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_addStateObserver:(id)arg0 ;
-(void)_performWithTarget:(id)arg0 ;
-(void)_removeStateObserver:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMENU_H
#define UIMENU_H

@class NSArray, NSString;
@protocol UIMenuSelectable, _UIMenuElementStateObserver, UIMenuForcedAutomaticSelectionDelegate;


#import "UIMenuElement.h"

@interface UIMenu : UIMenuElement <UIMenuSelectable, _UIMenuElementStateObserver>



@property (readonly, copy, nonatomic) NSArray *_selectedElements;
@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceAutomaticSelection; // ivar: _forceAutomaticSelection
@property (weak, nonatomic) NSObject<UIMenuForcedAutomaticSelectionDelegate> *forcedAutomaticSelectionDelegate; // ivar: _forcedAutomaticSelectionDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) ? metadata; // ivar: _metadata
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSArray *selectedElements;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_defaultInlineMenuWithIdentifier:(id)arg0 children:(id)arg1 ;
+(id)_defaultMenuTitles;
+(id)_defaultMenuWithIdentifier:(id)arg0 children:(id)arg1 ;
+(id)menuWithChildren:(id)arg0 ;
+(id)menuWithTitle:(id)arg0 children:(id)arg1 ;
+(id)menuWithTitle:(id)arg0 image:(id)arg1 identifier:(id)arg2 options:(NSUInteger)arg3 children:(id)arg4 ;
+(id)menuWithTitle:(id)arg0 imageName:(id)arg1 identifier:(id)arg2 options:(NSUInteger)arg3 children:(id)arg4 ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2  ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_immutableCopy;
-(id)_immutableCopySharingLeafObservers:(BOOL)arg0 ;
-(id)_mutableCopy;
-(id)_spiRepresentation;
-(id)childElementForElement:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMenu:(id)arg0 overrideChildren:(id)arg1 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageName:(id)arg2 identifier:(id)arg3 options:(NSUInteger)arg4 children:(id)arg5 ;
-(id)menuByReplacingChildren:(id)arg0 ;
-(id)recurisvelySelectDefaultForcedSelection;
// -(void)_acceptMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2 deferredElementVisit:(unk)arg3  ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_elementStateDidChange:(id)arg0 ;
-(void)_elementWillPerformAction:(id)arg0 ;
-(void)addAsStateObserver;
-(void)encodeWithCoder:(id)arg0 ;
-(void)establishInitialDefaultSingleSelection;
-(void)removeAsStateObserver;
-(void)updateChildrenForSingleSelectedElement:(id)arg0 ;


@end


#endif
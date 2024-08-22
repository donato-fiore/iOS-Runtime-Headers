// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWSETPLACEMENT_H
#define UIINPUTVIEWSETPLACEMENT_H

@class NSArray;
@protocol NSSecureCoding, UIInputViewSetPlacementDelegate;

#import <Foundation/Foundation.h>

#import "UIInputViewSetPlacement.h"

@interface UIInputViewSetPlacement : NSObject <NSSecureCoding>

 {
    BOOL _dirty;
}


@property (readonly, nonatomic) CGFloat alpha;
@property (readonly, nonatomic) UIInputViewSetPlacement *assistantView;
@property (weak, nonatomic) NSObject<UIInputViewSetPlacementDelegate> *delegate; // ivar: delegate
@property (nonatomic) CGFloat extendedHeight; // ivar: _extendedHeight
@property (readonly, nonatomic) BOOL isCompactAssistantView;
@property (readonly, nonatomic) BOOL isFloating;
@property (readonly, nonatomic) BOOL isFloatingAssistantView;
@property (readonly, nonatomic) BOOL isHiddenForFloatingTransition;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) BOOL isUndocked;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL requiresWindowBasedSafeAreaInsets;
@property (readonly, nonatomic) BOOL showsEditItems;
@property (readonly, nonatomic) BOOL showsInputOrAssistantViews;
@property (readonly, nonatomic) BOOL showsInputViews;
@property (readonly, nonatomic) BOOL showsKeyboard;
@property (retain, nonatomic) NSArray *subPlacements; // ivar: _subPlacements


+(BOOL)supportsSecureCoding;
+(id)deactivatedKeyboardPlacementWithCurrentPlacement:(id)arg0 ;
+(id)encodablePlacementsForXPC;
+(id)placement;
-(BOOL)accessoryViewWillAppear;
-(BOOL)inputViewWillAppear;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)inputAssistantViewHeightForInputViewSet:(id)arg0 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(NSUInteger)computeComparisonMask;
-(NSUInteger)indexForPurpose:(NSUInteger)arg0 ;
-(NSUInteger)notificationsForTransitionToPlacement:(id)arg0 ;
-(id)applicatorInfoForOwner:(id)arg0 ;
-(id)description;
-(id)expiringPlacement;
-(id)horizontalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)widthConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGAffineTransform )transform;
-(struct CGRect )adjustBoundsForNotificationsWithOwner:(id)arg0 ;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;
-(struct UIEdgeInsets )inputAccessoryViewPadding;
-(void)checkSizeForOwner:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDirty;
-(void)setOtherPlacement:(id)arg0 ;


@end


#endif
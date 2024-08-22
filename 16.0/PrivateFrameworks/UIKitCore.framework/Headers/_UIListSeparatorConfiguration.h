// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UILISTSEPARATORCONFIGURATION_H
#define _UILISTSEPARATORCONFIGURATION_H



#import "UIListSeparatorConfiguration.h"
#import "UIColor.h"

@interface _UIListSeparatorConfiguration : UIListSeparatorConfiguration

@property (nonatomic, getter=_shouldAdjustColorForMultipleSelection, setter=_setAdjustColorForMultipleSelection:) BOOL _adjustColorForMultipleSelection; // ivar: _adjustColorForMultipleSelection
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *_color;
@property (nonatomic, getter=_hidingBehavior, setter=_setHidingBehavior:) NSInteger _hidingBehavior; // ivar: _hidingBehavior
@property (nonatomic, getter=_insetAdjustmentBehaviour, setter=_setInsetAdjustmentBehavior:) NSInteger _insetAdjustmentBehavior; // ivar: _insetAdjustmentBehavior
@property (nonatomic, getter=_insets, setter=_setInsets:) NSDirectionalEdgeInsets _insets;
@property (nonatomic, getter=_insetsForBoundarySeparators, setter=_setInsetsForBoundarySeparators:) NSDirectionalEdgeInsets _insetsForBoundarySeparators; // ivar: _insetsForBoundarySeparators
@property (retain, nonatomic, getter=_multipleSelectionColor, setter=_setMultipleSelectionColor:) UIColor *_multipleSelectionColor;


+(BOOL)supportsSecureCoding;
+(id)_configurationForAppearanceStyle:(NSInteger)arg0 inLayoutEnvironment:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
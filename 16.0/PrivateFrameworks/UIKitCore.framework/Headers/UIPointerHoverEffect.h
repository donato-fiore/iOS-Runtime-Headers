// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPOINTERHOVEREFFECT_H
#define UIPOINTERHOVEREFFECT_H



#import "UIPointerEffect.h"

@interface UIPointerHoverEffect : UIPointerEffect

@property (nonatomic) NSInteger preferredTintMode; // ivar: _preferredTintMode
@property (nonatomic) BOOL prefersScaledContent; // ivar: _prefersScaledContent
@property (nonatomic) BOOL prefersShadow; // ivar: _prefersShadow
@property (nonatomic) BOOL tintViewTakesOnPointerShape; // ivar: _tintViewTakesOnPointerShape


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)constrainedAxes;
-(NSUInteger)hash;
-(NSUInteger)options;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)settings;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIOVERLAYEFFECTVIEWENTRY_H
#define _UIOVERLAYEFFECTVIEWENTRY_H

@class UIVisualEffectViewEntry, NSString;


#import "UIColor.h"
#import "UIImage.h"

@interface _UIOverlayEffectViewEntry : UIVisualEffectViewEntry

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSString *filterType; // ivar: _filterType
@property (retain, nonatomic) UIImage *image; // ivar: _image


+(id)newEntryWithFilterType:(id)arg0 color:(id)arg1 alpha:(CGFloat)arg2 ;
+(id)newEntryWithFilterType:(id)arg0 image:(id)arg1 alpha:(CGFloat)arg2 ;
-(BOOL)canTransitionToEffect:(id)arg0 ;
-(id)description;
-(void)addEffectToView:(id)arg0 ;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif
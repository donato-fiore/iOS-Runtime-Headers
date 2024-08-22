// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIOVERLAYEFFECT_H
#define _UIOVERLAYEFFECT_H

@class NSString;


#import "UIVisualEffect.h"
#import "UIColor.h"
#import "UIImage.h"

@interface _UIOverlayEffect : UIVisualEffect

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSString *filterType; // ivar: _filterType
@property (retain, nonatomic) UIImage *image; // ivar: _image


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOLIDCOLORGENERATORCLIP_H
#define SOLIDCOLORGENERATORCLIP_H

@class UIColor;


#import "MotionGeneratorClip.h"

@interface SolidColorGeneratorClip : MotionGeneratorClip

@property (retain, nonatomic) UIColor *color; // ivar: _color


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generatorEffect;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;


@end


#endif
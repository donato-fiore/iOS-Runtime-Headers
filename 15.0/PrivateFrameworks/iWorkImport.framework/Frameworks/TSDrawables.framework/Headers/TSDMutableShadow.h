// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLESHADOW_H
#define TSDMUTABLESHADOW_H

@protocol TSDMutableShadow;


#import "TSDShadow.h"

@interface TSDMutableShadow : TSDShadow <TSDMutableShadow>





-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setAngle:(CGFloat)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setOffset:(CGFloat)arg0 ;
-(void)setOpacity:(CGFloat)arg0 ;
-(void)setRadius:(CGFloat)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMUTABLEDROPSHADOW_H
#define TSDMUTABLEDROPSHADOW_H

@protocol TSDMutableShadow;


#import "TSDDropShadow.h"

@interface TSDMutableDropShadow : TSDDropShadow <TSDMutableShadow>





-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setAngle:(CGFloat)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setOffset:(CGFloat)arg0 ;
-(void)setOpacity:(CGFloat)arg0 ;
-(void)setRadius:(CGFloat)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMUTABLECONTACTSHADOW_H
#define TSDMUTABLECONTACTSHADOW_H

@protocol TSDMutableShadow;


#import "TSDContactShadow.h"

@interface TSDMutableContactShadow : TSDContactShadow <TSDMutableShadow>



@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat perspective;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setAngle:(CGFloat)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setOffset:(CGFloat)arg0 ;
-(void)setOpacity:(CGFloat)arg0 ;
-(void)setRadius:(CGFloat)arg0 ;


@end


#endif
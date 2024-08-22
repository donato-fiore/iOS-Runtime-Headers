// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMUTABLECONTACTSHADOW_H
#define TSDMUTABLECONTACTSHADOW_H

@class TSUColor;


#import "TSDContactShadow.h"

@interface TSDMutableContactShadow : TSDContactShadow

@property (nonatomic) TSUColor *TSUColor;
@property (nonatomic) *CGColor color;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat offset;
@property (nonatomic) CGFloat perspective;
@property (nonatomic) CGFloat radius;


-(void)setOpacity:(CGFloat)arg0 ;


@end


#endif
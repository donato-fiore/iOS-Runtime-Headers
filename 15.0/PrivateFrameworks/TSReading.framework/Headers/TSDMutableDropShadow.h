// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLEDROPSHADOW_H
#define TSDMUTABLEDROPSHADOW_H



#import "TSDDropShadow.h"

@interface TSDMutableDropShadow : TSDDropShadow

@property (nonatomic) CGFloat angle;
@property (nonatomic) *CGColor color;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) CGFloat offset;
@property (nonatomic) CGFloat opacity;
@property (nonatomic) CGFloat radius;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setTSUColor:(id)arg0 ;


@end


#endif
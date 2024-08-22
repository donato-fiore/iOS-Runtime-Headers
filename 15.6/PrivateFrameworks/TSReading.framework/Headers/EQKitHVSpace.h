// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITHVSPACE_H
#define EQKITHVSPACE_H



#import "EQKitBox.h"

@interface EQKitHVSpace : EQKitBox

@property (readonly, nonatomic) CGFloat depth; // ivar: mDepth
@property (readonly, nonatomic) CGFloat height; // ivar: mHeight
@property (readonly, nonatomic) CGFloat layoutDepth;
@property (readonly, nonatomic) CGFloat layoutHeight;
@property (readonly, nonatomic) CGFloat width; // ivar: mWidth


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 depth:(CGFloat)arg2 ;


@end


#endif
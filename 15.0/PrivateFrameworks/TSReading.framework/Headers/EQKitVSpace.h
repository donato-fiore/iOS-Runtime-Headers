// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITVSPACE_H
#define EQKITVSPACE_H



#import "EQKitBox.h"

@interface EQKitVSpace : EQKitBox

@property (readonly, nonatomic) CGFloat depth; // ivar: mDepth
@property (readonly, nonatomic) CGFloat height; // ivar: mHeight
@property (readonly, nonatomic) CGFloat layoutDepth;
@property (readonly, nonatomic) CGFloat layoutHeight;


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHeight:(CGFloat)arg0 depth:(CGFloat)arg1 ;


@end


#endif
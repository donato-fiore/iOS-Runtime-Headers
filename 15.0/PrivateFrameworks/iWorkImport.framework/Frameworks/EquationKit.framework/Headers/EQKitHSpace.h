// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITHSPACE_H
#define EQKITHSPACE_H



#import "EQKitBox.h"

@interface EQKitHSpace : EQKitBox

@property (readonly, nonatomic) CGFloat width; // ivar: mWidth


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithWidth:(CGFloat)arg0 ;


@end


#endif
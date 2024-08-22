// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUSPACE_H
#define NUSPACE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NUSpace : NSObject

@property (retain) NSArray *transformStack; // ivar: _transformStack


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpace:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTransformStack:(id)arg0 ;
-(struct ? )transformTime:(struct ? )arg0 ;
-(struct ? )transformTime:(struct ? )arg0 toSpace:(id)arg1 ;
-(struct ? )transformTimeBackward:(struct ? )arg0 ;
-(struct CGPoint )transformPoint:(struct CGPoint )arg0 toSpace:(id)arg1 ;
-(struct CGPoint )transformPointBackward:(struct CGPoint )arg0 ;
-(struct CGPoint )transformPointForward:(struct CGPoint )arg0 ;
-(void)appendTransform:(id)arg0 ;


@end


#endif
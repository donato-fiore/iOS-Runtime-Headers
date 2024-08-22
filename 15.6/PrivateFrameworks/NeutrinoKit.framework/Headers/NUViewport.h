// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUVIEWPORT_H
#define NUVIEWPORT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUViewport : NSObject <NSCopying>



@property (nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (readonly, nonatomic) CGPoint backingPosition;
@property (readonly, nonatomic) CGFloat backingScaleFactor; // ivar: _backingScaleFactor
@property (readonly, nonatomic) CGSize backingSize;
@property (nonatomic) CGPoint position; // ivar: _position
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 backingScaleFactor:(CGFloat)arg1 ;


@end


#endif
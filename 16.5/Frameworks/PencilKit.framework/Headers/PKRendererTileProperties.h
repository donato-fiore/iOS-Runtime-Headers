// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKRENDERERTILEPROPERTIES_H
#define PKRENDERERTILEPROPERTIES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKRendererTileProperties : NSObject <NSCopying>



@property (readonly, nonatomic) CGAffineTransform drawingTransform; // ivar: _drawingTransform
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (readonly, nonatomic) CGPoint offset; // ivar: _offset
@property (readonly, nonatomic) BOOL sixChannelMode; // ivar: _sixChannelMode


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLevel:(NSInteger)arg0 offset:(struct CGPoint )arg1 drawingTransform:(struct CGAffineTransform )arg2 sixChannelMode:(BOOL)arg3 ;


@end


#endif
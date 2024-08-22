// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMATIONSCREENENVIRONMENT_H
#define KNANIMATIONSCREENENVIRONMENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNAnimationScreenEnvironment : NSObject <NSCopying>



@property (nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property (nonatomic) CGFloat pixelAspectRatio; // ivar: _pixelAspectRatio


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIPSDGRADIENTSTOP_H
#define CUIPSDGRADIENTSTOP_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying>

 {
    CGFloat location;
}




+(void)initialize;
-(BOOL)isColorStop;
-(BOOL)isDoubleStop;
-(BOOL)isOpacityStop;
-(CGFloat)location;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLocation:(CGFloat)arg0 ;


@end


#endif
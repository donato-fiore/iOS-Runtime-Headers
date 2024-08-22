// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCOLORGRADIENT_H
#define FCCOLORGRADIENT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCColorGradient : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) CGPoint startPoint; // ivar: _startPoint


+(id)blackGradient;
+(id)colorGradientWithColors:(id)arg0 locations:(id)arg1 ;
+(id)colorGradientWithConfigDict:(id)arg0 ;
+(id)whiteGradient;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSimilarToColorGradient:(id)arg0 withinPercentage:(CGFloat)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 colors:(id)arg2 locations:(id)arg3 ;


@end


#endif
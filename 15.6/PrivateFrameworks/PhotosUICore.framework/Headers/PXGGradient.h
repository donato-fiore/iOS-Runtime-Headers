// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGGRADIENT_H
#define PXGGRADIENT_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGGradient : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, copy, nonatomic) UIColor *endingColor; // ivar: _endingColor
@property (readonly, copy, nonatomic) UIColor *startingColor; // ivar: _startingColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithStartingColor:(id)arg0 endingColor:(id)arg1 direction:(NSInteger)arg2 ;


@end


#endif
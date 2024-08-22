// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPPADDING_H
#define TSWPPADDING_H


#import <Foundation/Foundation.h>


@interface TSWPPadding : NSObject

@property (nonatomic) CGFloat bottomInset; // ivar: _bottomInset
@property (nonatomic) CGFloat leftInset; // ivar: _leftInset
@property (nonatomic) CGFloat rightInset; // ivar: _rightInset
@property (nonatomic) CGFloat topInset; // ivar: _topInset


+(id)padding;
+(id)paddingWithTopInset:(CGFloat)arg0 leftInset:(CGFloat)arg1 bottomInset:(CGFloat)arg2 rightInset:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTopInset:(CGFloat)arg0 leftInset:(CGFloat)arg1 bottomInset:(CGFloat)arg2 rightInset:(CGFloat)arg3 ;
-(void)transform:(struct CGAffineTransform )arg0 ;


@end


#endif
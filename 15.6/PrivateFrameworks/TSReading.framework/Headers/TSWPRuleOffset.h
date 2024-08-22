// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPRULEOFFSET_H
#define TSWPRULEOFFSET_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPRuleOffset : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat dX; // ivar: _dX
@property (readonly, nonatomic) CGFloat dY; // ivar: _dY


+(id)ruleOffset;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDX:(CGFloat)arg0 dY:(CGFloat)arg1 ;
-(struct CGPoint )pointValue;
-(struct CGSize )sizeValue;


@end


#endif
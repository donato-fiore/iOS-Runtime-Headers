// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLAYOUTPOINT_H
#define NSLAYOUTPOINT_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "NSLayoutXAxisAnchor.h"
#import "NSLayoutYAxisAnchor.h"

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding>



@property (readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor; // ivar: _xAxisAnchor
@property (readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor; // ivar: _yAxisAnchor


+(id)layoutPointWithXAxisAnchor:(id)arg0 yAxisAnchor:(id)arg1 ;
+(id)pointWithXAxisAnchor:(id)arg0 yAxisAnchor:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)constraintsEqualToLayoutPoint:(id)arg0 ;
-(id)constraintsEqualToPoint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)layoutPointByOffsettingWithXOffset:(CGFloat)arg0 yOffset:(CGFloat)arg1 ;
-(id)layoutPointByOffsettingWithXOffsetDimension:(id)arg0 yOffsetDimension:(id)arg1 ;
-(id)pointByOffsettingWithXOffset:(CGFloat)arg0 yOffset:(CGFloat)arg1 ;
-(id)pointByOffsettingWithXOffsetDimension:(id)arg0 yOffsetDimension:(id)arg1 ;
-(id)ruleEqualToLayoutPoint:(id)arg0 ;
-(struct CGPoint )valueInItem:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSNAPSTRIPVIEWINDICATORINFO_H
#define PXSNAPSTRIPVIEWINDICATORINFO_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PXSnapStripViewIndicatorInfo : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIndicatorInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithOffset:(CGFloat)arg0 color:(id)arg1 style:(NSUInteger)arg2 ;


@end


#endif
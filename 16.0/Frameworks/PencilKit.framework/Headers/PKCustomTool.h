// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCUSTOMTOOL_H
#define PKCUSTOMTOOL_H

@class UIColor, NSString;


#import "PKTool.h"
#import "PKToolConfiguration.h"

@interface PKCustomTool : PKTool

@property (readonly, nonatomic) UIColor *color;
@property (readonly, copy, nonatomic) PKToolConfiguration *customConfigurationCopy;
@property (readonly, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (readonly, nonatomic) CGFloat weight;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithColor:(id)arg0 ;
-(id)copyWithScrubbedColor:(id)arg0 ;
-(id)copyWithScrubbedWeight:(CGFloat)arg0 ;
-(id)copyWithWeight:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCustomIdentifier:(id)arg0 configuration:(id)arg1 color:(id)arg2 weight:(CGFloat)arg3 ;


@end


#endif
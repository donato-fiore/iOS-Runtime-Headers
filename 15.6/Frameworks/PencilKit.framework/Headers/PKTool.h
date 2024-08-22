// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTOOL_H
#define PKTOOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKInk.h"

@interface PKTool : NSObject <NSCopying>



@property (readonly, nonatomic) PKInk *ink; // ivar: _ink


+(BOOL)_inkIsInkingTool:(id)arg0 ;
+(id)_toolWithInk:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 color:(id)arg1 weight:(CGFloat)arg2 ;
-(id)_initWithInk:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(id)arg0 color:(id)arg1 weight:(CGFloat)arg2 ;


@end


#endif
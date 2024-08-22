// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OABCOLOR_H
#define OABCOLOR_H


#import <Foundation/Foundation.h>


@interface OABColor : NSObject



+(id)readColor:(struct EshColor *)arg0 colorPropertiesManager:(id)arg1 state:(id)arg2 ;
+(int)readColorAdjustmentType:(int)arg0 ;
+(int)readSystemColorID:(int)arg0 ;
+(int)writeSystemColorID:(int)arg0 ;
+(struct EshColor )propertyColor:(int)arg0 colorPropertiesManager:(id)arg1 ;


@end


#endif
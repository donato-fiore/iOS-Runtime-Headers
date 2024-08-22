// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTIEREDDECIMALPRECISIONRULE_H
#define HKTIEREDDECIMALPRECISIONRULE_H

@class NSString;
@protocol HKDecimalPrecisionRule;

#import <Foundation/Foundation.h>


@interface HKTieredDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)numberFormatter;
+(id)percentageFormatter;
-(NSInteger)decimalPrecisionForValue:(CGFloat)arg0 ;
-(NSInteger)maximumDecimalPrecision;
-(NSInteger)minimumDecimalPrecision;
-(id)numberFormatter;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSTATICDECIMALPRECISIONRULE_H
#define HKSTATICDECIMALPRECISIONRULE_H

@class NSString;
@protocol HKDecimalPrecisionRule;

#import <Foundation/Foundation.h>


@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger decimalPrecision; // ivar: _decimalPrecision
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)decimalPrecisionForValue:(CGFloat)arg0 ;
-(NSInteger)maximumDecimalPrecision;
-(NSInteger)minimumDecimalPrecision;
-(id)initWithDecimalPrecision:(NSInteger)arg0 ;
-(id)numberFormatter;


@end


#endif
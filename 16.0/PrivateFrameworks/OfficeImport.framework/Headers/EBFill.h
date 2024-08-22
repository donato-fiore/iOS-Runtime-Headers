// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EBFILL_H
#define EBFILL_H


#import <Foundation/Foundation.h>


@interface EBFill : NSObject



+(BOOL)extractFromEDFill:(id)arg0 foreColorReference:(*id)arg1 backColorReference:(*id)arg2 fillPatternEnum:(*int)arg3 ;
+(id)edFillFromXlDXf:(struct XlDXf *)arg0 edResources:(id)arg1 ;
+(id)edFillFromXlXf:(struct XlXf *)arg0 edResources:(id)arg1 ;
+(int)convertEDPatternFillEnumToXl:(int)arg0 ;
+(int)convertXlFillPatternEnumToED:(int)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EBCONDITIONALFORMAT_H
#define EBCONDITIONALFORMAT_H


#import <Foundation/Foundation.h>


@interface EBConditionalFormat : NSObject



+(BOOL)validXlCf:(struct XlCf *)arg0 ;
+(int)convertEDConditionalFmtOperatorEnumToXl:(int)arg0 ;
+(int)convertEDConditionalFmtTypeEnumToXl:(int)arg0 ;
+(int)convertXlConditionalFmtOperatorEnumToED:(int)arg0 ;
+(int)convertXlConditionalFmtTypeEnumToED:(int)arg0 ;
+(void)readXlConditionalFormat:(*void)arg0 toEDConditionalFormatting:(id)arg1 state:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCENILCELLVALUE_H
#define TSCENILCELLVALUE_H



#import "TSCECellValue.h"

@interface TSCENilCellValue : TSCECellValue



-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCellValue:(id)arg0 ;
-(NSInteger)compareToCellValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)canonicalKeyString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayString;
-(id)format;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(struct TSCEValue )tsceValue;


@end


#endif
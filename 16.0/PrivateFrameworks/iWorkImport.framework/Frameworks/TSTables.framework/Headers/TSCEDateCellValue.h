// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEDATECELLVALUE_H
#define TSCEDATECELLVALUE_H



#import "TSCECellValue.h"

@interface TSCEDateCellValue : TSCECellValue {
    *TSCEDateValue _dateValue;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCellValue:(id)arg0 ;
-(NSInteger)compareToCellValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)canonicalKeyString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayString;
-(id)format;
-(id)initWithArchive:(*void)arg0 locale:(id)arg1 ;
-(id)initWithDate:(id)arg0 locale:(id)arg1 ;
-(id)initWithDateValue:(struct TSCEDateValue *)arg0 locale:(id)arg1 ;
-(struct TSCEDateValue *)dateValue;
-(struct TSCEValue )tsceValue;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 ;
-(void)setPopulatedCustomFormat:(id)arg0 ;


@end


#endif
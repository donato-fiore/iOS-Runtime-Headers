// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCESTRINGCELLVALUE_H
#define TSCESTRINGCELLVALUE_H



#import "TSCECellValue.h"

@interface TSCEStringCellValue : TSCECellValue {
    *TSCEStringValue _stringValue;
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
-(id)initWithString:(id)arg0 locale:(id)arg1 ;
-(id)initWithStringValue:(struct TSCEStringValue *)arg0 locale:(id)arg1 ;
-(struct TSCEStringValue *)stringValue;
-(struct TSCEValue )tsceValue;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 ;
-(void)setPopulatedCustomFormat:(id)arg0 ;


@end


#endif
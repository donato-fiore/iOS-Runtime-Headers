// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEBOOLEANCELLVALUE_H
#define TSCEBOOLEANCELLVALUE_H



#import "TSCECellValue.h"

@interface TSCEBooleanCellValue : TSCECellValue {
    *TSCEBooleanValue _booleanValue;
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
-(id)initWithBoolean:(BOOL)arg0 locale:(id)arg1 ;
-(id)initWithBooleanValue:(struct TSCEBooleanValue *)arg0 locale:(id)arg1 ;
-(struct TSCEBooleanValue *)booleanValue;
-(struct TSCEValue )tsceValue;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif
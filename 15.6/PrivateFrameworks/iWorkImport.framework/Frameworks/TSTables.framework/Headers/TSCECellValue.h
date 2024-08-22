// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCECELLVALUE_H
#define TSCECELLVALUE_H

@class TSULocale;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCECellValue : NSObject <NSCopying>



@property (retain, nonatomic) TSULocale *locale; // ivar: _locale
@property (nonatomic) char valueType; // ivar: _valueType


+(id)cellValueWithArchive:(*void)arg0 locale:(id)arg1 ;
+(id)newCellValueFromTSCEValue:(struct TSCEValue *)arg0 withLocale:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCellValue:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareToCellValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)canonicalKeyString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayString;
-(id)format;
-(id)initWithLocale:(id)arg0 ;
-(struct TSCEValue )tsceValue;
-(void)encodeCellValueToArchive:(*void)arg0 ;
-(void)setPopulatedCustomFormat:(id)arg0 ;
-(void)updateWithCustomFormatList:(id)arg0 ;


@end


#endif
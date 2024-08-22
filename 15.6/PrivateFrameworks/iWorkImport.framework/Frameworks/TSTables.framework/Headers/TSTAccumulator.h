// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTACCUMULATOR_H
#define TSTACCUMULATOR_H

@class TSULocale;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTAccumulator : NSObject <NSCopying>

 {
    TSCEValue _minValue;
    TSCEValue _maxValue;
    TSCENumberValue _productValue;
    TSCENumberValue _numberTotalValue;
    TSCEDateValue _firstDateSeen;
    CGFloat _totalSecsSinceReferenceDate;
    CGFloat _secondsToAdd;
}


@property (readonly, nonatomic) TSCEValue avgAValue;
@property (readonly, nonatomic) TSCEValue avgValue;
@property (readonly, nonatomic) unsigned int boolCount; // ivar: _boolCount
@property (readonly, nonatomic) unsigned int boolTrueCount; // ivar: _boolTrueCount
@property (readonly, nonatomic) NSUInteger countA;
@property (readonly, nonatomic) TSCEValue countAValue;
@property (readonly, nonatomic) NSUInteger countOfNumberDateDurationOrBool;
@property (readonly, nonatomic) NSUInteger countRows;
@property (readonly, nonatomic) TSCEValue countRowsValue;
@property (readonly, nonatomic) TSCEValue countValue;
@property (readonly, nonatomic) unsigned int dateCount; // ivar: _dateCount
@property (readonly, nonatomic) unsigned int durationCount; // ivar: _durationCount
@property (readonly, nonatomic) unsigned int errorCount; // ivar: _errorCount
@property (nonatomic) BOOL isCircularReference; // ivar: _isCircularReference
@property (retain, nonatomic) TSULocale *locale; // ivar: _locale
@property (readonly, nonatomic) TSCEValue maxValue;
@property (readonly, nonatomic) TSCEValue minValue;
@property (readonly, nonatomic) unsigned int noContentCount; // ivar: _noContentCount
@property (readonly, nonatomic) unsigned int numberCount; // ivar: _numberCount
@property (readonly, nonatomic) TSCEValue productValue;
@property (readonly, nonatomic) TSCEValue rangeValue;
@property (readonly, nonatomic) unsigned int stringCount; // ivar: _stringCount
@property (readonly, nonatomic) TSCEValue totalValue;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(struct TSCEValue )countBlankValue;
-(struct TSCEValue )p_averageValueWithA:(BOOL)arg0 ;
-(struct TSCEValue )valueForType:(unsigned char)arg0 ;
-(void)accumulate:(id)arg0 ;
-(void)accumulateValue:(struct TSCEValue *)arg0 ;
-(void)clear;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif
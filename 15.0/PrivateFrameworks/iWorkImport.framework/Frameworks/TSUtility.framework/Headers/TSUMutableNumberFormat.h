// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUMUTABLENUMBERFORMAT_H
#define TSUMUTABLENUMBERFORMAT_H



#import "TSUNumberFormat.h"

@interface TSUMutableNumberFormat : TSUNumberFormat



-(void)p_copyIVarsFromNumberFormat:(id)arg0 ;
-(void)setBase:(unsigned char)arg0 ;
-(void)setBasePlaces:(unsigned short)arg0 ;
-(void)setCurrencyCode:(id)arg0 ;
-(void)setCustomFormatKey:(id)arg0 ;
-(void)setDecimalPlaces:(unsigned short)arg0 ;
-(void)setFractionAccuracy:(char)arg0 ;
-(void)setNegativeStyle:(unsigned char)arg0 ;
-(void)setNilValueForKey:(id)arg0 ;
-(void)setPrefixString:(id)arg0 ;
-(void)setShowThousandsSeparator:(BOOL)arg0 ;
-(void)setSuffixString:(id)arg0 ;
-(void)setUseAccountingStyle:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHMUTABLENUMBERFORMAT_H
#define TSCHMUTABLENUMBERFORMAT_H

@class NSString;
@protocol TSCHCustomFormatUpdateSupport;


#import "TSCHNumberFormat.h"

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatUpdateSupport>



@property (nonatomic) unsigned int base;
@property (nonatomic) unsigned int basePlaces;
@property (nonatomic) BOOL baseUseMinusSign;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) unsigned int decimalPlaces;
@property (nonatomic) unsigned int formatType;
@property (nonatomic) char fractionAccuracy;
@property (nonatomic) unsigned char negativeStyle;
@property (copy, nonatomic) NSString *prefixString;
@property (nonatomic) BOOL showThousandsSeparator;
@property (copy, nonatomic) NSString *suffixString;
@property (nonatomic) BOOL useAccountingStyle;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg0 ;
-(void)setValueType:(int)arg0 ;
-(void)updateAfterPasteForDocumentRoot:(id)arg0 pasteboardCustomFormatList:(id)arg1 ;
-(void)updateCustomFormatKey:(id)arg0 ;
-(void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg0 ;


@end


#endif
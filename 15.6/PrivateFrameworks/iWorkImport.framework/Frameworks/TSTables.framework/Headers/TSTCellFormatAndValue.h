// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLFORMATANDVALUE_H
#define TSTCELLFORMATANDVALUE_H

@class NSString, TSWPStorage, TSKFormat, NSDate;
@protocol NSCopying, TSTCellDiffing, TSSPropertyCommandSerializing;

#import <Foundation/Foundation.h>


@interface TSTCellFormatAndValue : NSObject <NSCopying, TSTCellDiffing, TSSPropertyCommandSerializing>

 {
    BOOL _valueType;
    BOOL _useAllSpareFormats;
    BOOL _suppressApplyValue;
    BOOL _applySpareFormatOnly;
    unsigned int _spareFormatType;
    BOOL _boolValue;
    TSUDecimal _decimalValue;
    NSObject *_objValue;
    NSString *_formattedValue;
    TSWPStorage *_formattedRichTextStorage;
    unsigned short _explicitFlags;
    unsigned char _cellFormatKind;
    TSKFormat *_numberFormat;
    TSKFormat *_currencyFormat;
    TSKFormat *_dateFormat;
    TSKFormat *_durationFormat;
    TSKFormat *_booleanFormat;
    TSKFormat *_textFormat;
}


@property (readonly, copy, nonatomic) NSDate *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isApplySpareFormatOnly;
@property (readonly, nonatomic) BOOL isFormulaSyntaxError;
@property (readonly, nonatomic) TSUDecimal numberOrCurrencyDecimalValue;
@property (readonly, nonatomic) TSWPStorage *richTextOrErrorTextStorageValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned char valueType;


+(id)cellDiffProperties;
+(id)formatAndValueFromCell:(id)arg0 applySpareFormatOnly:(unsigned int)arg1 ;
+(id)formatAndValueFromCell:(id)arg0 useAllSpareFormats:(BOOL)arg1 ;
+(id)formatAndValueFromCell:(id)arg0 useAllSpareFormats:(BOOL)arg1 forceNoContent:(BOOL)arg2 ;
+(id)formatAndValueFromCell:(id)arg0 useAllSpareFormats:(BOOL)arg1 suppressApplyingValue:(BOOL)arg2 ;
+(id)formatAndValueFromRichTextCell:(id)arg0 updatingStorageWithBlock:(id)arg1 ;
-(BOOL)hasStringContentMatchingCell:(id)arg0 ;
-(id)cellValueWithLocale:(id)arg0 ;
-(id)copyForApplyingNoContent;
-(id)copyForApplyingNoContentWithSuppressApplyValue:(BOOL)arg0 ;
-(id)copyForNotApplyingValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getCurrentFormat;
-(id)initFromCell:(id)arg0 useAllSpareFormats:(BOOL)arg1 ;
-(id)initFromCell:(id)arg0 useAllSpareFormats:(BOOL)arg1 forceNoContent:(BOOL)arg2 suppressApplyValue:(BOOL)arg3 applySpareFormatOnly:(unsigned int)arg4 ;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)objectByRemovingPropertiesInMap:(id)arg0 addingPropertiesInMap:(id)arg1 updateInverseResetPropertyMap:(id)arg2 updateInverseSetPropertyMap:(id)arg3 ;
-(id)p_copyStorage:(id)arg0 ;
-(id)p_formatForFormatType:(unsigned char)arg0 ;
-(void)applyToCell:(id)arg0 ;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif
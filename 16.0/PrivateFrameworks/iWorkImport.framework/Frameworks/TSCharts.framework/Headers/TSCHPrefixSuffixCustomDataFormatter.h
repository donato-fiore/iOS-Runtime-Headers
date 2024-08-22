// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHPREFIXSUFFIXCUSTOMDATAFORMATTER_H
#define TSCHPREFIXSUFFIXCUSTOMDATAFORMATTER_H

@class NSString;


#import "TSCHCustomDataFormatter.h"

@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter {
    NSString *_prefixString;
    NSString *_suffixString;
}




+(id)dataFormatterWithCustomFormat:(id)arg0 customFormatListKey:(id)arg1 formatType:(unsigned int)arg2 prefixString:(id)arg3 suffixString:(id)arg4 ;
-(id)chartFormattedStringForValue:(id)arg0 locale:(id)arg1 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg0 ;
-(id)initWithCustomFormat:(id)arg0 customFormatListKey:(id)arg1 formatType:(unsigned int)arg2 prefixString:(id)arg3 suffixString:(id)arg4 ;
-(id)p_formattedStringWithBodyString:(id)arg0 ;


@end


#endif
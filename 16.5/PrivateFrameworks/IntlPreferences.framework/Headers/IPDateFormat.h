// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPDATEFORMAT_H
#define IPDATEFORMAT_H

@class NSString;


#import "IPFormat.h"

@interface IPDateFormat : IPFormat

@property (readonly, nonatomic) NSString *option; // ivar: _option
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)dateFormatIsAllNumeric:(id)arg0 ;
+(CGFloat)sampleTime;
+(id)availableDateFormats;
+(id)currentDateFormat;
+(id)dateFormatFromFormatter:(id)arg0 style:(NSUInteger)arg1 ;
+(id)dateFormatterFromLanguage;
+(id)dateFormatterFromLocale;
+(void)setDateFormat:(id)arg0 ;
-(id)initWithOption:(id)arg0 title:(id)arg1 ;


@end


#endif
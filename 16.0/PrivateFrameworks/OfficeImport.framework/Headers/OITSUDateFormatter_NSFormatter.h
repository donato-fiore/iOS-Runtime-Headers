// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUDATEFORMATTER_NSFORMATTER_H
#define OITSUDATEFORMATTER_NSFORMATTER_H

@class NSFormatter, NSString;


#import "OITSULocale.h"

@interface OITSUDateFormatter_NSFormatter : NSFormatter

@property (nonatomic) BOOL isDateOnly; // ivar: isDateOnly
@property (nonatomic) BOOL isTimeOnly; // ivar: isTimeOnly
@property (retain, nonatomic) OITSULocale *locale; // ivar: _locale
@property (retain, nonatomic) NSString *preferredFormat; // ivar: _preferredFormat


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)init;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif
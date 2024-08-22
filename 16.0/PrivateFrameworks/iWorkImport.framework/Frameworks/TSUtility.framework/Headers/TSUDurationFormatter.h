// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUDURATIONFORMATTER_H
#define TSUDURATIONFORMATTER_H

@class NSFormatter, NSString;


#import "TSULocale.h"

@interface TSUDurationFormatter : NSFormatter

@property (nonatomic) unsigned char compactStyleStartUnit; // ivar: mCompactStyleStartUnit
@property (copy, nonatomic) NSString *format; // ivar: mFormat
@property (readonly) TSULocale *locale; // ivar: mLocale


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(void)dealloc;
-(void)p_commonInit;


@end


#endif
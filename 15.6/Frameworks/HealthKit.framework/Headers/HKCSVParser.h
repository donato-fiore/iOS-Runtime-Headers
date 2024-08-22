// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCSVPARSER_H
#define HKCSVPARSER_H


#import <Foundation/Foundation.h>


@interface HKCSVParser : NSObject



+(BOOL)newlineWithScanner:(id)arg0 ;
+(id)commaCharacterSet;
+(id)fieldWithScanner:(id)arg0 error:(*id)arg1 ;
+(id)newlineCharacterSet;
+(id)parseCSV:(id)arg0 error:(*id)arg1 ;
+(id)quoteCharacterSet;
+(id)recordWithScanner:(id)arg0 error:(*id)arg1 ;
+(id)terminatingCharacterSet;


@end


#endif
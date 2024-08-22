// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ECHEADERAUTHENTICATIONRESULTSPARSER_H
#define _ECHEADERAUTHENTICATIONRESULTSPARSER_H


#import <Foundation/Foundation.h>


@interface _ECHeaderAuthenticationResultsParser : NSObject



+(BOOL)_propertiesWithScanner:(id)arg0 intoArray:(*id)arg1 ;
+(BOOL)_scanToCFWSOrEqualWithScanner:(id)arg0 intoString:(*id)arg1 ;
+(BOOL)_scanToCFWSOrPeriodOrSemicolonWithScanner:(id)arg0 intoString:(*id)arg1 ;
+(BOOL)_scanToCFWSOrSemicolonWithScanner:(id)arg0 intoString:(*id)arg1 ;
+(BOOL)_skipCFWSWithScanner:(id)arg0 ;
+(BOOL)_statementWithScanner:(id)arg0 intoStatement:(*id)arg1 ;
+(BOOL)_statementsWithScanner:(id)arg0 intoArray:(*id)arg1 ;
+(NSInteger)_versionWithScanner:(id)arg0 ;


@end


#endif
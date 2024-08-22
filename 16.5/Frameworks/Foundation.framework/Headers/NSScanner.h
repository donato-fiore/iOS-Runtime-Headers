// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSCANNER_H
#define NSSCANNER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSCharacterSet.h"
#import "NSString.h"

@interface NSScanner : NSObject <NSCopying>



@property BOOL caseSensitive;
@property (copy) NSCharacterSet *charactersToBeSkipped;
@property (retain) id *locale;
@property NSUInteger scanLocation;
@property (readonly, copy) NSString *string;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)localizedScannerWithString:(id)arg0 ;
+(id)scannerWithString:(id)arg0 ;
-(BOOL)_scanDecimal:(NSUInteger)arg0 into:(*NSInteger)arg1 ;
-(BOOL)isAtEnd;
-(BOOL)scanCharactersFromSet:(id)arg0 intoString:(*id)arg1 ;
-(BOOL)scanDecimal:(struct ? *)arg0 ;
-(BOOL)scanDouble:(*CGFloat)arg0 ;
-(BOOL)scanFloat:(*float)arg0 ;
-(BOOL)scanHexDouble:(*CGFloat)arg0 ;
-(BOOL)scanHexFloat:(*float)arg0 ;
-(BOOL)scanHexInt:(*unsigned int)arg0 ;
-(BOOL)scanHexLongLong:(*NSUInteger)arg0 ;
-(BOOL)scanInt:(*int)arg0 ;
-(BOOL)scanInteger:(*NSInteger)arg0 ;
-(BOOL)scanLongLong:(*NSInteger)arg0 ;
-(BOOL)scanString:(id)arg0 intoString:(*id)arg1 ;
-(BOOL)scanUnsignedInteger:(*NSUInteger)arg0 ;
-(BOOL)scanUnsignedLongLong:(*NSUInteger)arg0 ;
-(BOOL)scanUpToCharactersFromSet:(id)arg0 intoString:(*id)arg1 ;
-(BOOL)scanUpToString:(id)arg0 intoString:(*id)arg1 ;
-(id)_invertedSkipSet;
-(id)_remainingString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif
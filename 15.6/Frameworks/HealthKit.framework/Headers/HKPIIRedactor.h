// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKPIIREDACTOR_H
#define HKPIIREDACTOR_H

@class NSRegularExpression, NSDataDetector, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKPIIRedactor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSRegularExpression *SSNRegex; // ivar: _SSNRegex
@property (readonly, nonatomic) NSDataDetector *dataDetectorAll; // ivar: _dataDetectorAll
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipLink; // ivar: _dataDetectorSkipLink
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipLinkSkipPhoneNumbers; // ivar: _dataDetectorSkipLinkSkipPhoneNumbers
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipPhoneNumbers; // ivar: _dataDetectorSkipPhoneNumbers
@property (readonly, nonatomic) NSRegularExpression *fullWordRegex; // ivar: _fullWordRegex
@property (readonly, nonatomic) NSRegularExpression *longNumberRegex; // ivar: _longNumberRegex
@property (readonly, nonatomic) NSSet *names; // ivar: _names


+(BOOL)supportsSecureCoding;
+(id)_SSNRegularExpressionWithError:(*id)arg0 ;
+(id)_longNumberRegexWithError:(*id)arg0 ;
+(id)_redactFullWordRegexWithError:(*id)arg0 ;
+(id)redactorWithNames:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_redactDataDetectorTypesFromString:(id)arg0 options:(NSUInteger)arg1 ;
-(NSUInteger)_redactLongNumbersFromString:(id)arg0 ;
-(NSUInteger)_redactNamesFromString:(id)arg0 ;
-(NSUInteger)_redactSSNsFromString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedStringWithString:(id)arg0 ;
-(id)redactedStringWithString:(id)arg0 options:(NSUInteger)arg1 ;
-(id)redactedStringWithString:(id)arg0 options:(NSUInteger)arg1 redactedCount:(*NSUInteger)arg2 ;
-(id)redactedStringWithString:(id)arg0 redactedCount:(*NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
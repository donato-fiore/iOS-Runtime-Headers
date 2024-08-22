// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTRACEDLOG_H
#define CNTRACEDLOG_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CNTracedLog : NSObject

@property (copy) NSDictionary *customProperties; // ivar: _customProperties
@property (readonly, copy) NSString *domain; // ivar: _domain
@property (copy) NSString *domainScope; // ivar: _domainScope
@property (copy) NSString *domainVersion; // ivar: _domainVersion
@property (readonly, copy) NSString *message; // ivar: _message
@property NSInteger result; // ivar: _result
@property (copy) NSString *signature; // ivar: _signature
@property (copy) NSString *signature2; // ivar: _signature2
@property (copy) NSString *signature3; // ivar: _signature3
@property BOOL summarize; // ivar: _summarize
@property (copy) NSString *uuid; // ivar: _uuid
@property (copy) NSString *value; // ivar: _value
@property (copy) NSString *value2; // ivar: _value2
@property (copy) NSString *value3; // ivar: _value3


+(BOOL)shouldLogGivenSamplePercentage:(float)arg0 ;
+(NSInteger)roundNumber:(NSInteger)arg0 usingSignificantDigits:(NSUInteger)arg1 ;
+(id)formatIntegerByRoundingForPrivacy:(NSInteger)arg0 ;
+(id)formatTimeIntervalByRoundingForPrivacy:(CGFloat)arg0 ;
+(id)logWithDomain:(id)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 message:(id)arg1 ;
-(void)enumerateCustomKeysAndValuesUsingBlock:(id)arg0 ;
-(void)enumerateStandardKeysAndValuesUsingBlock:(id)arg0 ;
-(void)enumerateStandardizedKeysAndValuesUsingBlock:(id)arg0 ;
-(void)sendTrace;
-(void)sendValue:(id)arg0 forKey:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif
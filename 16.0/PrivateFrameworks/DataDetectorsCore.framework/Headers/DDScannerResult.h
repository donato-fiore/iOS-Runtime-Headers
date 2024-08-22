// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSCANNERRESULT_H
#define DDSCANNERRESULT_H

@class NSArray, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DDScannerResult : NSObject <NSSecureCoding>

 {
    ? _coreResult;
    NSArray *_subResultsCache;
    NSURL *_cachedURL;
    BOOL _hasCachedURL;
}


@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) NSString *matchedString;
@property _NSRange range;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) _NSRange urlificationRange;
@property (readonly, nonatomic) NSString *value;


+(?)resultFromCoreResult;
+(BOOL)supportsSecureCoding;
+(id)filterResults:(id)arg0 forTypes:(NSUInteger)arg1 referenceDate:(id)arg2 referenceTimeZone:(id)arg3 ;
+(id)resultsFromCoreResults:(struct __CFArray *)arg0 ;
+(id)shouldUrlifyBlockForTypes:(SEL)arg0 ;
-(?)initWithCoreResult;
-(BOOL)extractStartDate:(*id)arg0 startTimezone:(*id)arg1 endDate:(*id)arg2 endTimezone:(*id)arg3 allDayRef:(*BOOL)arg4 referenceDate:(id)arg5 referenceTimezone:(id)arg6 ;
-(BOOL)getFlightNumber:(*id)arg0 airline:(*id)arg1 ;
-(BOOL)getIMScreenNameValue:(*id)arg0 type:(*id)arg1 ;
-(BOOL)getMailValue:(*id)arg0 label:(*id)arg1 ;
-(BOOL)getMoneyAmount:(*CGFloat)arg0 currency:(*id)arg1 ;
-(BOOL)getPhoneValue:(*id)arg0 label:(*id)arg1 ;
-(BOOL)getStreet:(*id)arg0 city:(*id)arg1 state:(*id)arg2 zip:(*id)arg3 country:(*id)arg4 ;
-(BOOL)getTrackingNumber:(*id)arg0 carrier:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)typeIs:(struct __CFString *)arg0 ;
-(CGFloat)getDuration;
-(NSInteger)score;
-(id)contextualData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateFromReferenceDate:(id)arg0 referenceTimezone:(id)arg1 timezoneRef:(*id)arg2 allDayRef:(*BOOL)arg3 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)location;
-(id)rawValue;
-(id)subResults;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct ? )cfRange;
-(struct __DDResult *)coreResult;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSubResults:(id)arg0 ;


@end


#endif
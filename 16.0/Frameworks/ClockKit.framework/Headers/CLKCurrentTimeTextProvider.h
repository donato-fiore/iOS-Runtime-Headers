// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCURRENTTIMETEXTPROVIDER_H
#define CLKCURRENTTIMETEXTPROVIDER_H

@class NSDateComponents, NSString, NSDate;


#import "CLKTimeTextProvider.h"

@interface CLKCurrentTimeTextProvider : CLKTimeTextProvider {
    NSUInteger _calendarUnits;
    NSDateComponents *_sessionComponents;
    NSString *_sessionCacheKey;
    BOOL _sessionInProgress;
}


@property (copy, nonatomic) NSDate *overrideDate; // ivar: _overrideDate


+(BOOL)supportsSecureCoding;
+(id)textProviderWithTimeZone:(id)arg0 ;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_updateFrequency;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_endSession;
-(void)_startSessionWithDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
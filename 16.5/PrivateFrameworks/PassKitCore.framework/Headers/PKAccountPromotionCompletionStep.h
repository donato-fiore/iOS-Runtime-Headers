// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTPROMOTIONCOMPLETIONSTEP_H
#define PKACCOUNTPROMOTIONCOMPLETIONSTEP_H

@class NSString, NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountPromotionCompletionStep : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) NSDecimalNumber *currentValue; // ivar: _currentValue
@property (retain, nonatomic) NSDecimalNumber *endValue; // ivar: _endValue
@property (nonatomic) NSInteger index; // ivar: _index
@property (nonatomic) NSUInteger progressType; // ivar: _progressType


+(BOOL)supportsSecureCoding;
+(id)completionStepsFromDictionaries:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountPromotionCompletionStep:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 index:(NSInteger)arg1 ;
-(void)_initWithCompletionStepDictionary:(id)arg0 index:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
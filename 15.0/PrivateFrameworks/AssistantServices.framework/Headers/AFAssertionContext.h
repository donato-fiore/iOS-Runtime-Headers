// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFASSERTIONCONTEXT_H
#define AFASSERTIONCONTEXT_H

@class NSString, NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFAssertionContext : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *effectiveDate; // ivar: _effectiveDate
@property (readonly, nonatomic) CGFloat expirationDuration; // ivar: _expirationDuration
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTimestamp:(NSUInteger)arg0 reason:(id)arg1 effectiveDate:(id)arg2 expirationDuration:(CGFloat)arg3 userInfo:(id)arg4 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif